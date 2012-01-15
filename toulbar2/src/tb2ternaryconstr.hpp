/** \file tb2ternaryconstr.hpp
 *  \brief Ternary constraint applied on variables with enumerated domains.
 *
 */

#ifndef TB2TERNARYCONSTR_HPP_
#define TB2TERNARYCONSTR_HPP_


#include "tb2abstractconstr.hpp"
#include "tb2enumvar.hpp"
#include "tb2binconstr.hpp"

class TernaryConstraint;
struct Functor_getCostXYZ {
  TernaryConstraint &obj;
  inline Functor_getCostXYZ(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostXZY {
  TernaryConstraint &obj;
  inline Functor_getCostXZY(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostYXZ {
  TernaryConstraint &obj;
  inline Functor_getCostYXZ(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostYZX {
  TernaryConstraint &obj;
  inline Functor_getCostYZX(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostZXY {
  TernaryConstraint &obj;
  inline Functor_getCostZXY(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostZYX {
  TernaryConstraint &obj;
  inline Functor_getCostZYX(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};

struct Functor_getCostWithBinariesXYZ {
  TernaryConstraint &obj;
  inline Functor_getCostWithBinariesXYZ(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostWithBinariesXZY {
  TernaryConstraint &obj;
  inline Functor_getCostWithBinariesXZY(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostWithBinariesYXZ {
  TernaryConstraint &obj;
  inline Functor_getCostWithBinariesYXZ(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostWithBinariesYZX {
  TernaryConstraint &obj;
  inline Functor_getCostWithBinariesYZX(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostWithBinariesZXY {
  TernaryConstraint &obj;
  inline Functor_getCostWithBinariesZXY(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};
struct Functor_getCostWithBinariesZYX {
  TernaryConstraint &obj;
  inline Functor_getCostWithBinariesZYX(TernaryConstraint &in) : obj(in) {}
  inline Cost operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const;
};

struct Functor_addCostXYZ {
  TernaryConstraint &obj;
  inline Functor_addCostXYZ(TernaryConstraint &in) : obj(in) {}
  inline void operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz, Cost c);
};
struct Functor_addCostXZY {
  TernaryConstraint &obj;
  inline Functor_addCostXZY(TernaryConstraint &in) : obj(in) {}
  inline void operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz, Cost c);
};
struct Functor_addCostYXZ {
  TernaryConstraint &obj;
  inline Functor_addCostYXZ(TernaryConstraint &in) : obj(in) {}
  inline void operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz, Cost c);
};
struct Functor_addCostYZX {
  TernaryConstraint &obj;
  inline Functor_addCostYZX(TernaryConstraint &in) : obj(in) {}
  inline void operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz, Cost c);
};
struct Functor_addCostZXY {
  TernaryConstraint &obj;
  inline Functor_addCostZXY(TernaryConstraint &in) : obj(in) {}
  inline void operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz, Cost c);
};
struct Functor_addCostZYX {
  TernaryConstraint &obj;
  inline Functor_addCostZYX(TernaryConstraint &in) : obj(in) {}
  inline void operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz, Cost c);
};

struct Functor_getFunctionXYZ {
  TernaryConstraint &obj;
  inline Functor_getFunctionXYZ(TernaryConstraint &in) : obj(in) {}
  inline Value operator()(EnumeratedVariable *xx, EnumeratedVariable *yy, Value vx, Value vy) const;
};
struct Functor_getFunctionXZY {
  TernaryConstraint &obj;
  inline Functor_getFunctionXZY(TernaryConstraint &in) : obj(in) {}
  inline Value operator()(EnumeratedVariable *xx, EnumeratedVariable *yy, Value vx, Value vy) const;
};
struct Functor_getFunctionYXZ {
  TernaryConstraint &obj;
  inline Functor_getFunctionYXZ(TernaryConstraint &in) : obj(in) {}
  inline Value operator()(EnumeratedVariable *xx, EnumeratedVariable *yy, Value vx, Value vy) const;
};
struct Functor_getFunctionYZX {
  TernaryConstraint &obj;
  inline Functor_getFunctionYZX(TernaryConstraint &in) : obj(in) {}
  inline Value operator()(EnumeratedVariable *xx, EnumeratedVariable *yy, Value vx, Value vy) const;
};
struct Functor_getFunctionZXY {
  TernaryConstraint &obj;
  inline Functor_getFunctionZXY(TernaryConstraint &in) : obj(in) {}
  inline Value operator()(EnumeratedVariable *xx, EnumeratedVariable *yy, Value vx, Value vy) const;
};
struct Functor_getFunctionZYX {
  TernaryConstraint &obj;
  inline Functor_getFunctionZYX(TernaryConstraint &in) : obj(in) {}
  inline Value operator()(EnumeratedVariable *xx, EnumeratedVariable *yy, Value vx, Value vy) const;
};

class TernaryConstraint : public AbstractTernaryConstraint<EnumeratedVariable,EnumeratedVariable,EnumeratedVariable>
{
protected:
    unsigned int sizeX;
    unsigned int sizeY;
    unsigned int sizeZ;
    vector<StoreCost> costs;
    vector<StoreCost> deltaCostsX;
    vector<StoreCost> deltaCostsY;
    vector<StoreCost> deltaCostsZ;
    bool functionalX;
    vector<Value> functionX;
    bool functionalY;
    vector<Value> functionY;
    bool functionalZ;
    vector<Value> functionZ;
    vector< pair<Value,Value> > supportX;
    vector< pair<Value,Value> > supportY;
    vector< pair<Value,Value> > supportZ;

    inline Value getFunctionX(Value vy, Value vz) const {return functionX[y->toIndex(vy) * sizeZ + z->toIndex(vz)];}
    inline Value getFunctionY(Value vx, Value vz) const {return functionY[x->toIndex(vx) * sizeZ + z->toIndex(vz)];}
    inline Value getFunctionZ(Value vx, Value vy) const {return functionZ[x->toIndex(vx) * sizeY + y->toIndex(vy)];}

    // return true if unary support of x is broken
    bool project(EnumeratedVariable *x, Value value, Cost cost, vector<StoreCost> &deltaCostsX);
    void extend(EnumeratedVariable *x, Value value, Cost cost, vector<StoreCost> &deltaCostsX);
    
    template <typename T1, typename T2, typename T3> void project(T1 getCost, T2 addCost, bool functionalZ, T3 getFunctionZ, BinaryConstraint* xy, EnumeratedVariable *x, EnumeratedVariable *y, EnumeratedVariable *z, Value valx, Value valy, Cost cost);
    template <typename T1, typename T2, typename T3> void extend(T1 getCost, T2 addCost, bool functionalZ, T3 getFunctionZ, BinaryConstraint* xy, EnumeratedVariable *x, EnumeratedVariable *y, EnumeratedVariable *z, Value valx, Value valy, Cost cost);
    
    template <typename T1, typename T2, typename T3> void findSupport(T1 getCost, bool functionalY, T2 getFunctionY, bool functionalZ, T3 getFunctionZ, 
            EnumeratedVariable *x, EnumeratedVariable *y,  EnumeratedVariable *z,
            int getIndexX, int getIndexY, int getIndexZ,
            vector< pair<Value,Value> > &supportX, vector<StoreCost> &deltaCostsX, 
            vector< pair<Value,Value> > &supportY, vector< pair<Value,Value> > &supportZ);
    template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> void findFullSupport(T1 getCost, T2 getCostXZY, T3 getCostYZX, T4 getCostWithBinaries, T5 addCost, T6 addCostXZY, T7 addCostYZX, bool functionalX, T8 getFunctionX, bool functionalY, T9 getFunctionY, bool functionalZ, T10 getFunctionZ,
            EnumeratedVariable *x, EnumeratedVariable *y,  EnumeratedVariable *z,
            int getIndexX, int getIndexY, int getIndexZ,
            vector< pair<Value,Value> > &supportX, vector<StoreCost> &deltaCostsX, 
            vector< pair<Value,Value> > &supportY, vector<StoreCost> &deltaCostsY, 
            vector< pair<Value,Value> > &supportZ, vector<StoreCost> &deltaCostsZ,
            BinaryConstraint* xy, BinaryConstraint* xz, BinaryConstraint* yz);
    bool verify(EnumeratedVariable *x, EnumeratedVariable *y, EnumeratedVariable *z);

    template <typename T1, typename T2, typename T3> bool isEAC(T1 getCostWithBinaries, bool functionalY, T2 getFunctionY, bool functionalZ, T3 getFunctionZ,
               EnumeratedVariable *x, Value a, EnumeratedVariable *y, EnumeratedVariable *z,
               vector< pair<Value,Value> > &supportX);
               
  void findSupportX() {findSupport(Functor_getCostXYZ(*this), functionalY, Functor_getFunctionYXZ(*this), functionalZ, Functor_getFunctionZXY(*this), x,y,z,0,1,2,supportX,deltaCostsX,supportY,supportZ);}
  void findSupportY() {findSupport(Functor_getCostYXZ(*this), functionalX, Functor_getFunctionXYZ(*this), functionalZ, Functor_getFunctionZYX(*this), y,x,z,1,0,2,supportY,deltaCostsY,supportX,supportZ);}
  void findSupportZ() {findSupport(Functor_getCostZXY(*this), functionalX, Functor_getFunctionXZY(*this), functionalY, Functor_getFunctionYZX(*this), z,x,y,2,0,1,supportZ,deltaCostsZ,supportX,supportY);}
  void findFullSupportX() {if (y->wcspIndex < z->wcspIndex) findFullSupport(Functor_getCostXYZ(*this), Functor_getCostXZY(*this), Functor_getCostYZX(*this), Functor_getCostWithBinariesXYZ(*this), Functor_addCostXYZ(*this), Functor_addCostXZY(*this), Functor_addCostYZX(*this), functionalX, Functor_getFunctionXYZ(*this), functionalY, Functor_getFunctionYXZ(*this), functionalZ, Functor_getFunctionZXY(*this), x,y,z,0,1,2,supportX,deltaCostsX,supportY,deltaCostsY,supportZ,deltaCostsZ,xy,xz,yz);
	else findFullSupport(Functor_getCostXZY(*this), Functor_getCostXYZ(*this), Functor_getCostZYX(*this), Functor_getCostWithBinariesXZY(*this), Functor_addCostXZY(*this), Functor_addCostXYZ(*this), Functor_addCostZYX(*this), functionalX, Functor_getFunctionXZY(*this), functionalZ, Functor_getFunctionZXY(*this), functionalY, Functor_getFunctionYXZ(*this), x,z,y,0,2,1,supportX,deltaCostsX,supportZ,deltaCostsZ,supportY,deltaCostsY,xz,xy,yz);}
  void findFullSupportY() {if (x->wcspIndex < z->wcspIndex) findFullSupport(Functor_getCostYXZ(*this), Functor_getCostYZX(*this), Functor_getCostXZY(*this), Functor_getCostWithBinariesYXZ(*this), Functor_addCostYXZ(*this), Functor_addCostYZX(*this), Functor_addCostXZY(*this), functionalY, Functor_getFunctionYXZ(*this), functionalX, Functor_getFunctionXYZ(*this), functionalZ, Functor_getFunctionZYX(*this), y,x,z,1,0,2,supportY,deltaCostsY,supportX,deltaCostsX,supportZ,deltaCostsZ,xy,yz,xz);
	else findFullSupport(Functor_getCostYZX(*this), Functor_getCostYXZ(*this), Functor_getCostZXY(*this), Functor_getCostWithBinariesYZX(*this), Functor_addCostYZX(*this), Functor_addCostYXZ(*this), Functor_addCostZXY(*this), functionalY, Functor_getFunctionYZX(*this), functionalZ, Functor_getFunctionZYX(*this), functionalX, Functor_getFunctionXYZ(*this), y,z,x,1,2,0,supportY,deltaCostsY,supportZ,deltaCostsZ,supportX,deltaCostsX,yz,xy,xz);}
  void findFullSupportZ() {if (x->wcspIndex < y->wcspIndex) findFullSupport(Functor_getCostZXY(*this), Functor_getCostZYX(*this), Functor_getCostXYZ(*this), Functor_getCostWithBinariesZXY(*this), Functor_addCostZXY(*this), Functor_addCostZYX(*this), Functor_addCostXYZ(*this), functionalZ, Functor_getFunctionZXY(*this), functionalX, Functor_getFunctionXZY(*this), functionalY, Functor_getFunctionYZX(*this),z,x,y,2,0,1,supportZ,deltaCostsZ,supportX,deltaCostsX,supportY,deltaCostsY,xz,yz,xy);
	else findFullSupport(Functor_getCostZYX(*this), Functor_getCostZXY(*this), Functor_getCostYXZ(*this), Functor_getCostWithBinariesZYX(*this), Functor_addCostZYX(*this), Functor_addCostZXY(*this), Functor_addCostYXZ(*this), functionalZ, Functor_getFunctionZYX(*this), functionalY, Functor_getFunctionYZX(*this), functionalX, Functor_getFunctionXZY(*this), z,y,x,2,1,0,supportZ,deltaCostsZ,supportY,deltaCostsY,supportX,deltaCostsX,yz,xz,xy);}
    bool verifyX() {return verify(x,y,z);}
    bool verifyY() {return verify(y,x,z);}
    bool verifyZ() {return verify(z,x,y);}
    
public:
    TernaryConstraint(WCSP *wcsp, 
					  EnumeratedVariable *xx, 
					  EnumeratedVariable *yy, 
					  EnumeratedVariable *zz, 
					  BinaryConstraint* xy,
					  BinaryConstraint* xz,
					  BinaryConstraint* yz,
					  vector<Cost> &tab, 
					  StoreStack<Cost, Cost> *storeCost);

	TernaryConstraint(WCSP *wcsp, StoreStack<Cost, Cost> *storeCost); 

    void setBinaries( BinaryConstraint* xyin, BinaryConstraint* xzin, BinaryConstraint* yzin ) { xy = xyin; xz = xzin; yz = yzin; }

    BinaryConstraint* xy;
    BinaryConstraint* xz;
    BinaryConstraint* yz;

	~TernaryConstraint() {}

    bool extension() const {return true;}

    Cost getCost(Value vx, Value vy, Value vz) const {
        int ix = x->toIndex(vx);
        int iy = y->toIndex(vy);
        int iz = z->toIndex(vz);
        Cost res = costs[ix*sizeY*sizeZ + iy*sizeZ + iz] - deltaCostsX[ix] - deltaCostsY[iy] - deltaCostsZ[iz];
        assert(res >= MIN_COST);
        return res;
    }

    Cost getCost(EnumeratedVariable* xx, EnumeratedVariable* yy, EnumeratedVariable* zz, Value vx, Value vy, Value vz) const {  
        int vindex[3];
        vindex[ getIndex(xx) ] = xx->toIndex(vx);
        vindex[ getIndex(yy) ] = yy->toIndex(vy);
        vindex[ getIndex(zz) ] = zz->toIndex(vz);
        Cost res = costs[vindex[0]*sizeY*sizeZ + vindex[1]*sizeZ + vindex[2]] - deltaCostsX[vindex[0]] - deltaCostsY[vindex[1]] - deltaCostsZ[vindex[2]];
        assert(res >= MIN_COST);
        return res;
    }

    Cost getCostWithBinaries(Value vx, Value vy, Value vz) const {
        int ix = x->toIndex(vx);
        int iy = y->toIndex(vy);
        int iz = z->toIndex(vz);
        Cost res = costs[ix*sizeY*sizeZ + iy*sizeZ + iz] - deltaCostsX[ix] - deltaCostsY[iy] - deltaCostsZ[iz];
        if (xy->connected()) res += xy->getCost(x,y,ix,iy);
        if (xz->connected()) res += xz->getCost(x,z,ix,iz);
        if (yz->connected()) res += yz->getCost(y,z,iy,iz);
        assert(res >= MIN_COST);
        return res;
    }

    Cost getCostWithBinaries(EnumeratedVariable* xx, EnumeratedVariable* yy, EnumeratedVariable* zz, Value vx, Value vy, Value vz) const {
        int vindex[3];
        vindex[ getIndex(xx) ] = xx->toIndex(vx);
        vindex[ getIndex(yy) ] = yy->toIndex(vy);
        vindex[ getIndex(zz) ] = zz->toIndex(vz);
        Cost res = costs[vindex[0]*sizeY*sizeZ + vindex[1]*sizeZ + vindex[2]] - deltaCostsX[vindex[0]] - deltaCostsY[vindex[1]] - deltaCostsZ[vindex[2]];
        if (xy->connected()) res += xy->getCost(x,y,vindex[0],vindex[1]);
        if (xz->connected()) res += xz->getCost(x,z,vindex[0],vindex[2]);
        if (yz->connected()) res += yz->getCost(y,z,vindex[1],vindex[2]);
        assert(res >= MIN_COST);
        return res;
    }

   void addCosts( TernaryConstraint* xyz ) {
		int ix, iy, iz;
		for (EnumeratedVariable::iterator iterx = x->begin(); iterx != x->end(); ++iterx) {
		for (EnumeratedVariable::iterator itery = y->begin(); itery != y->end(); ++itery) {
		for (EnumeratedVariable::iterator iterz = z->begin(); iterz != z->end(); ++iterz) {
        	ix = x->toIndex(*iterx); iy = y->toIndex(*itery); iz = z->toIndex(*iterz);
			// if(costs[ix*sizeY*sizeZ + iy*sizeZ + iz] < wcsp->getUb()) // BUG with BTD (local ub, deltaCosts missing)
        	costs[ix*sizeY*sizeZ + iy*sizeZ + iz] += xyz->getCost(x,y,z, *iterx,*itery,*iterz);
	    }}}
    }


    void addCosts( EnumeratedVariable* xin, EnumeratedVariable* yin, EnumeratedVariable* zin, vector<Cost>& costsin ) {
		assert(costsin.size() <= costs.size());

        int vindex[3];
        int sizeYin = yin->getDomainInitSize();
        int sizeZin = zin->getDomainInitSize();
       
		for (EnumeratedVariable::iterator iterx = xin->begin(); iterx != xin->end(); ++iterx) {
		for (EnumeratedVariable::iterator itery = yin->begin(); itery != yin->end(); ++itery) {
		for (EnumeratedVariable::iterator iterz = zin->begin(); iterz != zin->end(); ++iterz) {

		    int vxin = xin->toIndex(*iterx);
		    int vyin = yin->toIndex(*itery);
		    int vzin = zin->toIndex(*iterz);

	        vindex[ getIndex(xin) ] = vxin;
	        vindex[ getIndex(yin) ] = vyin;
	        vindex[ getIndex(zin) ] = vzin;
	        
			// if(costs[vindex[0]*sizeY*sizeZ + vindex[1]*sizeZ + vindex[2]]  < wcsp->getUb()) // BUG with BTD (local ub, deltaCosts missing)
			costs[vindex[0]*sizeY*sizeZ + vindex[1]*sizeZ + vindex[2]] += costsin[vxin*sizeYin*sizeZin + vyin*sizeZin + vzin];
	    }}}
    }

    void addCost( Value vxi, Value vyi, Value vzi, Cost c ) {
        assert(c >= MIN_COST || !LUBTEST(getCost(vxi, vyi, vzi), -c));
	    int vx = x->toIndex(vxi);
	    int vy = y->toIndex(vyi);
	    int vz = z->toIndex(vzi);	        
		costs[vx*sizeY*sizeZ + vy*sizeZ + vz] += c;
    }

    void addCost( EnumeratedVariable* xin, EnumeratedVariable* yin, EnumeratedVariable* zin, Value vxi, Value vyi, Value vzi, Cost c ) {
        assert(c >= MIN_COST || !LUBTEST(getCost(xin, yin, zin, vxi, vyi, vzi), -c));

        int vindex[3];
	    int vx = xin->toIndex(vxi);
	    int vy = yin->toIndex(vyi);
	    int vz = zin->toIndex(vzi);

        vindex[ getIndex(xin) ] = vx;
        vindex[ getIndex(yin) ] = vy;
        vindex[ getIndex(zin) ] = vz;
	        
		costs[vindex[0]*sizeY*sizeZ + vindex[1]*sizeZ + vindex[2]] += c;
    }

    void setcost( EnumeratedVariable* xin, EnumeratedVariable* yin, EnumeratedVariable* zin, Value vxi, Value vyi, Value vzi, Cost c ) {
        int vindex[3];
	    int vx = xin->toIndex(vxi);
	    int vy = yin->toIndex(vyi);
	    int vz = zin->toIndex(vzi);
        vindex[ getIndex(xin) ] = vx;
        vindex[ getIndex(yin) ] = vy;
        vindex[ getIndex(zin) ] = vz;
		costs[vindex[0]*sizeY*sizeZ + vindex[1]*sizeZ + vindex[2]] = c;
    }

	pair<Value,Value> getSupport(EnumeratedVariable* var, Value v) {
		if(var == x) return supportX[x->toIndex(v)];
		else if(var == y) return supportY[y->toIndex(v)];
		else return supportZ[z->toIndex(v)];
	}

	void  setSupport(EnumeratedVariable* var, Value v, pair<Value,Value> s) {
		if(var == x) supportX[x->toIndex(v)] = s;
		else if (var == y) supportY[y->toIndex(v)] = s;
		else supportZ[z->toIndex(v)] = s;
	}
    
    void propagate() {
        if (x->assigned()) {
            assign(0);
            return;
        }
        if (y->assigned()) {
            assign(1);
            return;
        }
        if (z->assigned()) {
            assign(2);
            return;
        }
        x->queueAC(); 
        y->queueAC(); 
        z->queueAC(); 
        x->queueDAC();
        y->queueDAC();
        z->queueDAC();
        x->queueEAC1();
        y->queueEAC1();
        z->queueEAC1();
    }
    
    void remove(int varIndex) {
        switch(varIndex) {
            case 0: if (ToulBar2::LcLevel==LC_AC || getDACScopeIndex()!=1) findSupportY(); if(connected()&&(ToulBar2::LcLevel==LC_AC || getDACScopeIndex()!=2)) findSupportZ(); break;
            case 1: if (ToulBar2::LcLevel==LC_AC || getDACScopeIndex()!=0) findSupportX(); if(connected()&&(ToulBar2::LcLevel==LC_AC || getDACScopeIndex()!=2)) findSupportZ(); break;
            case 2: if (ToulBar2::LcLevel==LC_AC || getDACScopeIndex()!=0) findSupportX(); if(connected()&&(ToulBar2::LcLevel==LC_AC || getDACScopeIndex()!=1)) findSupportY(); break;
        }
    }

    void projectFromZero(int varIndex) {
        switch(varIndex) {
            case 0: if (getDACScopeIndex()==1) findFullSupportY(); else if (getDACScopeIndex()==2) findFullSupportZ(); break;
            case 1: if (getDACScopeIndex()==0) findFullSupportX(); else if (getDACScopeIndex()==2) findFullSupportZ(); break;
            case 2: if (getDACScopeIndex()==0) findFullSupportX(); else if (getDACScopeIndex()==1) findFullSupportY(); break;
        }
    }

    //Trick! instead of doing remove(index) now, let AC queue do the job. 
    //So several incdec events on the same constraint can be merged into one AC event
    void increase(int index) {if (index==0) x->queueAC(); else if (index==1) y->queueAC(); else z->queueAC();}
    void decrease(int index) {if (index==0) x->queueAC(); else if (index==1) y->queueAC(); else z->queueAC();}
    
    void assign(int varIndex) {
        deconnect();                    
        switch(varIndex) {
		case 0: projectTernaryBinary(Functor_getCostXYZ(*this),Functor_getCostYZX(*this),Functor_addCostYZX(*this),functionalX,Functor_getFunctionXYZ(*this), x, y ,z, yz);  break;
		case 1: projectTernaryBinary(Functor_getCostYXZ(*this),Functor_getCostXZY(*this),Functor_addCostXZY(*this),functionalY,Functor_getFunctionYXZ(*this), y, x, z, xz);  break;
		case 2: projectTernaryBinary(Functor_getCostZXY(*this),Functor_getCostXYZ(*this),Functor_addCostXYZ(*this),functionalZ,Functor_getFunctionZXY(*this), z, x, y, xy);  break;
        }
    }

  void fillEAC2(EnumeratedVariable *x, EnumeratedVariable *y, EnumeratedVariable *z,
                vector< pair<Value,Value> > &supportX) {
    assert(x->canbe(x->getSupport()));
    assert(getIndex(y) < getIndex(z));
    int xindex = x->toIndex(x->getSupport());
    Value ysupport = supportX[xindex].first;
    Value zsupport = supportX[xindex].second;
    if (y->cannotbe(ysupport) || z->cannotbe(zsupport) || 
        getCostWithBinaries(x,y,z,x->getSupport(),ysupport,zsupport) + y->getCost(ysupport) + z->getCost(zsupport) > MIN_COST) {
            x->queueEAC2();
    }
  }
                
  void fillEAC2(int varIndex) {
	    assert(!isDuplicate());
        switch(varIndex) {
            case 0: fillEAC2(y,x,z,supportY); fillEAC2(z,x,y,supportZ); break;
            case 1: fillEAC2(x,y,z,supportX); fillEAC2(z,x,y,supportZ); break;
            case 2: fillEAC2(x,y,z,supportX); fillEAC2(y,x,z,supportY); break;
        }
  }
   
  bool isEAC(int varIndex, Value a) {
	assert(!isDuplicate());
	if (ToulBar2::QueueComplexity && varIndex==getDACScopeIndex()) return true;
    switch(varIndex) {
	case 0: return isEAC(Functor_getCostWithBinariesXYZ(*this), functionalY, Functor_getFunctionYXZ(*this), functionalZ, Functor_getFunctionZXY(*this), x,a,y,z,supportX); break;
	case 1: return isEAC(Functor_getCostWithBinariesYXZ(*this), functionalX, Functor_getFunctionXYZ(*this), functionalZ, Functor_getFunctionZYX(*this), y,a,x,z,supportY); break;
	case 2: return isEAC(Functor_getCostWithBinariesZXY(*this), functionalX, Functor_getFunctionXZY(*this), functionalY, Functor_getFunctionYZX(*this), z,a,x,y,supportZ); break;
	default: exit(EXIT_FAILURE);
    }
    return true;
  }

    void findFullSupportEAC(int varIndex) {
	    assert(!isDuplicate());
        if (ToulBar2::QueueComplexity && varIndex==getDACScopeIndex()) return;
		assert( !wcsp->getTreeDec() || ( cluster == xy->getCluster() &&  cluster == xz->getCluster() &&  cluster == yz->getCluster()) );
        switch(varIndex) {
            case 0: findFullSupportX(); break;
            case 1: findFullSupportY(); break;
            case 2: findFullSupportZ(); break;
        }
    }
            
    bool verify();
    

	template <typename T1, typename T2, typename T3, typename T4> void projectTernaryBinary( T1 getCost, T2 getCostYZX, T3 addCostYZX, bool functionalX, T4 getFunctionX, EnumeratedVariable* xx, EnumeratedVariable* yy, EnumeratedVariable* zz, BinaryConstraint* yzin );

	void projectTernary() {
	  if (x->getDACOrder() < y->getDACOrder() && y->getDACOrder() < z->getDACOrder()) {
		projectTernaryBinary(Functor_getCostZXY(*this),Functor_getCostXYZ(*this),Functor_addCostXYZ(*this),functionalZ,Functor_getFunctionZXY(*this),z, x, y, xy);
		if (connected()) projectTernaryBinary(Functor_getCostYXZ(*this),Functor_getCostXZY(*this),Functor_addCostXZY(*this),functionalY,Functor_getFunctionYXZ(*this),y, x, z, xz);
		if (connected()) projectTernaryBinary(Functor_getCostXYZ(*this),Functor_getCostYZX(*this),Functor_addCostYZX(*this),functionalX,Functor_getFunctionXYZ(*this),x, y , z, yz);
	  } else if (x->getDACOrder() < z->getDACOrder() && z->getDACOrder() < y->getDACOrder()) {
		projectTernaryBinary(Functor_getCostYXZ(*this),Functor_getCostXZY(*this),Functor_addCostXZY(*this),functionalY,Functor_getFunctionYXZ(*this),y, x, z, xz);
		if (connected()) projectTernaryBinary(Functor_getCostZXY(*this),Functor_getCostXYZ(*this),Functor_addCostXYZ(*this),functionalZ,Functor_getFunctionZXY(*this),z, x, y, xy);
		if (connected()) projectTernaryBinary(Functor_getCostXYZ(*this),Functor_getCostYZX(*this),Functor_addCostYZX(*this),functionalX,Functor_getFunctionXYZ(*this),x, y , z, yz);
	  } else if (y->getDACOrder() < x->getDACOrder() && x->getDACOrder() < z->getDACOrder()) {
		projectTernaryBinary(Functor_getCostZXY(*this),Functor_getCostXYZ(*this),Functor_addCostXYZ(*this),functionalZ,Functor_getFunctionZXY(*this),z, x, y, xy);
		if (connected()) projectTernaryBinary(Functor_getCostXYZ(*this),Functor_getCostYZX(*this),Functor_addCostYZX(*this),functionalX,Functor_getFunctionXYZ(*this),x, y , z, yz);
		if (connected()) projectTernaryBinary(Functor_getCostYXZ(*this),Functor_getCostXZY(*this),Functor_addCostXZY(*this),functionalY,Functor_getFunctionYXZ(*this),y, x, z, xz);
	  } else if (y->getDACOrder() < z->getDACOrder() && z->getDACOrder() < x->getDACOrder()) {
		projectTernaryBinary(Functor_getCostXYZ(*this),Functor_getCostYZX(*this),Functor_addCostYZX(*this),functionalX,Functor_getFunctionXYZ(*this), x, y , z, yz);
		if (connected()) projectTernaryBinary(Functor_getCostZXY(*this),Functor_getCostXYZ(*this),Functor_addCostXYZ(*this),functionalZ,Functor_getFunctionZXY(*this),z, x, y, xy);
		if (connected()) projectTernaryBinary(Functor_getCostYXZ(*this),Functor_getCostXZY(*this),Functor_addCostXZY(*this),functionalY,Functor_getFunctionYXZ(*this),y, x, z, xz);
	  } else if (z->getDACOrder() < x->getDACOrder() && x->getDACOrder() < y->getDACOrder()) {
		projectTernaryBinary(Functor_getCostYXZ(*this),Functor_getCostXZY(*this),Functor_addCostXZY(*this),functionalY,Functor_getFunctionYXZ(*this),y, x, z, xz);
		if (connected()) projectTernaryBinary(Functor_getCostXYZ(*this),Functor_getCostYZX(*this),Functor_addCostYZX(*this),functionalX,Functor_getFunctionXYZ(*this),x, y, z, yz);
		if (connected()) projectTernaryBinary(Functor_getCostZXY(*this),Functor_getCostXYZ(*this),Functor_addCostXYZ(*this),functionalZ,Functor_getFunctionZXY(*this),z, x, y, xy);
	  } else if (z->getDACOrder() < y->getDACOrder() && y->getDACOrder() < x->getDACOrder()) {
		projectTernaryBinary(Functor_getCostXYZ(*this),Functor_getCostYZX(*this),Functor_addCostYZX(*this),functionalX,Functor_getFunctionXYZ(*this),x, y , z, yz);
		if (connected()) projectTernaryBinary(Functor_getCostYXZ(*this),Functor_getCostXZY(*this),Functor_addCostXZY(*this),functionalY,Functor_getFunctionYXZ(*this),y, x, z, xz);
		if (connected()) projectTernaryBinary(Functor_getCostZXY(*this),Functor_getCostXYZ(*this),Functor_addCostXYZ(*this),functionalZ,Functor_getFunctionZXY(*this),z, x, y, xy);
	  } else exit(EXIT_FAILURE);
	}

	void extendTernary()
	{	// extend binary cost functions to the ternary cost function
		Cost c; 
		for(EnumeratedVariable::iterator iterx = x->begin(); iterx != x->end(); ++iterx) {
		for(EnumeratedVariable::iterator itery = y->begin(); itery != y->end(); ++itery) {
		for(EnumeratedVariable::iterator iterz = z->begin(); iterz != z->end(); ++iterz) {
			if(xy->connected()) { c = xy->getCost(x, y, *iterx, *itery); addCost(x,y,z,*iterx,*itery,*iterz, c); }
			if(xz->connected()) { c = xz->getCost(x, z, *iterx, *iterz); addCost(x,y,z,*iterx,*itery,*iterz, c); }
			if(yz->connected()) { c = yz->getCost(y, z, *itery, *iterz); addCost(x,y,z,*iterx,*itery,*iterz, c); }
		}}}

        xy->clearCosts();
        xz->clearCosts();
        yz->clearCosts();

        xy->deconnect(true);
        xz->deconnect(true);
        yz->deconnect(true);

        // extend unary costs to the ternary cost function
        for(EnumeratedVariable::iterator iterx = x->begin(); iterx != x->end(); ++iterx) extend(x,*iterx, x->getCost(*iterx), deltaCostsX);
		for(EnumeratedVariable::iterator itery = y->begin(); itery != y->end(); ++itery) extend(y,*itery, y->getCost(*itery), deltaCostsY);
		for(EnumeratedVariable::iterator iterz = z->begin(); iterz != z->end(); ++iterz) extend(z,*iterz, z->getCost(*iterz), deltaCostsZ);
	}

	BinaryConstraint* commonBinary( TernaryConstraint* t )
	{
		if( (t->getIndex(xy->getVar(0)) >= 0) && (t->getIndex(xy->getVar(1)) >= 0) ) return xy;
		else if((t->getIndex(xz->getVar(0)) >= 0) && (t->getIndex(xz->getVar(1)) >= 0)) return xz;
		else if((t->getIndex(yz->getVar(0)) >= 0) && (t->getIndex(yz->getVar(1)) >= 0)) return yz;
		return NULL;
	}

    double computeTightness();

    // add weights from auxilliary binary constraints if they are deconnected (otherwise their weight will be taken into account in the list of active constraints for variable varIndex)
    // use weights minus one due to default initialization of conflictWeight to 1
    Long getConflictWeight(int varIndex) const {
	   switch(varIndex) {
	   case 0: return Constraint::getConflictWeight() + ((xy->deconnected())?(xy->getConflictWeight(xy->getIndex(x))-1):0) + ((xz->deconnected())?(xz->getConflictWeight(xz->getIndex(x))-1):0); break;
	   case 1: return Constraint::getConflictWeight() + ((xy->deconnected())?(xy->getConflictWeight(xy->getIndex(y))-1):0) + ((yz->deconnected())?(yz->getConflictWeight(yz->getIndex(y))-1):0); break;
	   case 2: return Constraint::getConflictWeight() + ((xz->deconnected())?(xz->getConflictWeight(xz->getIndex(z))-1):0) + ((yz->deconnected())?(yz->getConflictWeight(yz->getIndex(z))-1):0); break;
       }
	   return  Constraint::getConflictWeight();
	}
    Long getConflictWeight() const {
	  return Constraint::getConflictWeight() + ((xy->deconnected())?(xy->getConflictWeight()-1):0) + ((xz->deconnected())?(xz->getConflictWeight()-1):0) + ((yz->deconnected())?(yz->getConflictWeight()-1):0);
	}

    EnumeratedVariable* xvar;
    EnumeratedVariable* yvar;
    EnumeratedVariable* zvar;
    EnumeratedVariable::iterator itvx;
    EnumeratedVariable::iterator itvy;
    EnumeratedVariable::iterator itvz;

    void first() {
    	itvx = x->begin(); 
    	itvy = y->begin(); 
    	itvz = z->begin(); 
    	xvar = x;
    	yvar = y;
    	zvar = z;
    }
    
    bool next( String& t, Cost& c) 
    { 
    	Char tch[4];
    	if(itvx != xvar->end()) {
    		int ix = xvar->toIndex(*itvx);
	    	tch[0] = ix + CHAR_FIRST;
	    	if(itvy != yvar->end()) {
	    		int iy = yvar->toIndex(*itvy);
		    	tch[1] = iy + CHAR_FIRST;
		    	if(itvz != zvar->end()) {
		    		int iz = zvar->toIndex(*itvz);
			    	tch[2] = iz + CHAR_FIRST;
		 	    	tch[3] = '\0';
			    	t = tch;
			    	c = getCost(xvar,yvar,zvar,*itvx, *itvy, *itvz); 
					++itvz;
			    	return true;
	    		} else {
		    		++itvy;
		    		itvz = zvar->begin();
		    		return next(t,c);
		    	}
	    	} else {
		    		++itvx;
		    		itvy = yvar->begin();
		    		return next(t,c);
		    }
    	}
    	return false; 
    }

    void first(EnumeratedVariable* alpha, EnumeratedVariable* beta){
    	int pos_alpha = getIndex(alpha);
    	int pos_beta = getIndex(beta);
		xvar = NULL;
		yvar = NULL;
		zvar = NULL;
    	switch(pos_alpha){
    	case 0 : itvz = x->begin(); zvar = x; break;
    	case 1 : itvz = y->begin(); zvar = y; break;
    	case 2 : itvz = z->begin(); zvar = z; break;
    	}
    	switch(pos_beta){
    	case 0 : itvy = x->begin(); yvar = x; break;
    	case 1 : itvy = y->begin(); yvar = y; break;
    	case 2 : itvy = z->begin(); yvar = z; break;
    	}
    	switch(3-pos_alpha-pos_beta){
    	case 0 : itvx = x->begin(); xvar = x; break;
    	case 1 : itvx = y->begin(); xvar = y; break;
    	case 2 : itvx = z->begin(); xvar = z; break;
    	}
		assert(xvar != yvar);
		assert(xvar != zvar);
		assert(yvar != zvar);
    }
	bool separability(EnumeratedVariable* alpha, EnumeratedVariable* beta);
	void separate(EnumeratedVariable *a, EnumeratedVariable *c);

    void firstlex() { first(); }
    bool nextlex( String& t, Cost& c) { return next(t,c); } 


	void setTuple( String& t, Cost c, EnumeratedVariable** scope_in ) {
		Value v0 = scope_in[0]->toValue(t[0]-CHAR_FIRST);
		Value v1 = scope_in[1]->toValue(t[1]-CHAR_FIRST);
		Value v2 = scope_in[2]->toValue(t[2]-CHAR_FIRST);
		setcost( scope_in[0], scope_in[1], scope_in[2], v0, v1, v2, c );		
	}

	void setTuple( int* t, Cost c, EnumeratedVariable** scope_in ) {
		Value v0 = scope_in[0]->toValue(t[0]);
		Value v1 = scope_in[1]->toValue(t[1]);
		Value v2 = scope_in[2]->toValue(t[2]);
		setcost( scope_in[0], scope_in[1], scope_in[2], v0, v1, v2, c );		
	}

	void addtoTuple( int* t, Cost c, EnumeratedVariable** scope_in ) {
		Value v0 = scope_in[0]->toValue(t[0]);
		Value v1 = scope_in[1]->toValue(t[1]);
		Value v2 = scope_in[2]->toValue(t[2]);
		addCost( scope_in[0], scope_in[1], scope_in[2], v0, v1, v2, c );		
	}

	void addtoTuple( String& t, Cost c, EnumeratedVariable** scope_in ) {
		Value v0 = scope_in[0]->toValue(t[0]-CHAR_FIRST);
		Value v1 = scope_in[1]->toValue(t[1]-CHAR_FIRST);
		Value v2 = scope_in[2]->toValue(t[2]-CHAR_FIRST);
		addCost( scope_in[0], scope_in[1], scope_in[2], v0, v1, v2, c );		
	}

	Cost evalsubstr( String& s, Constraint* ctr )
	{
		Value vals[3];
		int count = 0;
		
		for(int i=0;i<arity();i++) {
			EnumeratedVariable* var = (EnumeratedVariable*) getVar(i); 
			int ind = ctr->getIndex(var);
			if(ind >= 0) { vals[i] = var->toValue(s[ind] - CHAR_FIRST); count++; }	
		}
		if(count == 3) return getCost(vals[0], vals[1], vals[2]);
		else return MIN_COST;
	}    
	

  void fillElimConstr( EnumeratedVariable* xin, EnumeratedVariable* yin, EnumeratedVariable* zin, Constraint *from1)
	{
		x = xin;
		y = yin;
		z = zin;
		sizeX = x->getDomainInitSize();
		sizeY = y->getDomainInitSize();
		sizeZ = z->getDomainInitSize();
		linkX->removed = true;
		linkY->removed = true;
		linkZ->removed = true;
		linkX->content.constr = this;
		linkY->content.constr = this; 
		linkZ->content.constr = this; 
		linkX->content.scopeIndex = 0;
		linkY->content.scopeIndex = 1;
		linkZ->content.scopeIndex = 2;
		setDACScopeIndex();
		resetConflictWeight();
		elimFrom(from1);
	}
  
  	void fillxy();
	void fillxz();
	void fillyz();
    void fillElimConstrBinaries();
	void setDuplicates();


    void print(ostream& os);
    void dump(ostream& os, bool original = true);

  friend struct Functor_getCostXYZ;
  friend struct Functor_getCostXZY;
  friend struct Functor_getCostYXZ;
  friend struct Functor_getCostYZX;
  friend struct Functor_getCostZXY;
  friend struct Functor_getCostZYX;

  friend struct Functor_getCostWithBinariesXYZ;
  friend struct Functor_getCostWithBinariesXZY;
  friend struct Functor_getCostWithBinariesYXZ;
  friend struct Functor_getCostWithBinariesYZX;
  friend struct Functor_getCostWithBinariesZXY;
  friend struct Functor_getCostWithBinariesZYX;

  friend struct Functor_addCostXYZ;
  friend struct Functor_addCostXZY;
  friend struct Functor_addCostYXZ;
  friend struct Functor_addCostYZX;
  friend struct Functor_addCostZXY;
  friend struct Functor_addCostZYX;

  friend struct Functor_getFunctionXYZ;
  friend struct Functor_getFunctionXZY;
  friend struct Functor_getFunctionYXZ;
  friend struct Functor_getFunctionYZX;
  friend struct Functor_getFunctionZXY;
  friend struct Functor_getFunctionZYX;
};

inline Cost Functor_getCostXYZ::operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCost(vx, vy, vz);}
inline Cost Functor_getCostXZY::operator()(EnumeratedVariable *xx, EnumeratedVariable *zz,  EnumeratedVariable *yy, Value vx, Value vz, Value vy) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCost(vx, vy, vz);}
inline Cost Functor_getCostYXZ::operator()(EnumeratedVariable *yy, EnumeratedVariable *xx,  EnumeratedVariable *zz, Value vy, Value vx, Value vz) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCost(vx, vy, vz);}
inline Cost Functor_getCostYZX::operator()(EnumeratedVariable *yy, EnumeratedVariable *zz,  EnumeratedVariable *xx, Value vy, Value vz, Value vx) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCost(vx, vy, vz);}
inline Cost Functor_getCostZXY::operator()(EnumeratedVariable *zz, EnumeratedVariable *xx,  EnumeratedVariable *yy, Value vz, Value vx, Value vy) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCost(vx, vy, vz);}
inline Cost Functor_getCostZYX::operator()(EnumeratedVariable *zz, EnumeratedVariable *yy,  EnumeratedVariable *xx, Value vz, Value vy, Value vx) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCost(vx, vy, vz);}

inline Cost Functor_getCostWithBinariesXYZ::operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCostWithBinaries(vx, vy, vz);}
inline Cost Functor_getCostWithBinariesXZY::operator()(EnumeratedVariable *xx, EnumeratedVariable *zz,  EnumeratedVariable *yy, Value vx, Value vz, Value vy) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCostWithBinaries(vx, vy, vz);}
inline Cost Functor_getCostWithBinariesYXZ::operator()(EnumeratedVariable *yy, EnumeratedVariable *xx,  EnumeratedVariable *zz, Value vy, Value vx, Value vz) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCostWithBinaries(vx, vy, vz);}
inline Cost Functor_getCostWithBinariesYZX::operator()(EnumeratedVariable *yy, EnumeratedVariable *zz,  EnumeratedVariable *xx, Value vy, Value vz, Value vx) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCostWithBinaries(vx, vy, vz);}
inline Cost Functor_getCostWithBinariesZXY::operator()(EnumeratedVariable *zz, EnumeratedVariable *xx,  EnumeratedVariable *yy, Value vz, Value vx, Value vy) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCostWithBinaries(vx, vy, vz);}
inline Cost Functor_getCostWithBinariesZYX::operator()(EnumeratedVariable *zz, EnumeratedVariable *yy,  EnumeratedVariable *xx, Value vz, Value vy, Value vx) const {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.getCostWithBinaries(vx, vy, vz);}

inline void Functor_addCostXYZ::operator()(EnumeratedVariable *xx, EnumeratedVariable *yy,  EnumeratedVariable *zz, Value vx, Value vy, Value vz, Cost c) {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.addCost(vx, vy, vz, c);}
inline void Functor_addCostXZY::operator()(EnumeratedVariable *xx, EnumeratedVariable *zz,  EnumeratedVariable *yy, Value vx, Value vz, Value vy, Cost c) {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.addCost(vx, vy, vz, c);}
inline void Functor_addCostYXZ::operator()(EnumeratedVariable *yy, EnumeratedVariable *xx,  EnumeratedVariable *zz, Value vy, Value vx, Value vz, Cost c) {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.addCost(vx, vy, vz, c);}
inline void Functor_addCostYZX::operator()(EnumeratedVariable *yy, EnumeratedVariable *zz,  EnumeratedVariable *xx, Value vy, Value vz, Value vx, Cost c) {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.addCost(vx, vy, vz, c);}
inline void Functor_addCostZXY::operator()(EnumeratedVariable *zz, EnumeratedVariable *xx,  EnumeratedVariable *yy, Value vz, Value vx, Value vy, Cost c) {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.addCost(vx, vy, vz, c);}
inline void Functor_addCostZYX::operator()(EnumeratedVariable *zz, EnumeratedVariable *yy,  EnumeratedVariable *xx, Value vz, Value vy, Value vx, Cost c) {assert(xx==obj.x);assert(yy==obj.y);assert(zz==obj.z);return obj.addCost(vx, vy, vz, c);}

inline Value Functor_getFunctionXYZ::operator()(EnumeratedVariable *yy, EnumeratedVariable *zz, Value vy, Value vz) const {assert(yy==obj.y);assert(zz==obj.z);return obj.getFunctionX(vy, vz);}
inline Value Functor_getFunctionXZY::operator()(EnumeratedVariable *zz, EnumeratedVariable *yy, Value vz, Value vy) const {assert(yy==obj.y);assert(zz==obj.z);return obj.getFunctionX(vy, vz);}
inline Value Functor_getFunctionYXZ::operator()(EnumeratedVariable *xx, EnumeratedVariable *zz, Value vx, Value vz) const {assert(xx==obj.x);assert(zz==obj.z);return obj.getFunctionY(vx, vz);}
inline Value Functor_getFunctionYZX::operator()(EnumeratedVariable *zz, EnumeratedVariable *xx, Value vz, Value vx) const {assert(xx==obj.x);assert(zz==obj.z);return obj.getFunctionY(vx, vz);}
inline Value Functor_getFunctionZXY::operator()(EnumeratedVariable *xx, EnumeratedVariable *yy, Value vx, Value vy) const {assert(xx==obj.x);assert(yy==obj.y);return obj.getFunctionZ(vx, vy);}
inline Value Functor_getFunctionZYX::operator()(EnumeratedVariable *yy, EnumeratedVariable *xx, Value vy, Value vx) const {assert(xx==obj.x);assert(yy==obj.y);return obj.getFunctionZ(vx, vy);}


#endif /*TB2TERNARYCONSTR_HPP_*/
