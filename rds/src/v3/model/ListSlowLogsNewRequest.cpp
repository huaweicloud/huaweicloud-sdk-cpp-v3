

#include "huaweicloud/rds/v3/model/ListSlowLogsNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowLogsNewRequest::ListSlowLogsNewRequest()
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
    type_ = "";
    typeIsSet_ = false;
}

ListSlowLogsNewRequest::~ListSlowLogsNewRequest() = default;

void ListSlowLogsNewRequest::validate()
{
}

web::json::value ListSlowLogsNewRequest::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListSlowLogsNewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListSlowLogsNewRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSlowLogsNewRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSlowLogsNewRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSlowLogsNewRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSlowLogsNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSlowLogsNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSlowLogsNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSlowLogsNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSlowLogsNewRequest::getStartDate() const
{
    return startDate_;
}

void ListSlowLogsNewRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListSlowLogsNewRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListSlowLogsNewRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListSlowLogsNewRequest::getEndDate() const
{
    return endDate_;
}

void ListSlowLogsNewRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListSlowLogsNewRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListSlowLogsNewRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

int64_t ListSlowLogsNewRequest::getOffset() const
{
    return offset_;
}

void ListSlowLogsNewRequest::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSlowLogsNewRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSlowLogsNewRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ListSlowLogsNewRequest::getLimit() const
{
    return limit_;
}

void ListSlowLogsNewRequest::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSlowLogsNewRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSlowLogsNewRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSlowLogsNewRequest::getType() const
{
    return type_;
}

void ListSlowLogsNewRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListSlowLogsNewRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListSlowLogsNewRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


