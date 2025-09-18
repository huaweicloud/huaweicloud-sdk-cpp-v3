

#include "huaweicloud/ga/v1/model/AssociateListenerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




AssociateListenerRequest::AssociateListenerRequest()
{
    ipGroupId_ = "";
    ipGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateListenerRequest::~AssociateListenerRequest() = default;

void AssociateListenerRequest::validate()
{
}

web::json::value AssociateListenerRequest::toJson() const
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
bool AssociateListenerRequest::fromJson(const web::json::value& val)
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
            AssociateListenerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateListenerRequest::getIpGroupId() const
{
    return ipGroupId_;
}

void AssociateListenerRequest::setIpGroupId(const std::string& value)
{
    ipGroupId_ = value;
    ipGroupIdIsSet_ = true;
}

bool AssociateListenerRequest::ipGroupIdIsSet() const
{
    return ipGroupIdIsSet_;
}

void AssociateListenerRequest::unsetipGroupId()
{
    ipGroupIdIsSet_ = false;
}

AssociateListenerRequestBody AssociateListenerRequest::getBody() const
{
    return body_;
}

void AssociateListenerRequest::setBody(const AssociateListenerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateListenerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateListenerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


