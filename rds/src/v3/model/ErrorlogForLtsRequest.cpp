

#include "huaweicloud/rds/v3/model/ErrorlogForLtsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ErrorlogForLtsRequest::ErrorlogForLtsRequest()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
}

ErrorlogForLtsRequest::~ErrorlogForLtsRequest() = default;

void ErrorlogForLtsRequest::validate()
{
}

web::json::value ErrorlogForLtsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }

    return val;
}
bool ErrorlogForLtsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchType(refVal);
        }
    }
    return ok;
}


std::string ErrorlogForLtsRequest::getStartTime() const
{
    return startTime_;
}

void ErrorlogForLtsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ErrorlogForLtsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ErrorlogForLtsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ErrorlogForLtsRequest::getEndTime() const
{
    return endTime_;
}

void ErrorlogForLtsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ErrorlogForLtsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ErrorlogForLtsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ErrorlogForLtsRequest::getLevel() const
{
    return level_;
}

void ErrorlogForLtsRequest::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ErrorlogForLtsRequest::levelIsSet() const
{
    return levelIsSet_;
}

void ErrorlogForLtsRequest::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ErrorlogForLtsRequest::getLineNum() const
{
    return lineNum_;
}

void ErrorlogForLtsRequest::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ErrorlogForLtsRequest::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ErrorlogForLtsRequest::unsetlineNum()
{
    lineNumIsSet_ = false;
}

int32_t ErrorlogForLtsRequest::getLimit() const
{
    return limit_;
}

void ErrorlogForLtsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ErrorlogForLtsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ErrorlogForLtsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ErrorlogForLtsRequest::getSearchType() const
{
    return searchType_;
}

void ErrorlogForLtsRequest::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool ErrorlogForLtsRequest::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void ErrorlogForLtsRequest::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

}
}
}
}
}


