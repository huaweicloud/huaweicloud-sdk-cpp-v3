

#include "huaweicloud/rds/v3/model/SlowlogForLtsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SlowlogForLtsRequest::SlowlogForLtsRequest()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
}

SlowlogForLtsRequest::~SlowlogForLtsRequest() = default;

void SlowlogForLtsRequest::validate()
{
}

web::json::value SlowlogForLtsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
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
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }

    return val;
}

bool SlowlogForLtsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    return ok;
}

std::string SlowlogForLtsRequest::getStartTime() const
{
    return startTime_;
}

void SlowlogForLtsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SlowlogForLtsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SlowlogForLtsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SlowlogForLtsRequest::getEndTime() const
{
    return endTime_;
}

void SlowlogForLtsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SlowlogForLtsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SlowlogForLtsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string SlowlogForLtsRequest::getType() const
{
    return type_;
}

void SlowlogForLtsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SlowlogForLtsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void SlowlogForLtsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string SlowlogForLtsRequest::getLineNum() const
{
    return lineNum_;
}

void SlowlogForLtsRequest::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool SlowlogForLtsRequest::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void SlowlogForLtsRequest::unsetlineNum()
{
    lineNumIsSet_ = false;
}

int32_t SlowlogForLtsRequest::getLimit() const
{
    return limit_;
}

void SlowlogForLtsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SlowlogForLtsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SlowlogForLtsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SlowlogForLtsRequest::getSearchType() const
{
    return searchType_;
}

void SlowlogForLtsRequest::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool SlowlogForLtsRequest::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void SlowlogForLtsRequest::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

std::string SlowlogForLtsRequest::getDatabase() const
{
    return database_;
}

void SlowlogForLtsRequest::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool SlowlogForLtsRequest::databaseIsSet() const
{
    return databaseIsSet_;
}

void SlowlogForLtsRequest::unsetdatabase()
{
    databaseIsSet_ = false;
}

}
}
}
}
}


