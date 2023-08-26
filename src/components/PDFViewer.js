import React, { useState, useEffect } from 'react';
import { Worker, Viewer } from '@react-pdf-viewer/core';
import { pdfjs } from 'react-pdf';
import './PDFViewer.css';

pdfjs.GlobalWorkerOptions.workerSrc = `//unpkg.com/pdfjs-dist@${pdfjs.version}/build/pdf.worker.min.js`;

const PDFViewer = ({ src }) => {
    const [numPages, setNumPages] = useState(null);
    const [renderedPages, setRenderedPages] = useState(1);

    const handleLoadSuccess = ({ numPages }) => {
        setNumPages(numPages);
    };

    useEffect(() => {
        const timer = setTimeout(() => {
            if (renderedPages < numPages) {
                setRenderedPages(renderedPages + 1);
            }
        }, 2000); // Delay rendering of each page for 2 seconds

        return () => clearTimeout(timer);
    }, [renderedPages, numPages]);

    return (
        <div className="pdf-viewer-container">
            <Worker workerUrl="https://unpkg.com/pdfjs-dist@3.9.179/build/pdf.worker.min.js">
                <Viewer fileUrl={src} />
            </Worker>
        </div>
    );
};

export default PDFViewer;
