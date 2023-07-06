

#include "huaweicloud/eip/v3/model/AssociatePublicipsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




AssociatePublicipsRequest::AssociatePublicipsRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociatePublicipsRequest::~AssociatePublicipsRequest() = default;

void AssociatePublicipsRequest::validate()
{
}

web::json::value AssociatePublicipsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool AssociatePublicipsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AssociatePublicipsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AssociatePublicipsRequest::getPublicipId() const
{
    return publicipId_;
}

void AssociatePublicipsRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool AssociatePublicipsRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void AssociatePublicipsRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

AssociatePublicipsRequestBody AssociatePublicipsRequest::getBody() const
{
    return body_;
}

void AssociatePublicipsRequest::setBody(const AssociatePublicipsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociatePublicipsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociatePublicipsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


