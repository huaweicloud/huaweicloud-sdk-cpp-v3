

#include "huaweicloud/ocr/v1/model/TransportationLicenseResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




TransportationLicenseResult::TransportationLicenseResult()
{
    ownerName_ = "";
    ownerNameIsSet_ = false;
    licenseNumber_ = "";
    licenseNumberIsSet_ = false;
    vehicleNumber_ = "";
    vehicleNumberIsSet_ = false;
    vehicleType_ = "";
    vehicleTypeIsSet_ = false;
    maximumCapacity_ = "";
    maximumCapacityIsSet_ = false;
    vehicleSize_ = "";
    vehicleSizeIsSet_ = false;
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    ownerAddress_ = "";
    ownerAddressIsSet_ = false;
    economicType_ = "";
    economicTypeIsSet_ = false;
    businessCertificate_ = "";
    businessCertificateIsSet_ = false;
    businessScope_ = "";
    businessScopeIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    reviewExpiryDate_ = "";
    reviewExpiryDateIsSet_ = false;
    assessedTechnicalLevel_ = "";
    assessedTechnicalLevelIsSet_ = false;
    imageLocationIsSet_ = false;
    adjustedImage_ = "";
    adjustedImageIsSet_ = false;
    confidenceIsSet_ = false;
}

TransportationLicenseResult::~TransportationLicenseResult() = default;

void TransportationLicenseResult::validate()
{
}

web::json::value TransportationLicenseResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }
    if(licenseNumberIsSet_) {
        val[utility::conversions::to_string_t("license_number")] = ModelBase::toJson(licenseNumber_);
    }
    if(vehicleNumberIsSet_) {
        val[utility::conversions::to_string_t("vehicle_number")] = ModelBase::toJson(vehicleNumber_);
    }
    if(vehicleTypeIsSet_) {
        val[utility::conversions::to_string_t("vehicle_type")] = ModelBase::toJson(vehicleType_);
    }
    if(maximumCapacityIsSet_) {
        val[utility::conversions::to_string_t("maximum_capacity")] = ModelBase::toJson(maximumCapacity_);
    }
    if(vehicleSizeIsSet_) {
        val[utility::conversions::to_string_t("vehicle_size")] = ModelBase::toJson(vehicleSize_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(ownerAddressIsSet_) {
        val[utility::conversions::to_string_t("owner_address")] = ModelBase::toJson(ownerAddress_);
    }
    if(economicTypeIsSet_) {
        val[utility::conversions::to_string_t("economic_type")] = ModelBase::toJson(economicType_);
    }
    if(businessCertificateIsSet_) {
        val[utility::conversions::to_string_t("business_certificate")] = ModelBase::toJson(businessCertificate_);
    }
    if(businessScopeIsSet_) {
        val[utility::conversions::to_string_t("business_scope")] = ModelBase::toJson(businessScope_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(reviewExpiryDateIsSet_) {
        val[utility::conversions::to_string_t("review_expiry_date")] = ModelBase::toJson(reviewExpiryDate_);
    }
    if(assessedTechnicalLevelIsSet_) {
        val[utility::conversions::to_string_t("assessed_technical_level")] = ModelBase::toJson(assessedTechnicalLevel_);
    }
    if(imageLocationIsSet_) {
        val[utility::conversions::to_string_t("image_location")] = ModelBase::toJson(imageLocation_);
    }
    if(adjustedImageIsSet_) {
        val[utility::conversions::to_string_t("adjusted_image")] = ModelBase::toJson(adjustedImage_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool TransportationLicenseResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("license_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("license_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLicenseNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("maximum_capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum_capacity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximumCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("economic_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("economic_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEconomicType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_expiry_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assessed_technical_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assessed_technical_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssessedTechnicalLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adjusted_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adjusted_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdjustedImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string TransportationLicenseResult::getOwnerName() const
{
    return ownerName_;
}

void TransportationLicenseResult::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool TransportationLicenseResult::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void TransportationLicenseResult::unsetownerName()
{
    ownerNameIsSet_ = false;
}

std::string TransportationLicenseResult::getLicenseNumber() const
{
    return licenseNumber_;
}

void TransportationLicenseResult::setLicenseNumber(const std::string& value)
{
    licenseNumber_ = value;
    licenseNumberIsSet_ = true;
}

bool TransportationLicenseResult::licenseNumberIsSet() const
{
    return licenseNumberIsSet_;
}

void TransportationLicenseResult::unsetlicenseNumber()
{
    licenseNumberIsSet_ = false;
}

std::string TransportationLicenseResult::getVehicleNumber() const
{
    return vehicleNumber_;
}

void TransportationLicenseResult::setVehicleNumber(const std::string& value)
{
    vehicleNumber_ = value;
    vehicleNumberIsSet_ = true;
}

bool TransportationLicenseResult::vehicleNumberIsSet() const
{
    return vehicleNumberIsSet_;
}

void TransportationLicenseResult::unsetvehicleNumber()
{
    vehicleNumberIsSet_ = false;
}

std::string TransportationLicenseResult::getVehicleType() const
{
    return vehicleType_;
}

void TransportationLicenseResult::setVehicleType(const std::string& value)
{
    vehicleType_ = value;
    vehicleTypeIsSet_ = true;
}

bool TransportationLicenseResult::vehicleTypeIsSet() const
{
    return vehicleTypeIsSet_;
}

void TransportationLicenseResult::unsetvehicleType()
{
    vehicleTypeIsSet_ = false;
}

std::string TransportationLicenseResult::getMaximumCapacity() const
{
    return maximumCapacity_;
}

void TransportationLicenseResult::setMaximumCapacity(const std::string& value)
{
    maximumCapacity_ = value;
    maximumCapacityIsSet_ = true;
}

bool TransportationLicenseResult::maximumCapacityIsSet() const
{
    return maximumCapacityIsSet_;
}

void TransportationLicenseResult::unsetmaximumCapacity()
{
    maximumCapacityIsSet_ = false;
}

std::string TransportationLicenseResult::getVehicleSize() const
{
    return vehicleSize_;
}

void TransportationLicenseResult::setVehicleSize(const std::string& value)
{
    vehicleSize_ = value;
    vehicleSizeIsSet_ = true;
}

bool TransportationLicenseResult::vehicleSizeIsSet() const
{
    return vehicleSizeIsSet_;
}

void TransportationLicenseResult::unsetvehicleSize()
{
    vehicleSizeIsSet_ = false;
}

std::string TransportationLicenseResult::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void TransportationLicenseResult::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool TransportationLicenseResult::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void TransportationLicenseResult::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

std::string TransportationLicenseResult::getIssueDate() const
{
    return issueDate_;
}

void TransportationLicenseResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool TransportationLicenseResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void TransportationLicenseResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string TransportationLicenseResult::getOwnerAddress() const
{
    return ownerAddress_;
}

void TransportationLicenseResult::setOwnerAddress(const std::string& value)
{
    ownerAddress_ = value;
    ownerAddressIsSet_ = true;
}

bool TransportationLicenseResult::ownerAddressIsSet() const
{
    return ownerAddressIsSet_;
}

void TransportationLicenseResult::unsetownerAddress()
{
    ownerAddressIsSet_ = false;
}

std::string TransportationLicenseResult::getEconomicType() const
{
    return economicType_;
}

void TransportationLicenseResult::setEconomicType(const std::string& value)
{
    economicType_ = value;
    economicTypeIsSet_ = true;
}

bool TransportationLicenseResult::economicTypeIsSet() const
{
    return economicTypeIsSet_;
}

void TransportationLicenseResult::unseteconomicType()
{
    economicTypeIsSet_ = false;
}

std::string TransportationLicenseResult::getBusinessCertificate() const
{
    return businessCertificate_;
}

void TransportationLicenseResult::setBusinessCertificate(const std::string& value)
{
    businessCertificate_ = value;
    businessCertificateIsSet_ = true;
}

bool TransportationLicenseResult::businessCertificateIsSet() const
{
    return businessCertificateIsSet_;
}

void TransportationLicenseResult::unsetbusinessCertificate()
{
    businessCertificateIsSet_ = false;
}

std::string TransportationLicenseResult::getBusinessScope() const
{
    return businessScope_;
}

void TransportationLicenseResult::setBusinessScope(const std::string& value)
{
    businessScope_ = value;
    businessScopeIsSet_ = true;
}

bool TransportationLicenseResult::businessScopeIsSet() const
{
    return businessScopeIsSet_;
}

void TransportationLicenseResult::unsetbusinessScope()
{
    businessScopeIsSet_ = false;
}

std::string TransportationLicenseResult::getExpiryDate() const
{
    return expiryDate_;
}

void TransportationLicenseResult::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool TransportationLicenseResult::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void TransportationLicenseResult::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string TransportationLicenseResult::getReviewExpiryDate() const
{
    return reviewExpiryDate_;
}

void TransportationLicenseResult::setReviewExpiryDate(const std::string& value)
{
    reviewExpiryDate_ = value;
    reviewExpiryDateIsSet_ = true;
}

bool TransportationLicenseResult::reviewExpiryDateIsSet() const
{
    return reviewExpiryDateIsSet_;
}

void TransportationLicenseResult::unsetreviewExpiryDate()
{
    reviewExpiryDateIsSet_ = false;
}

std::string TransportationLicenseResult::getAssessedTechnicalLevel() const
{
    return assessedTechnicalLevel_;
}

void TransportationLicenseResult::setAssessedTechnicalLevel(const std::string& value)
{
    assessedTechnicalLevel_ = value;
    assessedTechnicalLevelIsSet_ = true;
}

bool TransportationLicenseResult::assessedTechnicalLevelIsSet() const
{
    return assessedTechnicalLevelIsSet_;
}

void TransportationLicenseResult::unsetassessedTechnicalLevel()
{
    assessedTechnicalLevelIsSet_ = false;
}

std::vector<std::vector<int32_t>>& TransportationLicenseResult::getImageLocation()
{
    return imageLocation_;
}

void TransportationLicenseResult::setImageLocation(const std::vector<std::vector<int32_t>>& value)
{
    imageLocation_ = value;
    imageLocationIsSet_ = true;
}

bool TransportationLicenseResult::imageLocationIsSet() const
{
    return imageLocationIsSet_;
}

void TransportationLicenseResult::unsetimageLocation()
{
    imageLocationIsSet_ = false;
}

std::string TransportationLicenseResult::getAdjustedImage() const
{
    return adjustedImage_;
}

void TransportationLicenseResult::setAdjustedImage(const std::string& value)
{
    adjustedImage_ = value;
    adjustedImageIsSet_ = true;
}

bool TransportationLicenseResult::adjustedImageIsSet() const
{
    return adjustedImageIsSet_;
}

void TransportationLicenseResult::unsetadjustedImage()
{
    adjustedImageIsSet_ = false;
}

Object TransportationLicenseResult::getConfidence() const
{
    return confidence_;
}

void TransportationLicenseResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool TransportationLicenseResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void TransportationLicenseResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


