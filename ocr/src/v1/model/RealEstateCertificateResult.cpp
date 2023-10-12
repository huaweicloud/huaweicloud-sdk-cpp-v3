

#include "huaweicloud/ocr/v1/model/RealEstateCertificateResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RealEstateCertificateResult::RealEstateCertificateResult()
{
    issuer_ = "";
    issuerIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    realEstateCertificateNo_ = "";
    realEstateCertificateNoIsSet_ = false;
    mortgageSeals_ = 0;
    mortgageSealsIsSet_ = false;
    canceledMortgageSeals_ = 0;
    canceledMortgageSealsIsSet_ = false;
    estateLocation_ = "";
    estateLocationIsSet_ = false;
    totalFloors_ = "";
    totalFloorsIsSet_ = false;
    floor_ = "";
    floorIsSet_ = false;
    yearBuilt_ = "";
    yearBuiltIsSet_ = false;
    structure_ = "";
    structureIsSet_ = false;
    area_ = "";
    areaIsSet_ = false;
    revenueStamps_ = 0;
    revenueStampsIsSet_ = false;
    ownershipCertificateNo_ = "";
    ownershipCertificateNoIsSet_ = false;
    estateHolder_ = "";
    estateHolderIsSet_ = false;
    obligee_ = "";
    obligeeIsSet_ = false;
    ownership_ = "";
    ownershipIsSet_ = false;
    propertyUnitNo_ = "";
    propertyUnitNoIsSet_ = false;
    rightType_ = "";
    rightTypeIsSet_ = false;
    rightNature_ = "";
    rightNatureIsSet_ = false;
    usage_ = "";
    usageIsSet_ = false;
    intendedUsage_ = "";
    intendedUsageIsSet_ = false;
    confidenceIsSet_ = false;
}

RealEstateCertificateResult::~RealEstateCertificateResult() = default;

void RealEstateCertificateResult::validate()
{
}

web::json::value RealEstateCertificateResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issuerIsSet_) {
        val[utility::conversions::to_string_t("issuer")] = ModelBase::toJson(issuer_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(realEstateCertificateNoIsSet_) {
        val[utility::conversions::to_string_t("real_estate_certificate_no")] = ModelBase::toJson(realEstateCertificateNo_);
    }
    if(mortgageSealsIsSet_) {
        val[utility::conversions::to_string_t("mortgage_seals")] = ModelBase::toJson(mortgageSeals_);
    }
    if(canceledMortgageSealsIsSet_) {
        val[utility::conversions::to_string_t("canceled_mortgage_seals")] = ModelBase::toJson(canceledMortgageSeals_);
    }
    if(estateLocationIsSet_) {
        val[utility::conversions::to_string_t("estate_location")] = ModelBase::toJson(estateLocation_);
    }
    if(totalFloorsIsSet_) {
        val[utility::conversions::to_string_t("total_floors")] = ModelBase::toJson(totalFloors_);
    }
    if(floorIsSet_) {
        val[utility::conversions::to_string_t("floor")] = ModelBase::toJson(floor_);
    }
    if(yearBuiltIsSet_) {
        val[utility::conversions::to_string_t("year_built")] = ModelBase::toJson(yearBuilt_);
    }
    if(structureIsSet_) {
        val[utility::conversions::to_string_t("structure")] = ModelBase::toJson(structure_);
    }
    if(areaIsSet_) {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(area_);
    }
    if(revenueStampsIsSet_) {
        val[utility::conversions::to_string_t("revenue_stamps")] = ModelBase::toJson(revenueStamps_);
    }
    if(ownershipCertificateNoIsSet_) {
        val[utility::conversions::to_string_t("ownership_certificate_no")] = ModelBase::toJson(ownershipCertificateNo_);
    }
    if(estateHolderIsSet_) {
        val[utility::conversions::to_string_t("estate_holder")] = ModelBase::toJson(estateHolder_);
    }
    if(obligeeIsSet_) {
        val[utility::conversions::to_string_t("obligee")] = ModelBase::toJson(obligee_);
    }
    if(ownershipIsSet_) {
        val[utility::conversions::to_string_t("ownership")] = ModelBase::toJson(ownership_);
    }
    if(propertyUnitNoIsSet_) {
        val[utility::conversions::to_string_t("property_unit_no")] = ModelBase::toJson(propertyUnitNo_);
    }
    if(rightTypeIsSet_) {
        val[utility::conversions::to_string_t("right_type")] = ModelBase::toJson(rightType_);
    }
    if(rightNatureIsSet_) {
        val[utility::conversions::to_string_t("right_nature")] = ModelBase::toJson(rightNature_);
    }
    if(usageIsSet_) {
        val[utility::conversions::to_string_t("usage")] = ModelBase::toJson(usage_);
    }
    if(intendedUsageIsSet_) {
        val[utility::conversions::to_string_t("intended_usage")] = ModelBase::toJson(intendedUsage_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool RealEstateCertificateResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issuer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuer(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("real_estate_certificate_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_estate_certificate_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealEstateCertificateNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mortgage_seals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mortgage_seals"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMortgageSeals(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canceled_mortgage_seals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canceled_mortgage_seals"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanceledMortgageSeals(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("estate_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("estate_location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEstateLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_floors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_floors"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalFloors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("floor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("year_built"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("year_built"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYearBuilt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("structure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("structure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStructure(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("revenue_stamps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revenue_stamps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRevenueStamps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownership_certificate_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownership_certificate_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnershipCertificateNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("estate_holder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("estate_holder"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEstateHolder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obligee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obligee"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObligee(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownership"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownership"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnership(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("property_unit_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("property_unit_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPropertyUnitNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("right_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("right_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRightType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("right_nature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("right_nature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRightNature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("intended_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intended_usage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntendedUsage(refVal);
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


std::string RealEstateCertificateResult::getIssuer() const
{
    return issuer_;
}

void RealEstateCertificateResult::setIssuer(const std::string& value)
{
    issuer_ = value;
    issuerIsSet_ = true;
}

bool RealEstateCertificateResult::issuerIsSet() const
{
    return issuerIsSet_;
}

void RealEstateCertificateResult::unsetissuer()
{
    issuerIsSet_ = false;
}

std::string RealEstateCertificateResult::getIssueDate() const
{
    return issueDate_;
}

void RealEstateCertificateResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool RealEstateCertificateResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void RealEstateCertificateResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string RealEstateCertificateResult::getRealEstateCertificateNo() const
{
    return realEstateCertificateNo_;
}

void RealEstateCertificateResult::setRealEstateCertificateNo(const std::string& value)
{
    realEstateCertificateNo_ = value;
    realEstateCertificateNoIsSet_ = true;
}

bool RealEstateCertificateResult::realEstateCertificateNoIsSet() const
{
    return realEstateCertificateNoIsSet_;
}

void RealEstateCertificateResult::unsetrealEstateCertificateNo()
{
    realEstateCertificateNoIsSet_ = false;
}

int32_t RealEstateCertificateResult::getMortgageSeals() const
{
    return mortgageSeals_;
}

void RealEstateCertificateResult::setMortgageSeals(int32_t value)
{
    mortgageSeals_ = value;
    mortgageSealsIsSet_ = true;
}

bool RealEstateCertificateResult::mortgageSealsIsSet() const
{
    return mortgageSealsIsSet_;
}

void RealEstateCertificateResult::unsetmortgageSeals()
{
    mortgageSealsIsSet_ = false;
}

int32_t RealEstateCertificateResult::getCanceledMortgageSeals() const
{
    return canceledMortgageSeals_;
}

void RealEstateCertificateResult::setCanceledMortgageSeals(int32_t value)
{
    canceledMortgageSeals_ = value;
    canceledMortgageSealsIsSet_ = true;
}

bool RealEstateCertificateResult::canceledMortgageSealsIsSet() const
{
    return canceledMortgageSealsIsSet_;
}

void RealEstateCertificateResult::unsetcanceledMortgageSeals()
{
    canceledMortgageSealsIsSet_ = false;
}

std::string RealEstateCertificateResult::getEstateLocation() const
{
    return estateLocation_;
}

void RealEstateCertificateResult::setEstateLocation(const std::string& value)
{
    estateLocation_ = value;
    estateLocationIsSet_ = true;
}

bool RealEstateCertificateResult::estateLocationIsSet() const
{
    return estateLocationIsSet_;
}

void RealEstateCertificateResult::unsetestateLocation()
{
    estateLocationIsSet_ = false;
}

std::string RealEstateCertificateResult::getTotalFloors() const
{
    return totalFloors_;
}

void RealEstateCertificateResult::setTotalFloors(const std::string& value)
{
    totalFloors_ = value;
    totalFloorsIsSet_ = true;
}

bool RealEstateCertificateResult::totalFloorsIsSet() const
{
    return totalFloorsIsSet_;
}

void RealEstateCertificateResult::unsettotalFloors()
{
    totalFloorsIsSet_ = false;
}

std::string RealEstateCertificateResult::getFloor() const
{
    return floor_;
}

void RealEstateCertificateResult::setFloor(const std::string& value)
{
    floor_ = value;
    floorIsSet_ = true;
}

bool RealEstateCertificateResult::floorIsSet() const
{
    return floorIsSet_;
}

void RealEstateCertificateResult::unsetfloor()
{
    floorIsSet_ = false;
}

std::string RealEstateCertificateResult::getYearBuilt() const
{
    return yearBuilt_;
}

void RealEstateCertificateResult::setYearBuilt(const std::string& value)
{
    yearBuilt_ = value;
    yearBuiltIsSet_ = true;
}

bool RealEstateCertificateResult::yearBuiltIsSet() const
{
    return yearBuiltIsSet_;
}

void RealEstateCertificateResult::unsetyearBuilt()
{
    yearBuiltIsSet_ = false;
}

std::string RealEstateCertificateResult::getStructure() const
{
    return structure_;
}

void RealEstateCertificateResult::setStructure(const std::string& value)
{
    structure_ = value;
    structureIsSet_ = true;
}

bool RealEstateCertificateResult::structureIsSet() const
{
    return structureIsSet_;
}

void RealEstateCertificateResult::unsetstructure()
{
    structureIsSet_ = false;
}

std::string RealEstateCertificateResult::getArea() const
{
    return area_;
}

void RealEstateCertificateResult::setArea(const std::string& value)
{
    area_ = value;
    areaIsSet_ = true;
}

bool RealEstateCertificateResult::areaIsSet() const
{
    return areaIsSet_;
}

void RealEstateCertificateResult::unsetarea()
{
    areaIsSet_ = false;
}

int32_t RealEstateCertificateResult::getRevenueStamps() const
{
    return revenueStamps_;
}

void RealEstateCertificateResult::setRevenueStamps(int32_t value)
{
    revenueStamps_ = value;
    revenueStampsIsSet_ = true;
}

bool RealEstateCertificateResult::revenueStampsIsSet() const
{
    return revenueStampsIsSet_;
}

void RealEstateCertificateResult::unsetrevenueStamps()
{
    revenueStampsIsSet_ = false;
}

std::string RealEstateCertificateResult::getOwnershipCertificateNo() const
{
    return ownershipCertificateNo_;
}

void RealEstateCertificateResult::setOwnershipCertificateNo(const std::string& value)
{
    ownershipCertificateNo_ = value;
    ownershipCertificateNoIsSet_ = true;
}

bool RealEstateCertificateResult::ownershipCertificateNoIsSet() const
{
    return ownershipCertificateNoIsSet_;
}

void RealEstateCertificateResult::unsetownershipCertificateNo()
{
    ownershipCertificateNoIsSet_ = false;
}

std::string RealEstateCertificateResult::getEstateHolder() const
{
    return estateHolder_;
}

void RealEstateCertificateResult::setEstateHolder(const std::string& value)
{
    estateHolder_ = value;
    estateHolderIsSet_ = true;
}

bool RealEstateCertificateResult::estateHolderIsSet() const
{
    return estateHolderIsSet_;
}

void RealEstateCertificateResult::unsetestateHolder()
{
    estateHolderIsSet_ = false;
}

std::string RealEstateCertificateResult::getObligee() const
{
    return obligee_;
}

void RealEstateCertificateResult::setObligee(const std::string& value)
{
    obligee_ = value;
    obligeeIsSet_ = true;
}

bool RealEstateCertificateResult::obligeeIsSet() const
{
    return obligeeIsSet_;
}

void RealEstateCertificateResult::unsetobligee()
{
    obligeeIsSet_ = false;
}

std::string RealEstateCertificateResult::getOwnership() const
{
    return ownership_;
}

void RealEstateCertificateResult::setOwnership(const std::string& value)
{
    ownership_ = value;
    ownershipIsSet_ = true;
}

bool RealEstateCertificateResult::ownershipIsSet() const
{
    return ownershipIsSet_;
}

void RealEstateCertificateResult::unsetownership()
{
    ownershipIsSet_ = false;
}

std::string RealEstateCertificateResult::getPropertyUnitNo() const
{
    return propertyUnitNo_;
}

void RealEstateCertificateResult::setPropertyUnitNo(const std::string& value)
{
    propertyUnitNo_ = value;
    propertyUnitNoIsSet_ = true;
}

bool RealEstateCertificateResult::propertyUnitNoIsSet() const
{
    return propertyUnitNoIsSet_;
}

void RealEstateCertificateResult::unsetpropertyUnitNo()
{
    propertyUnitNoIsSet_ = false;
}

std::string RealEstateCertificateResult::getRightType() const
{
    return rightType_;
}

void RealEstateCertificateResult::setRightType(const std::string& value)
{
    rightType_ = value;
    rightTypeIsSet_ = true;
}

bool RealEstateCertificateResult::rightTypeIsSet() const
{
    return rightTypeIsSet_;
}

void RealEstateCertificateResult::unsetrightType()
{
    rightTypeIsSet_ = false;
}

std::string RealEstateCertificateResult::getRightNature() const
{
    return rightNature_;
}

void RealEstateCertificateResult::setRightNature(const std::string& value)
{
    rightNature_ = value;
    rightNatureIsSet_ = true;
}

bool RealEstateCertificateResult::rightNatureIsSet() const
{
    return rightNatureIsSet_;
}

void RealEstateCertificateResult::unsetrightNature()
{
    rightNatureIsSet_ = false;
}

std::string RealEstateCertificateResult::getUsage() const
{
    return usage_;
}

void RealEstateCertificateResult::setUsage(const std::string& value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool RealEstateCertificateResult::usageIsSet() const
{
    return usageIsSet_;
}

void RealEstateCertificateResult::unsetusage()
{
    usageIsSet_ = false;
}

std::string RealEstateCertificateResult::getIntendedUsage() const
{
    return intendedUsage_;
}

void RealEstateCertificateResult::setIntendedUsage(const std::string& value)
{
    intendedUsage_ = value;
    intendedUsageIsSet_ = true;
}

bool RealEstateCertificateResult::intendedUsageIsSet() const
{
    return intendedUsageIsSet_;
}

void RealEstateCertificateResult::unsetintendedUsage()
{
    intendedUsageIsSet_ = false;
}

Object RealEstateCertificateResult::getConfidence() const
{
    return confidence_;
}

void RealEstateCertificateResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool RealEstateCertificateResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void RealEstateCertificateResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


