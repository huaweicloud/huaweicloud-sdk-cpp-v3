

#include "huaweicloud/iotda/v5/model/TagDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TagDeviceRequest::TagDeviceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

TagDeviceRequest::~TagDeviceRequest() = default;

void TagDeviceRequest::validate()
{
}

web::json::value TagDeviceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool TagDeviceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
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
            BindTagsDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string TagDeviceRequest::getInstanceId() const
{
    return instanceId_;
}

void TagDeviceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool TagDeviceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void TagDeviceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BindTagsDTO TagDeviceRequest::getBody() const
{
    return body_;
}

void TagDeviceRequest::setBody(const BindTagsDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TagDeviceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void TagDeviceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


