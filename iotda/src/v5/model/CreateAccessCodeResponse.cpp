

#include "huaweicloud/iotda/v5/model/CreateAccessCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateAccessCodeResponse::CreateAccessCodeResponse()
{
    accessKey_ = "";
    accessKeyIsSet_ = false;
    accessCode_ = "";
    accessCodeIsSet_ = false;
}

CreateAccessCodeResponse::~CreateAccessCodeResponse() = default;

void CreateAccessCodeResponse::validate()
{
}

web::json::value CreateAccessCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIsSet_) {
        val[utility::conversions::to_string_t("access_key")] = ModelBase::toJson(accessKey_);
    }
    if(accessCodeIsSet_) {
        val[utility::conversions::to_string_t("access_code")] = ModelBase::toJson(accessCode_);
    }

    return val;
}
bool CreateAccessCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessCode(refVal);
        }
    }
    return ok;
}


std::string CreateAccessCodeResponse::getAccessKey() const
{
    return accessKey_;
}

void CreateAccessCodeResponse::setAccessKey(const std::string& value)
{
    accessKey_ = value;
    accessKeyIsSet_ = true;
}

bool CreateAccessCodeResponse::accessKeyIsSet() const
{
    return accessKeyIsSet_;
}

void CreateAccessCodeResponse::unsetaccessKey()
{
    accessKeyIsSet_ = false;
}

std::string CreateAccessCodeResponse::getAccessCode() const
{
    return accessCode_;
}

void CreateAccessCodeResponse::setAccessCode(const std::string& value)
{
    accessCode_ = value;
    accessCodeIsSet_ = true;
}

bool CreateAccessCodeResponse::accessCodeIsSet() const
{
    return accessCodeIsSet_;
}

void CreateAccessCodeResponse::unsetaccessCode()
{
    accessCodeIsSet_ = false;
}

}
}
}
}
}


