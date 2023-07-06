

#include "huaweicloud/eip/v3/model/UpdateDisassociatePublicipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdateDisassociatePublicipRequest::UpdateDisassociatePublicipRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDisassociatePublicipRequest::~UpdateDisassociatePublicipRequest() = default;

void UpdateDisassociatePublicipRequest::validate()
{
}

web::json::value UpdateDisassociatePublicipRequest::toJson() const
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

bool UpdateDisassociatePublicipRequest::fromJson(const web::json::value& val)
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
            DisassociatePublicipsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateDisassociatePublicipRequest::getPublicipId() const
{
    return publicipId_;
}

void UpdateDisassociatePublicipRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool UpdateDisassociatePublicipRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void UpdateDisassociatePublicipRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

DisassociatePublicipsRequestBody UpdateDisassociatePublicipRequest::getBody() const
{
    return body_;
}

void UpdateDisassociatePublicipRequest::setBody(const DisassociatePublicipsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDisassociatePublicipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDisassociatePublicipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


