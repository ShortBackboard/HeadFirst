/*
 * 组合模式
 *
 * date:2023-9-16
*/

#include "file.h"
#include "directory.h"

int main()
{
    Component* root = new Directory("根目录");
    Component* directoryMusic = new Directory("音乐");
    Component* directoryVideo = new Directory("视频");

    Component* others = new File("其他");
    Component* music1 = new File("平凡之路.mp3");
    Component* music2 = new File("日落大道.mp3");

    Component* video1 = new File("C++.mp4");
    Component* video2 = new File("Python.mp4");

    root->add(directoryMusic);
    root->add(directoryVideo);
    root->add(others);

    directoryMusic->add(music1);
    directoryMusic->add(music2);

    directoryVideo->add(video1);
    directoryVideo->add(video2);

    root->print();
    directoryMusic->print();
    directoryVideo->print();


}
