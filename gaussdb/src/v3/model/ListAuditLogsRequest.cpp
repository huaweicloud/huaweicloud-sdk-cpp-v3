

#include "huaweicloud/gaussdb/v3/model/ListAuditLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListAuditLogsRequest::ListAuditLogsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListAuditLogsRequest::~ListAuditLogsRequest() = default;

void ListAuditLogsRequest::validate()
{
}

web::json::value ListAuditLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAuditLogsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListAuditLogsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAuditLogsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAuditLogsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAuditLogsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAuditLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditLogsRequest::getStartTime() const
{
    return startTime_;
}

void ListAuditLogsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAuditLogsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAuditLogsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAuditLogsRequest::getEndTime() const
{
    return endTime_;
}

void ListAuditLogsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAuditLogsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAuditLogsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListAuditLogsRequest::getOffset() const
{
    return offset_;
}

void ListAuditLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAuditLogsRequest::getLimit() const
{
    return limit_;
}

void ListAuditLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


