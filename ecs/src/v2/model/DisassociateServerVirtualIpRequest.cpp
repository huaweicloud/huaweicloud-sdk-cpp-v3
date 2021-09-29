

#include "huaweicloud/ecs/v2/model/DisassociateServerVirtualIpRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DisassociateServerVirtualIpRequest::DisassociateServerVirtualIpRequest()
{
    nicId_ = "";
    nicIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateServerVirtualIpRequest::~DisassociateServerVirtualIpRequest() = default;

void DisassociateServerVirtualIpRequest::validate()
{
}

web::json::value DisassociateServerVirtualIpRequest::toJson() const
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

bool DisassociateServerVirtualIpRequest::fromJson(const web::json::value& val)
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
            DisassociateServerVirtualIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisassociateServerVirtualIpRequest::getNicId() const
{
    return nicId_;
}

void DisassociateServerVirtualIpRequest::setNicId(const std::string& value)
{
    nicId_ = value;
    nicIdIsSet_ = true;
}

bool DisassociateServerVirtualIpRequest::nicIdIsSet() const
{
    return nicIdIsSet_;
}

void DisassociateServerVirtualIpRequest::unsetnicId()
{
    nicIdIsSet_ = false;
}

DisassociateServerVirtualIpRequestBody DisassociateServerVirtualIpRequest::getBody() const
{
    return body_;
}

void DisassociateServerVirtualIpRequest::setBody(const DisassociateServerVirtualIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateServerVirtualIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateServerVirtualIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


