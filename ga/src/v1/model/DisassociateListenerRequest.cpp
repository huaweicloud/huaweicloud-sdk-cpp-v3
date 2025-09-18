

#include "huaweicloud/ga/v1/model/DisassociateListenerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




DisassociateListenerRequest::DisassociateListenerRequest()
{
    ipGroupId_ = "";
    ipGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateListenerRequest::~DisassociateListenerRequest() = default;

void DisassociateListenerRequest::validate()
{
}

web::json::value DisassociateListenerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipGroupIdIsSet_) {
        val[utility::conversions::to_string_t("ip_group_id")] = ModelBase::toJson(ipGroupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DisassociateListenerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DisassociateListenerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisassociateListenerRequest::getIpGroupId() const
{
    return ipGroupId_;
}

void DisassociateListenerRequest::setIpGroupId(const std::string& value)
{
    ipGroupId_ = value;
    ipGroupIdIsSet_ = true;
}

bool DisassociateListenerRequest::ipGroupIdIsSet() const
{
    return ipGroupIdIsSet_;
}

void DisassociateListenerRequest::unsetipGroupId()
{
    ipGroupIdIsSet_ = false;
}

DisassociateListenerRequestBody DisassociateListenerRequest::getBody() const
{
    return body_;
}

void DisassociateListenerRequest::setBody(const DisassociateListenerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateListenerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateListenerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


