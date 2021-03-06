#ifndef HEXAGON_H
#define HEXAGON_H


class Hexagon {
	private:

		std::map<const char*, Hexagon*, cmp_str> neighbor_hexagons;



		void base_init();
	public:
		static const RoundVector<const char*>* VERTEX_POSITIONS;
		static const RoundVector<const char*>* NEIGHBOR_DIRECTION;

		static const RoundVector< RoundVector<double>* >* ROT_COORDS;

		int name;
		static int name_count;

		static RoundVector< RoundVector<double>* >* rendered_verticies;
		std::map<const char*, Vertex*, cmp_str> verticies;

		Color* select_color;

		double last_x;
		double last_y;	

		Hexagon();

		void set_vertex(const char* position, Vertex* vertex);
		Vertex* get_vertex(const char* position);

		void set_color(double red, double green, double blue);
		void set_color(std::vector<double> rgb);

		void set_select_color(double red, double green, double blue);
		void set_select_color(std::vector<double> rgb);
		void clear_select_color();
		std::vector<double> get_select_color();

		void set_height(double height);
		void add_height(double height);
		double get_height();

		double get_slope();
		bool is_pathable();

		void set_neighbor(const char* position, Hexagon* neighbor_hex);
		Hexagon* get_neighbor(const char* position);

		void render(double x, double y);
		void render_as_selected(double x, double y);

		void render_border(double x, double y);
		void render_triangles(double x, double y);
		void render_select(double x, double y);

		
};

#endif

