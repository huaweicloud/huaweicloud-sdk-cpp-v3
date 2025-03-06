

#include "huaweicloud/gaussdbforopengauss/v3/model/ListScheduleTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListScheduleTaskRequest::ListScheduleTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListScheduleTaskRequest::~ListScheduleTaskRequest() = default;

void ListScheduleTaskRequest::validate()
{
}

web::json::value ListScheduleTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
bool ListScheduleTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string ListScheduleTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListScheduleTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListScheduleTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListScheduleTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListScheduleTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void ListScheduleTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListScheduleTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListScheduleTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListScheduleTaskRequest::getStatus() const
{
    return status_;
}

void ListScheduleTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListScheduleTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListScheduleTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListScheduleTaskRequest::getName() const
{
    return name_;
}

void ListScheduleTaskRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListScheduleTaskRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListScheduleTaskRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListScheduleTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListScheduleTaskRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListScheduleTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListScheduleTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListScheduleTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListScheduleTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListScheduleTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListScheduleTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListScheduleTaskRequest::getOffset() const
{
    return offset_;
}

void ListScheduleTaskRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListScheduleTaskRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListScheduleTaskRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListScheduleTaskRequest::getLimit() const
{
    return limit_;
}

void ListScheduleTaskRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScheduleTaskRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListScheduleTaskRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


