

#include "huaweicloud/eip/v3/model/UpdatePublicipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdatePublicipRequest::UpdatePublicipRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePublicipRequest::~UpdatePublicipRequest() = default;

void UpdatePublicipRequest::validate()
{
}

web::json::value UpdatePublicipRequest::toJson() const
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
bool UpdatePublicipRequest::fromJson(const web::json::value& val)
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
            UpdatePublicipsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePublicipRequest::getPublicipId() const
{
    return publicipId_;
}

void UpdatePublicipRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool UpdatePublicipRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void UpdatePublicipRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

UpdatePublicipsRequestBody UpdatePublicipRequest::getBody() const
{
    return body_;
}

void UpdatePublicipRequest::setBody(const UpdatePublicipsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePublicipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePublicipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


