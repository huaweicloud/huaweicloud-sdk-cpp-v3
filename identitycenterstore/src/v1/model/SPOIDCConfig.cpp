

#include "huaweicloud/identitycenterstore/v1/model/SPOIDCConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




SPOIDCConfig::SPOIDCConfig()
{
    redirectUrl_ = "";
    redirectUrlIsSet_ = false;
}

SPOIDCConfig::~SPOIDCConfig() = default;

void SPOIDCConfig::validate()
{
}

web::json::value SPOIDCConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(redirectUrlIsSet_) {
        val[utility::conversions::to_string_t("redirect_url")] = ModelBase::toJson(redirectUrl_);
    }

    return val;
}
bool SPOIDCConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("redirect_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redirect_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedirectUrl(refVal);
        }
    }
    return ok;
}


std::string SPOIDCConfig::getRedirectUrl() const
{
    return redirectUrl_;
}

void SPOIDCConfig::setRedirectUrl(const std::string& value)
{
    redirectUrl_ = value;
    redirectUrlIsSet_ = true;
}

bool SPOIDCConfig::redirectUrlIsSet() const
{
    return redirectUrlIsSet_;
}

void SPOIDCConfig::unsetredirectUrl()
{
    redirectUrlIsSet_ = false;
}

}
}
}
}
}


