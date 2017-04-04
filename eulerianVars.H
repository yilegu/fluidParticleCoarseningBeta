//-Eulerian variables
IOobject normalizedEulerianDragCoeffIO
(
	"normalizedEulerianDragCoeff"+filterWidthName,
	runTime.timeName(),
	mesh,
	IOobject::NO_READ,
	IOobject::AUTO_WRITE,
	false
);		    		    
IOField<vector> normalizedEulerianDragCoeff(normalizedEulerianDragCoeffIO,mesh.cells().size());

IOobject normalizedEulerianDragCoeffNumIO
(
	"normalizedEulerianDragCoeffNum"+filterWidthName,
	runTime.timeName(),
	mesh,
	IOobject::NO_READ,
	IOobject::AUTO_WRITE,
	false
);		    		    
IOField<vector> normalizedEulerianDragCoeffNum(normalizedEulerianDragCoeffNumIO,mesh.cells().size());

IOobject normalizedEulerianDragCoeffDomIO
(
	"normalizedEulerianDragCoeffDom"+filterWidthName,
	runTime.timeName(),
	mesh,
	IOobject::NO_READ,
	IOobject::AUTO_WRITE,
	false
);		    		    
IOField<vector> normalizedEulerianDragCoeffDom(normalizedEulerianDragCoeffDomIO,mesh.cells().size());

IOobject baralppxpIO
(
	"baralppxp"+filterWidthName,
	runTime.timeName(),
	mesh,
	IOobject::NO_READ,
	IOobject::AUTO_WRITE,
	false
);		    		    
IOField<scalar> baralppxp(baralppxpIO,nP[me]);
