

#include "huaweicloud/metastudio/v1/model/TtsCallBackConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtsCallBackConfig::TtsCallBackConfig()
{
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
}

TtsCallBackConfig::~TtsCallBackConfig() = default;

void TtsCallBackConfig::validate()
{
}

web::json::value TtsCallBackConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }

    return val;
}
bool TtsCallBackConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    return ok;
}


std::string TtsCallBackConfig::getCallbackUrl() const
{
    return callbackUrl_;
}

void TtsCallBackConfig::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool TtsCallBackConfig::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void TtsCallBackConfig::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

}
}
}
}
}


