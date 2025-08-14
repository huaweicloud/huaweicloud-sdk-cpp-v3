

#include "huaweicloud/iotda/v5/model/AddTunnelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddTunnelRequest::AddTunnelRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddTunnelRequest::~AddTunnelRequest() = default;

void AddTunnelRequest::validate()
{
}

web::json::value AddTunnelRequest::toJson() const
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
bool AddTunnelRequest::fromJson(const web::json::value& val)
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
            AddTunnelDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddTunnelRequest::getInstanceId() const
{
    return instanceId_;
}

void AddTunnelRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddTunnelRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddTunnelRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddTunnelDto AddTunnelRequest::getBody() const
{
    return body_;
}

void AddTunnelRequest::setBody(const AddTunnelDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddTunnelRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddTunnelRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


