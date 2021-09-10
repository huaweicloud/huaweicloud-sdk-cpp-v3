

#include "huaweicloud/ocr/v1/model/VehicleLicenseResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VehicleLicenseResult::VehicleLicenseResult()
{
    number_ = "";
    numberIsSet_ = false;
    vehicleType_ = "";
    vehicleTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    useCharacter_ = "";
    useCharacterIsSet_ = false;
    model_ = "";
    modelIsSet_ = false;
    engineNo_ = "";
    engineNoIsSet_ = false;
    vin_ = "";
    vinIsSet_ = false;
    registerDate_ = "";
    registerDateIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
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
}

VehicleLicenseResult::~VehicleLicenseResult() = default;

void VehicleLicenseResult::validate()
{
}

web::json::value VehicleLicenseResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(vehicleTypeIsSet_) {
        val[utility::conversions::to_string_t("vehicle_type")] = ModelBase::toJson(vehicleType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(useCharacterIsSet_) {
        val[utility::conversions::to_string_t("use_character")] = ModelBase::toJson(useCharacter_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(engineNoIsSet_) {
        val[utility::conversions::to_string_t("engine_no")] = ModelBase::toJson(engineNo_);
    }
    if(vinIsSet_) {
        val[utility::conversions::to_string_t("vin")] = ModelBase::toJson(vin_);
    }
    if(registerDateIsSet_) {
        val[utility::conversions::to_string_t("register_date")] = ModelBase::toJson(registerDate_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
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

    return val;
}

bool VehicleLicenseResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vehicle_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("use_character"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_character"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseCharacter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("register_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("register_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegisterDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuing_authority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuing_authority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuingAuthority(refVal);
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
    return ok;
}


std::string VehicleLicenseResult::getNumber() const
{
    return number_;
}

void VehicleLicenseResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool VehicleLicenseResult::numberIsSet() const
{
    return numberIsSet_;
}

void VehicleLicenseResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string VehicleLicenseResult::getVehicleType() const
{
    return vehicleType_;
}

void VehicleLicenseResult::setVehicleType(const std::string& value)
{
    vehicleType_ = value;
    vehicleTypeIsSet_ = true;
}

bool VehicleLicenseResult::vehicleTypeIsSet() const
{
    return vehicleTypeIsSet_;
}

void VehicleLicenseResult::unsetvehicleType()
{
    vehicleTypeIsSet_ = false;
}

std::string VehicleLicenseResult::getName() const
{
    return name_;
}

void VehicleLicenseResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VehicleLicenseResult::nameIsSet() const
{
    return nameIsSet_;
}

void VehicleLicenseResult::unsetname()
{
    nameIsSet_ = false;
}

std::string VehicleLicenseResult::getAddress() const
{
    return address_;
}

void VehicleLicenseResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool VehicleLicenseResult::addressIsSet() const
{
    return addressIsSet_;
}

void VehicleLicenseResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::string VehicleLicenseResult::getUseCharacter() const
{
    return useCharacter_;
}

void VehicleLicenseResult::setUseCharacter(const std::string& value)
{
    useCharacter_ = value;
    useCharacterIsSet_ = true;
}

bool VehicleLicenseResult::useCharacterIsSet() const
{
    return useCharacterIsSet_;
}

void VehicleLicenseResult::unsetuseCharacter()
{
    useCharacterIsSet_ = false;
}

std::string VehicleLicenseResult::getModel() const
{
    return model_;
}

void VehicleLicenseResult::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool VehicleLicenseResult::modelIsSet() const
{
    return modelIsSet_;
}

void VehicleLicenseResult::unsetmodel()
{
    modelIsSet_ = false;
}

std::string VehicleLicenseResult::getEngineNo() const
{
    return engineNo_;
}

void VehicleLicenseResult::setEngineNo(const std::string& value)
{
    engineNo_ = value;
    engineNoIsSet_ = true;
}

bool VehicleLicenseResult::engineNoIsSet() const
{
    return engineNoIsSet_;
}

void VehicleLicenseResult::unsetengineNo()
{
    engineNoIsSet_ = false;
}

std::string VehicleLicenseResult::getVin() const
{
    return vin_;
}

void VehicleLicenseResult::setVin(const std::string& value)
{
    vin_ = value;
    vinIsSet_ = true;
}

bool VehicleLicenseResult::vinIsSet() const
{
    return vinIsSet_;
}

void VehicleLicenseResult::unsetvin()
{
    vinIsSet_ = false;
}

std::string VehicleLicenseResult::getRegisterDate() const
{
    return registerDate_;
}

void VehicleLicenseResult::setRegisterDate(const std::string& value)
{
    registerDate_ = value;
    registerDateIsSet_ = true;
}

bool VehicleLicenseResult::registerDateIsSet() const
{
    return registerDateIsSet_;
}

void VehicleLicenseResult::unsetregisterDate()
{
    registerDateIsSet_ = false;
}

std::string VehicleLicenseResult::getIssueDate() const
{
    return issueDate_;
}

void VehicleLicenseResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool VehicleLicenseResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void VehicleLicenseResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string VehicleLicenseResult::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void VehicleLicenseResult::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool VehicleLicenseResult::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void VehicleLicenseResult::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

std::string VehicleLicenseResult::getFileNo() const
{
    return fileNo_;
}

void VehicleLicenseResult::setFileNo(const std::string& value)
{
    fileNo_ = value;
    fileNoIsSet_ = true;
}

bool VehicleLicenseResult::fileNoIsSet() const
{
    return fileNoIsSet_;
}

void VehicleLicenseResult::unsetfileNo()
{
    fileNoIsSet_ = false;
}

std::string VehicleLicenseResult::getApprovedPassengers() const
{
    return approvedPassengers_;
}

void VehicleLicenseResult::setApprovedPassengers(const std::string& value)
{
    approvedPassengers_ = value;
    approvedPassengersIsSet_ = true;
}

bool VehicleLicenseResult::approvedPassengersIsSet() const
{
    return approvedPassengersIsSet_;
}

void VehicleLicenseResult::unsetapprovedPassengers()
{
    approvedPassengersIsSet_ = false;
}

std::string VehicleLicenseResult::getGrossMass() const
{
    return grossMass_;
}

void VehicleLicenseResult::setGrossMass(const std::string& value)
{
    grossMass_ = value;
    grossMassIsSet_ = true;
}

bool VehicleLicenseResult::grossMassIsSet() const
{
    return grossMassIsSet_;
}

void VehicleLicenseResult::unsetgrossMass()
{
    grossMassIsSet_ = false;
}

std::string VehicleLicenseResult::getUnladenMass() const
{
    return unladenMass_;
}

void VehicleLicenseResult::setUnladenMass(const std::string& value)
{
    unladenMass_ = value;
    unladenMassIsSet_ = true;
}

bool VehicleLicenseResult::unladenMassIsSet() const
{
    return unladenMassIsSet_;
}

void VehicleLicenseResult::unsetunladenMass()
{
    unladenMassIsSet_ = false;
}

std::string VehicleLicenseResult::getApprovedLoad() const
{
    return approvedLoad_;
}

void VehicleLicenseResult::setApprovedLoad(const std::string& value)
{
    approvedLoad_ = value;
    approvedLoadIsSet_ = true;
}

bool VehicleLicenseResult::approvedLoadIsSet() const
{
    return approvedLoadIsSet_;
}

void VehicleLicenseResult::unsetapprovedLoad()
{
    approvedLoadIsSet_ = false;
}

std::string VehicleLicenseResult::getDimension() const
{
    return dimension_;
}

void VehicleLicenseResult::setDimension(const std::string& value)
{
    dimension_ = value;
    dimensionIsSet_ = true;
}

bool VehicleLicenseResult::dimensionIsSet() const
{
    return dimensionIsSet_;
}

void VehicleLicenseResult::unsetdimension()
{
    dimensionIsSet_ = false;
}

std::string VehicleLicenseResult::getTractionMass() const
{
    return tractionMass_;
}

void VehicleLicenseResult::setTractionMass(const std::string& value)
{
    tractionMass_ = value;
    tractionMassIsSet_ = true;
}

bool VehicleLicenseResult::tractionMassIsSet() const
{
    return tractionMassIsSet_;
}

void VehicleLicenseResult::unsettractionMass()
{
    tractionMassIsSet_ = false;
}

std::string VehicleLicenseResult::getRemarks() const
{
    return remarks_;
}

void VehicleLicenseResult::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool VehicleLicenseResult::remarksIsSet() const
{
    return remarksIsSet_;
}

void VehicleLicenseResult::unsetremarks()
{
    remarksIsSet_ = false;
}

std::string VehicleLicenseResult::getInspectionRecord() const
{
    return inspectionRecord_;
}

void VehicleLicenseResult::setInspectionRecord(const std::string& value)
{
    inspectionRecord_ = value;
    inspectionRecordIsSet_ = true;
}

bool VehicleLicenseResult::inspectionRecordIsSet() const
{
    return inspectionRecordIsSet_;
}

void VehicleLicenseResult::unsetinspectionRecord()
{
    inspectionRecordIsSet_ = false;
}

std::string VehicleLicenseResult::getCodeNumber() const
{
    return codeNumber_;
}

void VehicleLicenseResult::setCodeNumber(const std::string& value)
{
    codeNumber_ = value;
    codeNumberIsSet_ = true;
}

bool VehicleLicenseResult::codeNumberIsSet() const
{
    return codeNumberIsSet_;
}

void VehicleLicenseResult::unsetcodeNumber()
{
    codeNumberIsSet_ = false;
}

}
}
}
}
}


