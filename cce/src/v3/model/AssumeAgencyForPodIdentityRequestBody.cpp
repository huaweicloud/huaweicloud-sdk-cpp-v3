

#include "huaweicloud/cce/v3/model/AssumeAgencyForPodIdentityRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AssumeAgencyForPodIdentityRequestBody::AssumeAgencyForPodIdentityRequestBody()
{
    token_ = "";
    tokenIsSet_ = false;
}

AssumeAgencyForPodIdentityRequestBody::~AssumeAgencyForPodIdentityRequestBody() = default;

void AssumeAgencyForPodIdentityRequestBody::validate()
{
}

web::json::value AssumeAgencyForPodIdentityRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }

    return val;
}
bool AssumeAgencyForPodIdentityRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    return ok;
}


std::string AssumeAgencyForPodIdentityRequestBody::getToken() const
{
    return token_;
}

void AssumeAgencyForPodIdentityRequestBody::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool AssumeAgencyForPodIdentityRequestBody::tokenIsSet() const
{
    return tokenIsSet_;
}

void AssumeAgencyForPodIdentityRequestBody::unsettoken()
{
    tokenIsSet_ = false;
}

}
}
}
}
}


