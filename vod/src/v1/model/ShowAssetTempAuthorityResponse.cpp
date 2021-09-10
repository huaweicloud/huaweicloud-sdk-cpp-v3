

#include "huaweicloud/vod/v1/model/ShowAssetTempAuthorityResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowAssetTempAuthorityResponse::ShowAssetTempAuthorityResponse()
{
    signStr_ = "";
    signStrIsSet_ = false;
}

ShowAssetTempAuthorityResponse::~ShowAssetTempAuthorityResponse() = default;

void ShowAssetTempAuthorityResponse::validate()
{
}

web::json::value ShowAssetTempAuthorityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(signStrIsSet_) {
        val[utility::conversions::to_string_t("sign_str")] = ModelBase::toJson(signStr_);
    }

    return val;
}

bool ShowAssetTempAuthorityResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sign_str"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_str"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignStr(refVal);
        }
    }
    return ok;
}


std::string ShowAssetTempAuthorityResponse::getSignStr() const
{
    return signStr_;
}

void ShowAssetTempAuthorityResponse::setSignStr(const std::string& value)
{
    signStr_ = value;
    signStrIsSet_ = true;
}

bool ShowAssetTempAuthorityResponse::signStrIsSet() const
{
    return signStrIsSet_;
}

void ShowAssetTempAuthorityResponse::unsetsignStr()
{
    signStrIsSet_ = false;
}

}
}
}
}
}


