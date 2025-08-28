

#include "huaweicloud/metastudio/v1/model/TtscExternalVoiceAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtscExternalVoiceAssetMeta::TtscExternalVoiceAssetMeta()
{
    provider_ = "";
    providerIsSet_ = false;
    mobvoiVoiceMetaIsSet_ = false;
    audioxVoiceMetaIsSet_ = false;
}

TtscExternalVoiceAssetMeta::~TtscExternalVoiceAssetMeta() = default;

void TtscExternalVoiceAssetMeta::validate()
{
}

web::json::value TtscExternalVoiceAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(providerIsSet_) {
        val[utility::conversions::to_string_t("provider")] = ModelBase::toJson(provider_);
    }
    if(mobvoiVoiceMetaIsSet_) {
        val[utility::conversions::to_string_t("mobvoi_voice_meta")] = ModelBase::toJson(mobvoiVoiceMeta_);
    }
    if(audioxVoiceMetaIsSet_) {
        val[utility::conversions::to_string_t("audiox_voice_meta")] = ModelBase::toJson(audioxVoiceMeta_);
    }

    return val;
}
bool TtscExternalVoiceAssetMeta::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mobvoi_voice_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mobvoi_voice_meta"));
        if(!fieldValue.is_null())
        {
            TtscMobvoiVoiceAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMobvoiVoiceMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audiox_voice_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audiox_voice_meta"));
        if(!fieldValue.is_null())
        {
            TtscAudioxVoiceAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioxVoiceMeta(refVal);
        }
    }
    return ok;
}


std::string TtscExternalVoiceAssetMeta::getProvider() const
{
    return provider_;
}

void TtscExternalVoiceAssetMeta::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool TtscExternalVoiceAssetMeta::providerIsSet() const
{
    return providerIsSet_;
}

void TtscExternalVoiceAssetMeta::unsetprovider()
{
    providerIsSet_ = false;
}

TtscMobvoiVoiceAssetMeta TtscExternalVoiceAssetMeta::getMobvoiVoiceMeta() const
{
    return mobvoiVoiceMeta_;
}

void TtscExternalVoiceAssetMeta::setMobvoiVoiceMeta(const TtscMobvoiVoiceAssetMeta& value)
{
    mobvoiVoiceMeta_ = value;
    mobvoiVoiceMetaIsSet_ = true;
}

bool TtscExternalVoiceAssetMeta::mobvoiVoiceMetaIsSet() const
{
    return mobvoiVoiceMetaIsSet_;
}

void TtscExternalVoiceAssetMeta::unsetmobvoiVoiceMeta()
{
    mobvoiVoiceMetaIsSet_ = false;
}

TtscAudioxVoiceAssetMeta TtscExternalVoiceAssetMeta::getAudioxVoiceMeta() const
{
    return audioxVoiceMeta_;
}

void TtscExternalVoiceAssetMeta::setAudioxVoiceMeta(const TtscAudioxVoiceAssetMeta& value)
{
    audioxVoiceMeta_ = value;
    audioxVoiceMetaIsSet_ = true;
}

bool TtscExternalVoiceAssetMeta::audioxVoiceMetaIsSet() const
{
    return audioxVoiceMetaIsSet_;
}

void TtscExternalVoiceAssetMeta::unsetaudioxVoiceMeta()
{
    audioxVoiceMetaIsSet_ = false;
}

}
}
}
}
}


