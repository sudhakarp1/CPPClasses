#include <iostream>
using namespace std;


class MediaPlayer{
public:
	void play();
	void pause();
};

class AudioPlayer:public MediaPlayer{
public:
	void minimize();
	void maximize();
	void skin();
};

class MP3: public AudioPlayer{
	void open();
	void decompress();
	void decode();
public:
	void play();
	void pause();
};

int main(){
	MediaPlayer mp;
	mp.play();
	mp.pause();

	AudioPlayer ap;
	ap.play();
	ap.pause();

	MP3 mp3;
	mp3.play();
	mp3.pause();
}
	void MediaPlayer::play(){
		cout<<"MediaPlayer::play()"<<endl;
	}

	void MediaPlayer::pause(){
		cout<<"MediaPlayer::pause()"<<endl;
	}

	void AudioPlayer::minimize(){
		cout<<"AudioPlayer::minimize()"<<endl;
	}
	void AudioPlayer::maximize(){
		cout<<"AudioPlayer::minimize()"<<endl;
	}
	void AudioPlayer::skin(){
		cout<<"AudioPlayer::minimize()"<<endl;
	}

	void MP3::open(){
		cout<<"MP3::open()"<<endl;
	}
	void MP3::decompress(){
		cout<<"MP3::decompress()"<<endl;
	}

	void MP3::decode(){
		cout<<"MP3::decode()"<<endl;
	}
	void MP3::play(){
		cout<<"MP3::play()"<<endl;
	}

	void MP3::pause(){
		cout<<"MP3::pause()"<<endl;
	}
