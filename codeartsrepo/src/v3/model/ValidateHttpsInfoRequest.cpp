

#include "huaweicloud/codeartsrepo/v3/model/ValidateHttpsInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ValidateHttpsInfoRequest::ValidateHttpsInfoRequest()
{
    iamUserUuid_ = "";
    iamUserUuidIsSet_ = false;
    bodyIsSet_ = false;
}

ValidateHttpsInfoRequest::~ValidateHttpsInfoRequest() = default;

void ValidateHttpsInfoRequest::validate()
{
}

web::json::value ValidateHttpsInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iamUserUuidIsSet_) {
        val[utility::conversions::to_string_t("iam_user_uuid")] = ModelBase::toJson(iamUserUuid_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ValidateHttpsInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iam_user_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iam_user_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamUserUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PasswordRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ValidateHttpsInfoRequest::getIamUserUuid() const
{
    return iamUserUuid_;
}

void ValidateHttpsInfoRequest::setIamUserUuid(const std::string& value)
{
    iamUserUuid_ = value;
    iamUserUuidIsSet_ = true;
}

bool ValidateHttpsInfoRequest::iamUserUuidIsSet() const
{
    return iamUserUuidIsSet_;
}

void ValidateHttpsInfoRequest::unsetiamUserUuid()
{
    iamUserUuidIsSet_ = false;
}

PasswordRequest ValidateHttpsInfoRequest::getBody() const
{
    return body_;
}

void ValidateHttpsInfoRequest::setBody(const PasswordRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ValidateHttpsInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ValidateHttpsInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


