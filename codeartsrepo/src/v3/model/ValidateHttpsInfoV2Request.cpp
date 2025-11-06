

#include "huaweicloud/codeartsrepo/v3/model/ValidateHttpsInfoV2Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ValidateHttpsInfoV2Request::ValidateHttpsInfoV2Request()
{
    iamUserUuid_ = "";
    iamUserUuidIsSet_ = false;
    bodyIsSet_ = false;
}

ValidateHttpsInfoV2Request::~ValidateHttpsInfoV2Request() = default;

void ValidateHttpsInfoV2Request::validate()
{
}

web::json::value ValidateHttpsInfoV2Request::toJson() const
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
bool ValidateHttpsInfoV2Request::fromJson(const web::json::value& val)
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


std::string ValidateHttpsInfoV2Request::getIamUserUuid() const
{
    return iamUserUuid_;
}

void ValidateHttpsInfoV2Request::setIamUserUuid(const std::string& value)
{
    iamUserUuid_ = value;
    iamUserUuidIsSet_ = true;
}

bool ValidateHttpsInfoV2Request::iamUserUuidIsSet() const
{
    return iamUserUuidIsSet_;
}

void ValidateHttpsInfoV2Request::unsetiamUserUuid()
{
    iamUserUuidIsSet_ = false;
}

PasswordRequest ValidateHttpsInfoV2Request::getBody() const
{
    return body_;
}

void ValidateHttpsInfoV2Request::setBody(const PasswordRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ValidateHttpsInfoV2Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void ValidateHttpsInfoV2Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


