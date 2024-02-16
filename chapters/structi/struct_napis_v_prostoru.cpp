struct Tocka_z_napisom{
	int x, y, z;
	char napis[100];
	bool operator<(const Tocka_z_napisom& d) const {
		if(d.x!=x) return x<d.x;
		if(d.y!=y) return y<d.y;
		if(d.z!=z) return z<d.z;
		return strcmp(napis, d.napis)<0;
	}
};
