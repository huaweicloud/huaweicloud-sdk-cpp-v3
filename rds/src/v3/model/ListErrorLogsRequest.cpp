

#include "huaweicloud/rds/v3/model/ListErrorLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListErrorLogsRequest::ListErrorLogsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
}

ListErrorLogsRequest::~ListErrorLogsRequest() = default;

void ListErrorLogsRequest::validate()
{
}

web::json::value ListErrorLogsRequest::toJson() const
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
bool ListErrorLogsRequest::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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


std::string ListErrorLogsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListErrorLogsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListErrorLogsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListErrorLogsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListErrorLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListErrorLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListErrorLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListErrorLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListErrorLogsRequest::getStartDate() const
{
    return startDate_;
}

void ListErrorLogsRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListErrorLogsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListErrorLogsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListErrorLogsRequest::getEndDate() const
{
    return endDate_;
}

void ListErrorLogsRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListErrorLogsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListErrorLogsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

int32_t ListErrorLogsRequest::getOffset() const
{
    return offset_;
}

void ListErrorLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListErrorLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListErrorLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListErrorLogsRequest::getLimit() const
{
    return limit_;
}

void ListErrorLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListErrorLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListErrorLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListErrorLogsRequest::getLevel() const
{
    return level_;
}

void ListErrorLogsRequest::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ListErrorLogsRequest::levelIsSet() const
{
    return levelIsSet_;
}

void ListErrorLogsRequest::unsetlevel()
{
    levelIsSet_ = false;
}

}
}
}
}
}


