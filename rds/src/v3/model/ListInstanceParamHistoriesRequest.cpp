

#include "huaweicloud/rds/v3/model/ListInstanceParamHistoriesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstanceParamHistoriesRequest::ListInstanceParamHistoriesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    paramName_ = "";
    paramNameIsSet_ = false;
}

ListInstanceParamHistoriesRequest::~ListInstanceParamHistoriesRequest() = default;

void ListInstanceParamHistoriesRequest::validate()
{
}

web::json::value ListInstanceParamHistoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(paramNameIsSet_) {
        val[utility::conversions::to_string_t("param_name")] = ModelBase::toJson(paramName_);
    }

    return val;
}

bool ListInstanceParamHistoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("param_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamName(refVal);
        }
    }
    return ok;
}

std::string ListInstanceParamHistoriesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceParamHistoriesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceParamHistoriesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceParamHistoriesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListInstanceParamHistoriesRequest::getOffset() const
{
    return offset_;
}

void ListInstanceParamHistoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceParamHistoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceParamHistoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstanceParamHistoriesRequest::getLimit() const
{
    return limit_;
}

void ListInstanceParamHistoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceParamHistoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceParamHistoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstanceParamHistoriesRequest::getStartTime() const
{
    return startTime_;
}

void ListInstanceParamHistoriesRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListInstanceParamHistoriesRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListInstanceParamHistoriesRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListInstanceParamHistoriesRequest::getEndTime() const
{
    return endTime_;
}

void ListInstanceParamHistoriesRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListInstanceParamHistoriesRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListInstanceParamHistoriesRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListInstanceParamHistoriesRequest::getParamName() const
{
    return paramName_;
}

void ListInstanceParamHistoriesRequest::setParamName(const std::string& value)
{
    paramName_ = value;
    paramNameIsSet_ = true;
}

bool ListInstanceParamHistoriesRequest::paramNameIsSet() const
{
    return paramNameIsSet_;
}

void ListInstanceParamHistoriesRequest::unsetparamName()
{
    paramNameIsSet_ = false;
}

}
}
}
}
}


