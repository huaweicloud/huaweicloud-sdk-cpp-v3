

#include "huaweicloud/rds/v3/model/ListErrorLogsNewRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListErrorLogsNewRequest::ListErrorLogsNewRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
}

ListErrorLogsNewRequest::~ListErrorLogsNewRequest() = default;

void ListErrorLogsNewRequest::validate()
{
}

web::json::value ListErrorLogsNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }

    return val;
}

bool ListErrorLogsNewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}

std::string ListErrorLogsNewRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListErrorLogsNewRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListErrorLogsNewRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListErrorLogsNewRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListErrorLogsNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListErrorLogsNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListErrorLogsNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListErrorLogsNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListErrorLogsNewRequest::getStartDate() const
{
    return startDate_;
}

void ListErrorLogsNewRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListErrorLogsNewRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListErrorLogsNewRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListErrorLogsNewRequest::getEndDate() const
{
    return endDate_;
}

void ListErrorLogsNewRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListErrorLogsNewRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListErrorLogsNewRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

int64_t ListErrorLogsNewRequest::getOffset() const
{
    return offset_;
}

void ListErrorLogsNewRequest::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListErrorLogsNewRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListErrorLogsNewRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ListErrorLogsNewRequest::getLimit() const
{
    return limit_;
}

void ListErrorLogsNewRequest::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListErrorLogsNewRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListErrorLogsNewRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListErrorLogsNewRequest::getLevel() const
{
    return level_;
}

void ListErrorLogsNewRequest::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ListErrorLogsNewRequest::levelIsSet() const
{
    return levelIsSet_;
}

void ListErrorLogsNewRequest::unsetlevel()
{
    levelIsSet_ = false;
}

}
}
}
}
}


