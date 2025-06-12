

#include "huaweicloud/metastudio/v1/model/ExternalVoiceAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExternalVoiceAssetMeta::ExternalVoiceAssetMeta()
{
    provider_ = "";
    providerIsSet_ = false;
}

ExternalVoiceAssetMeta::~ExternalVoiceAssetMeta() = default;

void ExternalVoiceAssetMeta::validate()
{
}

web::json::value ExternalVoiceAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(providerIsSet_) {
        val[utility::conversions::to_string_t("provider")] = ModelBase::toJson(provider_);
    }

    return val;
}
bool ExternalVoiceAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvider(refVal);
        }
    }
    return ok;
}


std::string ExternalVoiceAssetMeta::getProvider() const
{
    return provider_;
}

void ExternalVoiceAssetMeta::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool ExternalVoiceAssetMeta::providerIsSet() const
{
    return providerIsSet_;
}

void ExternalVoiceAssetMeta::unsetprovider()
{
    providerIsSet_ = false;
}

}
}
}
}
}


