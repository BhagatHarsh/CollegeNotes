const fs = require('fs');
const path = require('path');

const videoData = {
  "Lecture_00": "d0Dx4OzkmVs",
  "Lecture_01": "E8NvnemyFd0",
  "Lecture_02": "r7SqP4PQs6A",
  "Lecture_03": "sjiU8Tntlv4",
  "Lecture_04": "xUsXbSDWfzI",
  "Lecture_05": "k4nFvBBtOHA",
  "Lecture_06": "CmMDIxiqUSk",
  "Lecture_07": "Wxo9Qy0R0Qg",
  "Lecture_08": "6xRdDkXQHUM",
  "Lecture_09": "b6WL30a5CTM",
  "Lecture_10": "TWbo5Gs3gXQ",
  "Lecture_11": "yIoVjE01RGI",
  "Lecture_12": "YVXyJo1vyfg",
};

const markdownContent = [];

for (const lecture in videoData) {
  const videoTitle = lecture.replace(/_/g, ' ');
  const videoId = videoData[lecture];
  const embedLink = `https://www.youtube.com/embed/${videoId}`;

  markdownContent.push(`### ${videoTitle}`);
  markdownContent.push(`<iframe width="100%" height="600" src="${embedLink}" frameborder="0" allowfullscreen></iframe>\n`);
}

const markdownText = markdownContent.join('\n');

const outputPath = path.join(__dirname, 'docs', 'VLSI', 'videos.mdx');

fs.writeFileSync(outputPath, markdownText, 'utf-8');

console.log(`videos.mdx file created at ${outputPath}`);
