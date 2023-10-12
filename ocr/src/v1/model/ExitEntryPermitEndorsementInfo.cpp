

#include "huaweicloud/ocr/v1/model/ExitEntryPermitEndorsementInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ExitEntryPermitEndorsementInfo::ExitEntryPermitEndorsementInfo()
{
    endorsementType_ = "";
    endorsementTypeIsSet_ = false;
    validRoundTrips_ = "";
    validRoundTripsIsSet_ = false;
    endorsementValidPeriod_ = "";
    endorsementValidPeriodIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    issueInfo_ = "";
    issueInfoIsSet_ = false;
}

ExitEntryPermitEndorsementInfo::~ExitEntryPermitEndorsementInfo() = default;

void ExitEntryPermitEndorsementInfo::validate()
{
}

web::json::value ExitEntryPermitEndorsementInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endorsementTypeIsSet_) {
        val[utility::conversions::to_string_t("endorsement_type")] = ModelBase::toJson(endorsementType_);
    }
    if(validRoundTripsIsSet_) {
        val[utility::conversions::to_string_t("valid_round_trips")] = ModelBase::toJson(validRoundTrips_);
    }
    if(endorsementValidPeriodIsSet_) {
        val[utility::conversions::to_string_t("endorsement_valid_period")] = ModelBase::toJson(endorsementValidPeriod_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(issueInfoIsSet_) {
        val[utility::conversions::to_string_t("issue_info")] = ModelBase::toJson(issueInfo_);
    }

    return val;
}
bool ExitEntryPermitEndorsementInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endorsement_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endorsement_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndorsementType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_round_trips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_round_trips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidRoundTrips(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endorsement_valid_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endorsement_valid_period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndorsementValidPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueInfo(refVal);
        }
    }
    return ok;
}


std::string ExitEntryPermitEndorsementInfo::getEndorsementType() const
{
    return endorsementType_;
}

void ExitEntryPermitEndorsementInfo::setEndorsementType(const std::string& value)
{
    endorsementType_ = value;
    endorsementTypeIsSet_ = true;
}

bool ExitEntryPermitEndorsementInfo::endorsementTypeIsSet() const
{
    return endorsementTypeIsSet_;
}

void ExitEntryPermitEndorsementInfo::unsetendorsementType()
{
    endorsementTypeIsSet_ = false;
}

std::string ExitEntryPermitEndorsementInfo::getValidRoundTrips() const
{
    return validRoundTrips_;
}

void ExitEntryPermitEndorsementInfo::setValidRoundTrips(const std::string& value)
{
    validRoundTrips_ = value;
    validRoundTripsIsSet_ = true;
}

bool ExitEntryPermitEndorsementInfo::validRoundTripsIsSet() const
{
    return validRoundTripsIsSet_;
}

void ExitEntryPermitEndorsementInfo::unsetvalidRoundTrips()
{
    validRoundTripsIsSet_ = false;
}

std::string ExitEntryPermitEndorsementInfo::getEndorsementValidPeriod() const
{
    return endorsementValidPeriod_;
}

void ExitEntryPermitEndorsementInfo::setEndorsementValidPeriod(const std::string& value)
{
    endorsementValidPeriod_ = value;
    endorsementValidPeriodIsSet_ = true;
}

bool ExitEntryPermitEndorsementInfo::endorsementValidPeriodIsSet() const
{
    return endorsementValidPeriodIsSet_;
}

void ExitEntryPermitEndorsementInfo::unsetendorsementValidPeriod()
{
    endorsementValidPeriodIsSet_ = false;
}

std::string ExitEntryPermitEndorsementInfo::getRemark() const
{
    return remark_;
}

void ExitEntryPermitEndorsementInfo::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool ExitEntryPermitEndorsementInfo::remarkIsSet() const
{
    return remarkIsSet_;
}

void ExitEntryPermitEndorsementInfo::unsetremark()
{
    remarkIsSet_ = false;
}

std::string ExitEntryPermitEndorsementInfo::getIssueInfo() const
{
    return issueInfo_;
}

void ExitEntryPermitEndorsementInfo::setIssueInfo(const std::string& value)
{
    issueInfo_ = value;
    issueInfoIsSet_ = true;
}

bool ExitEntryPermitEndorsementInfo::issueInfoIsSet() const
{
    return issueInfoIsSet_;
}

void ExitEntryPermitEndorsementInfo::unsetissueInfo()
{
    issueInfoIsSet_ = false;
}

}
}
}
}
}


