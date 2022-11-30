

#include "huaweicloud/eip/v3/model/UpdateAssociatePublicipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdateAssociatePublicipRequest::UpdateAssociatePublicipRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAssociatePublicipRequest::~UpdateAssociatePublicipRequest() = default;

void UpdateAssociatePublicipRequest::validate()
{
}

web::json::value UpdateAssociatePublicipRequest::toJson() const
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

bool UpdateAssociatePublicipRequest::fromJson(const web::json::value& val)
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


std::string UpdateAssociatePublicipRequest::getPublicipId() const
{
    return publicipId_;
}

void UpdateAssociatePublicipRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool UpdateAssociatePublicipRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void UpdateAssociatePublicipRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

AssociatePublicipsRequestBody UpdateAssociatePublicipRequest::getBody() const
{
    return body_;
}

void UpdateAssociatePublicipRequest::setBody(const AssociatePublicipsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAssociatePublicipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAssociatePublicipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


