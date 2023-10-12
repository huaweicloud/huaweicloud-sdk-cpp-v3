

#include "huaweicloud/dds/v3/model/UpdateEntityConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateEntityConfigurationRequest::UpdateEntityConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateEntityConfigurationRequest::~UpdateEntityConfigurationRequest() = default;

void UpdateEntityConfigurationRequest::validate()
{
}

web::json::value UpdateEntityConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateEntityConfigurationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateConfigurationParameterResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateEntityConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateEntityConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateEntityConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateEntityConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateConfigurationParameterResult UpdateEntityConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateEntityConfigurationRequest::setBody(const UpdateConfigurationParameterResult& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateEntityConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateEntityConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


