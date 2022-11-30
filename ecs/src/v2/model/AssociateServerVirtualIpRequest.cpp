

#include "huaweicloud/ecs/v2/model/AssociateServerVirtualIpRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AssociateServerVirtualIpRequest::AssociateServerVirtualIpRequest()
{
    nicId_ = "";
    nicIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateServerVirtualIpRequest::~AssociateServerVirtualIpRequest() = default;

void AssociateServerVirtualIpRequest::validate()
{
}

web::json::value AssociateServerVirtualIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nicIdIsSet_) {
        val[utility::conversions::to_string_t("nic_id")] = ModelBase::toJson(nicId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool AssociateServerVirtualIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AssociateServerVirtualIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateServerVirtualIpRequest::getNicId() const
{
    return nicId_;
}

void AssociateServerVirtualIpRequest::setNicId(const std::string& value)
{
    nicId_ = value;
    nicIdIsSet_ = true;
}

bool AssociateServerVirtualIpRequest::nicIdIsSet() const
{
    return nicIdIsSet_;
}

void AssociateServerVirtualIpRequest::unsetnicId()
{
    nicIdIsSet_ = false;
}

AssociateServerVirtualIpRequestBody AssociateServerVirtualIpRequest::getBody() const
{
    return body_;
}

void AssociateServerVirtualIpRequest::setBody(const AssociateServerVirtualIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateServerVirtualIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateServerVirtualIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


