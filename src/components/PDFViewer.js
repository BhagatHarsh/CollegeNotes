import React, { useState, useEffect } from 'react';
import { Worker, Viewer } from '@react-pdf-viewer/core';
import { pdfjs } from 'react-pdf';
import { PacmanLoader } from 'react-spinners';
import './PDFViewer.css';

pdfjs.GlobalWorkerOptions.workerSrc = `//unpkg.com/pdfjs-dist@${pdfjs.version}/build/pdf.worker.min.js`;

const PDFViewer = ({ src }) => {
    const [numPages, setNumPages] = useState(null);
    const [renderedPages, setRenderedPages] = useState(1);
    const [isLoading, setIsLoading] = useState(true);

    const handleLoadSuccess = ({ numPages }) => {
        setNumPages(numPages);
    };

    useEffect(() => {
        const timer = setTimeout(() => {
            setIsLoading(false);
        }, 2000); // Show the loader for 5 seconds

        return () => clearTimeout(timer);
    }, []);

    useEffect(() => {
        const timer = setTimeout(() => {
            if (renderedPages < numPages) {
                setRenderedPages(renderedPages + 1);
            }
        }, []); // Delay rendering of each page for 2 seconds

        return () => clearTimeout(timer);
    }, [renderedPages, numPages]);

    return (
        <div className="pdf-viewer-container">
            {isLoading ? (
                <div className="loading-bar">
                    <PacmanLoader color="#00BFFF" size={40} />
                </div>
            ) : (
                <Worker workerUrl="https://unpkg.com/pdfjs-dist@3.9.179/build/pdf.worker.min.js">
                    <Viewer fileUrl={src + '?wrap=0'} onDocumentLoadSuccess={handleLoadSuccess} />
                </Worker>
            )}
        </div>
    );
};

export default PDFViewer;
