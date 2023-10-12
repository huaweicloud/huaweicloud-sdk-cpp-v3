

#include "huaweicloud/dds/v3/model/AttachInternalIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AttachInternalIpRequest::AttachInternalIpRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachInternalIpRequest::~AttachInternalIpRequest() = default;

void AttachInternalIpRequest::validate()
{
}

web::json::value AttachInternalIpRequest::toJson() const
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
bool AttachInternalIpRequest::fromJson(const web::json::value& val)
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
            AttachInternalIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachInternalIpRequest::getInstanceId() const
{
    return instanceId_;
}

void AttachInternalIpRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AttachInternalIpRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AttachInternalIpRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AttachInternalIpRequestBody AttachInternalIpRequest::getBody() const
{
    return body_;
}

void AttachInternalIpRequest::setBody(const AttachInternalIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachInternalIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachInternalIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


