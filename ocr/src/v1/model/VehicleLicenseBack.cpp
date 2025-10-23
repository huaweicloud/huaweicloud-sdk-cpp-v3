

#include "huaweicloud/ocr/v1/model/VehicleLicenseBack.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VehicleLicenseBack::VehicleLicenseBack()
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

VehicleLicenseBack::~VehicleLicenseBack() = default;

void VehicleLicenseBack::validate()
{
}

web::json::value VehicleLicenseBack::toJson() const
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
bool VehicleLicenseBack::fromJson(const web::json::value& val)
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


std::string VehicleLicenseBack::getNumber() const
{
    return number_;
}

void VehicleLicenseBack::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool VehicleLicenseBack::numberIsSet() const
{
    return numberIsSet_;
}

void VehicleLicenseBack::unsetnumber()
{
    numberIsSet_ = false;
}

std::string VehicleLicenseBack::getFileNo() const
{
    return fileNo_;
}

void VehicleLicenseBack::setFileNo(const std::string& value)
{
    fileNo_ = value;
    fileNoIsSet_ = true;
}

bool VehicleLicenseBack::fileNoIsSet() const
{
    return fileNoIsSet_;
}

void VehicleLicenseBack::unsetfileNo()
{
    fileNoIsSet_ = false;
}

std::string VehicleLicenseBack::getApprovedPassengers() const
{
    return approvedPassengers_;
}

void VehicleLicenseBack::setApprovedPassengers(const std::string& value)
{
    approvedPassengers_ = value;
    approvedPassengersIsSet_ = true;
}

bool VehicleLicenseBack::approvedPassengersIsSet() const
{
    return approvedPassengersIsSet_;
}

void VehicleLicenseBack::unsetapprovedPassengers()
{
    approvedPassengersIsSet_ = false;
}

std::string VehicleLicenseBack::getGrossMass() const
{
    return grossMass_;
}

void VehicleLicenseBack::setGrossMass(const std::string& value)
{
    grossMass_ = value;
    grossMassIsSet_ = true;
}

bool VehicleLicenseBack::grossMassIsSet() const
{
    return grossMassIsSet_;
}

void VehicleLicenseBack::unsetgrossMass()
{
    grossMassIsSet_ = false;
}

std::string VehicleLicenseBack::getUnladenMass() const
{
    return unladenMass_;
}

void VehicleLicenseBack::setUnladenMass(const std::string& value)
{
    unladenMass_ = value;
    unladenMassIsSet_ = true;
}

bool VehicleLicenseBack::unladenMassIsSet() const
{
    return unladenMassIsSet_;
}

void VehicleLicenseBack::unsetunladenMass()
{
    unladenMassIsSet_ = false;
}

std::string VehicleLicenseBack::getApprovedLoad() const
{
    return approvedLoad_;
}

void VehicleLicenseBack::setApprovedLoad(const std::string& value)
{
    approvedLoad_ = value;
    approvedLoadIsSet_ = true;
}

bool VehicleLicenseBack::approvedLoadIsSet() const
{
    return approvedLoadIsSet_;
}

void VehicleLicenseBack::unsetapprovedLoad()
{
    approvedLoadIsSet_ = false;
}

std::string VehicleLicenseBack::getDimension() const
{
    return dimension_;
}

void VehicleLicenseBack::setDimension(const std::string& value)
{
    dimension_ = value;
    dimensionIsSet_ = true;
}

bool VehicleLicenseBack::dimensionIsSet() const
{
    return dimensionIsSet_;
}

void VehicleLicenseBack::unsetdimension()
{
    dimensionIsSet_ = false;
}

std::string VehicleLicenseBack::getTractionMass() const
{
    return tractionMass_;
}

void VehicleLicenseBack::setTractionMass(const std::string& value)
{
    tractionMass_ = value;
    tractionMassIsSet_ = true;
}

bool VehicleLicenseBack::tractionMassIsSet() const
{
    return tractionMassIsSet_;
}

void VehicleLicenseBack::unsettractionMass()
{
    tractionMassIsSet_ = false;
}

std::string VehicleLicenseBack::getRemarks() const
{
    return remarks_;
}

void VehicleLicenseBack::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool VehicleLicenseBack::remarksIsSet() const
{
    return remarksIsSet_;
}

void VehicleLicenseBack::unsetremarks()
{
    remarksIsSet_ = false;
}

std::string VehicleLicenseBack::getInspectionRecord() const
{
    return inspectionRecord_;
}

void VehicleLicenseBack::setInspectionRecord(const std::string& value)
{
    inspectionRecord_ = value;
    inspectionRecordIsSet_ = true;
}

bool VehicleLicenseBack::inspectionRecordIsSet() const
{
    return inspectionRecordIsSet_;
}

void VehicleLicenseBack::unsetinspectionRecord()
{
    inspectionRecordIsSet_ = false;
}

std::string VehicleLicenseBack::getCodeNumber() const
{
    return codeNumber_;
}

void VehicleLicenseBack::setCodeNumber(const std::string& value)
{
    codeNumber_ = value;
    codeNumberIsSet_ = true;
}

bool VehicleLicenseBack::codeNumberIsSet() const
{
    return codeNumberIsSet_;
}

void VehicleLicenseBack::unsetcodeNumber()
{
    codeNumberIsSet_ = false;
}

std::string VehicleLicenseBack::getEnergyType() const
{
    return energyType_;
}

void VehicleLicenseBack::setEnergyType(const std::string& value)
{
    energyType_ = value;
    energyTypeIsSet_ = true;
}

bool VehicleLicenseBack::energyTypeIsSet() const
{
    return energyTypeIsSet_;
}

void VehicleLicenseBack::unsetenergyType()
{
    energyTypeIsSet_ = false;
}

Object VehicleLicenseBack::getTextLocation() const
{
    return textLocation_;
}

void VehicleLicenseBack::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool VehicleLicenseBack::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void VehicleLicenseBack::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


