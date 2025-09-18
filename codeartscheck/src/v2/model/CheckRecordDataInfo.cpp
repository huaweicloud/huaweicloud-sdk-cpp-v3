

#include "huaweicloud/codeartscheck/v2/model/CheckRecordDataInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CheckRecordDataInfo::CheckRecordDataInfo()
{
    checkTime_ = "";
    checkTimeIsSet_ = false;
    checkEndTime_ = "";
    checkEndTimeIsSet_ = false;
    issueCountsIsSet_ = false;
}

CheckRecordDataInfo::~CheckRecordDataInfo() = default;

void CheckRecordDataInfo::validate()
{
}

web::json::value CheckRecordDataInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkTimeIsSet_) {
        val[utility::conversions::to_string_t("check_time")] = ModelBase::toJson(checkTime_);
    }
    if(checkEndTimeIsSet_) {
        val[utility::conversions::to_string_t("check_end_time")] = ModelBase::toJson(checkEndTime_);
    }
    if(issueCountsIsSet_) {
        val[utility::conversions::to_string_t("issue_counts")] = ModelBase::toJson(issueCounts_);
    }

    return val;
}
bool CheckRecordDataInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("check_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_counts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_counts"));
        if(!fieldValue.is_null())
        {
            CheckRecordIssueCountsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCounts(refVal);
        }
    }
    return ok;
}


std::string CheckRecordDataInfo::getCheckTime() const
{
    return checkTime_;
}

void CheckRecordDataInfo::setCheckTime(const std::string& value)
{
    checkTime_ = value;
    checkTimeIsSet_ = true;
}

bool CheckRecordDataInfo::checkTimeIsSet() const
{
    return checkTimeIsSet_;
}

void CheckRecordDataInfo::unsetcheckTime()
{
    checkTimeIsSet_ = false;
}

std::string CheckRecordDataInfo::getCheckEndTime() const
{
    return checkEndTime_;
}

void CheckRecordDataInfo::setCheckEndTime(const std::string& value)
{
    checkEndTime_ = value;
    checkEndTimeIsSet_ = true;
}

bool CheckRecordDataInfo::checkEndTimeIsSet() const
{
    return checkEndTimeIsSet_;
}

void CheckRecordDataInfo::unsetcheckEndTime()
{
    checkEndTimeIsSet_ = false;
}

CheckRecordIssueCountsInfo CheckRecordDataInfo::getIssueCounts() const
{
    return issueCounts_;
}

void CheckRecordDataInfo::setIssueCounts(const CheckRecordIssueCountsInfo& value)
{
    issueCounts_ = value;
    issueCountsIsSet_ = true;
}

bool CheckRecordDataInfo::issueCountsIsSet() const
{
    return issueCountsIsSet_;
}

void CheckRecordDataInfo::unsetissueCounts()
{
    issueCountsIsSet_ = false;
}

}
}
}
}
}


