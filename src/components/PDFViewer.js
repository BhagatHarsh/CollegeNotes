import React from 'react';
import { Worker, Viewer } from '@react-pdf-viewer/core';
import { pdfjs } from 'react-pdf';
import './PDFViewer.css';

pdfjs.GlobalWorkerOptions.workerSrc = `//unpkg.com/pdfjs-dist@${pdfjs.version}/build/pdf.worker.min.js`;

const PDFViewer = ({ src }) => {

    return (
        <div className="pdf-viewer-container">
                <Worker workerUrl="https://unpkg.com/pdfjs-dist@3.9.179/build/pdf.worker.min.js">
                    <Viewer fileUrl={src + '?wrap=0'}/>
                </Worker>
        </div>
    );
};

export default PDFViewer;
