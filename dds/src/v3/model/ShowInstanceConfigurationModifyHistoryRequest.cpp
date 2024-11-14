

#include "huaweicloud/dds/v3/model/ShowInstanceConfigurationModifyHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowInstanceConfigurationModifyHistoryRequest::ShowInstanceConfigurationModifyHistoryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowInstanceConfigurationModifyHistoryRequest::~ShowInstanceConfigurationModifyHistoryRequest() = default;

void ShowInstanceConfigurationModifyHistoryRequest::validate()
{
}

web::json::value ShowInstanceConfigurationModifyHistoryRequest::toJson() const
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

    return val;
}
bool ShowInstanceConfigurationModifyHistoryRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowInstanceConfigurationModifyHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceConfigurationModifyHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceConfigurationModifyHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceConfigurationModifyHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ShowInstanceConfigurationModifyHistoryRequest::getOffset() const
{
    return offset_;
}

void ShowInstanceConfigurationModifyHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowInstanceConfigurationModifyHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowInstanceConfigurationModifyHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowInstanceConfigurationModifyHistoryRequest::getLimit() const
{
    return limit_;
}

void ShowInstanceConfigurationModifyHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowInstanceConfigurationModifyHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowInstanceConfigurationModifyHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


