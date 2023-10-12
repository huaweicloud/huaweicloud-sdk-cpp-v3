

#include "huaweicloud/ocr/v1/model/VehicleLicenseback.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VehicleLicenseback::VehicleLicenseback()
{
    number_ = "";
    numberIsSet_ = false;
    fileNo_ = "";
    fileNoIsSet_ = false;
    approvedPassengers_ = "";
    approvedPassengersIsSet_ = false;
    grossMass_ = "";
    grossMassIsSet_ = false;
    unladenMass_ = "";
    unladenMassIsSet_ = false;
    approvedLoad_ = "";
    approvedLoadIsSet_ = false;
    dimension_ = "";
    dimensionIsSet_ = false;
    tractionMass_ = "";
    tractionMassIsSet_ = false;
    remarks_ = "";
    remarksIsSet_ = false;
    inspectionRecord_ = "";
    inspectionRecordIsSet_ = false;
    codeNumber_ = "";
    codeNumberIsSet_ = false;
    energyType_ = "";
    energyTypeIsSet_ = false;
    textLocationIsSet_ = false;
}

VehicleLicenseback::~VehicleLicenseback() = default;

void VehicleLicenseback::validate()
{
}

web::json::value VehicleLicenseback::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(fileNoIsSet_) {
        val[utility::conversions::to_string_t("file_no")] = ModelBase::toJson(fileNo_);
    }
    if(approvedPassengersIsSet_) {
        val[utility::conversions::to_string_t("approved_passengers")] = ModelBase::toJson(approvedPassengers_);
    }
    if(grossMassIsSet_) {
        val[utility::conversions::to_string_t("gross_mass")] = ModelBase::toJson(grossMass_);
    }
    if(unladenMassIsSet_) {
        val[utility::conversions::to_string_t("unladen_mass")] = ModelBase::toJson(unladenMass_);
    }
    if(approvedLoadIsSet_) {
        val[utility::conversions::to_string_t("approved_load")] = ModelBase::toJson(approvedLoad_);
    }
    if(dimensionIsSet_) {
        val[utility::conversions::to_string_t("dimension")] = ModelBase::toJson(dimension_);
    }
    if(tractionMassIsSet_) {
        val[utility::conversions::to_string_t("traction_mass")] = ModelBase::toJson(tractionMass_);
    }
    if(remarksIsSet_) {
        val[utility::conversions::to_string_t("remarks")] = ModelBase::toJson(remarks_);
    }
    if(inspectionRecordIsSet_) {
        val[utility::conversions::to_string_t("inspection_record")] = ModelBase::toJson(inspectionRecord_);
    }
    if(codeNumberIsSet_) {
        val[utility::conversions::to_string_t("code_number")] = ModelBase::toJson(codeNumber_);
    }
    if(energyTypeIsSet_) {
        val[utility::conversions::to_string_t("energy_type")] = ModelBase::toJson(energyType_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }

    return val;
}
bool VehicleLicenseback::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approved_passengers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approved_passengers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovedPassengers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gross_mass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gross_mass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrossMass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unladen_mass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unladen_mass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnladenMass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approved_load"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approved_load"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovedLoad(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dimension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dimension"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDimension(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traction_mass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traction_mass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTractionMass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remarks"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemarks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inspection_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inspection_record"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInspectionRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("energy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("energy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnergyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
        }
    }
    return ok;
}


std::string VehicleLicenseback::getNumber() const
{
    return number_;
}

void VehicleLicenseback::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool VehicleLicenseback::numberIsSet() const
{
    return numberIsSet_;
}

void VehicleLicenseback::unsetnumber()
{
    numberIsSet_ = false;
}

std::string VehicleLicenseback::getFileNo() const
{
    return fileNo_;
}

void VehicleLicenseback::setFileNo(const std::string& value)
{
    fileNo_ = value;
    fileNoIsSet_ = true;
}

bool VehicleLicenseback::fileNoIsSet() const
{
    return fileNoIsSet_;
}

void VehicleLicenseback::unsetfileNo()
{
    fileNoIsSet_ = false;
}

std::string VehicleLicenseback::getApprovedPassengers() const
{
    return approvedPassengers_;
}

void VehicleLicenseback::setApprovedPassengers(const std::string& value)
{
    approvedPassengers_ = value;
    approvedPassengersIsSet_ = true;
}

bool VehicleLicenseback::approvedPassengersIsSet() const
{
    return approvedPassengersIsSet_;
}

void VehicleLicenseback::unsetapprovedPassengers()
{
    approvedPassengersIsSet_ = false;
}

std::string VehicleLicenseback::getGrossMass() const
{
    return grossMass_;
}

void VehicleLicenseback::setGrossMass(const std::string& value)
{
    grossMass_ = value;
    grossMassIsSet_ = true;
}

bool VehicleLicenseback::grossMassIsSet() const
{
    return grossMassIsSet_;
}

void VehicleLicenseback::unsetgrossMass()
{
    grossMassIsSet_ = false;
}

std::string VehicleLicenseback::getUnladenMass() const
{
    return unladenMass_;
}

void VehicleLicenseback::setUnladenMass(const std::string& value)
{
    unladenMass_ = value;
    unladenMassIsSet_ = true;
}

bool VehicleLicenseback::unladenMassIsSet() const
{
    return unladenMassIsSet_;
}

void VehicleLicenseback::unsetunladenMass()
{
    unladenMassIsSet_ = false;
}

std::string VehicleLicenseback::getApprovedLoad() const
{
    return approvedLoad_;
}

void VehicleLicenseback::setApprovedLoad(const std::string& value)
{
    approvedLoad_ = value;
    approvedLoadIsSet_ = true;
}

bool VehicleLicenseback::approvedLoadIsSet() const
{
    return approvedLoadIsSet_;
}

void VehicleLicenseback::unsetapprovedLoad()
{
    approvedLoadIsSet_ = false;
}

std::string VehicleLicenseback::getDimension() const
{
    return dimension_;
}

void VehicleLicenseback::setDimension(const std::string& value)
{
    dimension_ = value;
    dimensionIsSet_ = true;
}

bool VehicleLicenseback::dimensionIsSet() const
{
    return dimensionIsSet_;
}

void VehicleLicenseback::unsetdimension()
{
    dimensionIsSet_ = false;
}

std::string VehicleLicenseback::getTractionMass() const
{
    return tractionMass_;
}

void VehicleLicenseback::setTractionMass(const std::string& value)
{
    tractionMass_ = value;
    tractionMassIsSet_ = true;
}

bool VehicleLicenseback::tractionMassIsSet() const
{
    return tractionMassIsSet_;
}

void VehicleLicenseback::unsettractionMass()
{
    tractionMassIsSet_ = false;
}

std::string VehicleLicenseback::getRemarks() const
{
    return remarks_;
}

void VehicleLicenseback::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool VehicleLicenseback::remarksIsSet() const
{
    return remarksIsSet_;
}

void VehicleLicenseback::unsetremarks()
{
    remarksIsSet_ = false;
}

std::string VehicleLicenseback::getInspectionRecord() const
{
    return inspectionRecord_;
}

void VehicleLicenseback::setInspectionRecord(const std::string& value)
{
    inspectionRecord_ = value;
    inspectionRecordIsSet_ = true;
}

bool VehicleLicenseback::inspectionRecordIsSet() const
{
    return inspectionRecordIsSet_;
}

void VehicleLicenseback::unsetinspectionRecord()
{
    inspectionRecordIsSet_ = false;
}

std::string VehicleLicenseback::getCodeNumber() const
{
    return codeNumber_;
}

void VehicleLicenseback::setCodeNumber(const std::string& value)
{
    codeNumber_ = value;
    codeNumberIsSet_ = true;
}

bool VehicleLicenseback::codeNumberIsSet() const
{
    return codeNumberIsSet_;
}

void VehicleLicenseback::unsetcodeNumber()
{
    codeNumberIsSet_ = false;
}

std::string VehicleLicenseback::getEnergyType() const
{
    return energyType_;
}

void VehicleLicenseback::setEnergyType(const std::string& value)
{
    energyType_ = value;
    energyTypeIsSet_ = true;
}

bool VehicleLicenseback::energyTypeIsSet() const
{
    return energyTypeIsSet_;
}

void VehicleLicenseback::unsetenergyType()
{
    energyTypeIsSet_ = false;
}

Object VehicleLicenseback::getTextLocation() const
{
    return textLocation_;
}

void VehicleLicenseback::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool VehicleLicenseback::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void VehicleLicenseback::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


