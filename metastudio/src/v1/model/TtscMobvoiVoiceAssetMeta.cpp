

#include "huaweicloud/metastudio/v1/model/TtscMobvoiVoiceAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtscMobvoiVoiceAssetMeta::TtscMobvoiVoiceAssetMeta()
{
    speaker_ = "";
    speakerIsSet_ = false;
}

TtscMobvoiVoiceAssetMeta::~TtscMobvoiVoiceAssetMeta() = default;

void TtscMobvoiVoiceAssetMeta::validate()
{
}

web::json::value TtscMobvoiVoiceAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(speakerIsSet_) {
        val[utility::conversions::to_string_t("speaker")] = ModelBase::toJson(speaker_);
    }

    return val;
}
bool TtscMobvoiVoiceAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("speaker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speaker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeaker(refVal);
        }
    }
    return ok;
}


std::string TtscMobvoiVoiceAssetMeta::getSpeaker() const
{
    return speaker_;
}

void TtscMobvoiVoiceAssetMeta::setSpeaker(const std::string& value)
{
    speaker_ = value;
    speakerIsSet_ = true;
}

bool TtscMobvoiVoiceAssetMeta::speakerIsSet() const
{
    return speakerIsSet_;
}

void TtscMobvoiVoiceAssetMeta::unsetspeaker()
{
    speakerIsSet_ = false;
}

}
}
}
}
}


