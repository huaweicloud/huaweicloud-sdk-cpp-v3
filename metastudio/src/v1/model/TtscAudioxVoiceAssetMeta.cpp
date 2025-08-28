

#include "huaweicloud/metastudio/v1/model/TtscAudioxVoiceAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtscAudioxVoiceAssetMeta::TtscAudioxVoiceAssetMeta()
{
    speaker_ = "";
    speakerIsSet_ = false;
}

TtscAudioxVoiceAssetMeta::~TtscAudioxVoiceAssetMeta() = default;

void TtscAudioxVoiceAssetMeta::validate()
{
}

web::json::value TtscAudioxVoiceAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(speakerIsSet_) {
        val[utility::conversions::to_string_t("speaker")] = ModelBase::toJson(speaker_);
    }

    return val;
}
bool TtscAudioxVoiceAssetMeta::fromJson(const web::json::value& val)
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


std::string TtscAudioxVoiceAssetMeta::getSpeaker() const
{
    return speaker_;
}

void TtscAudioxVoiceAssetMeta::setSpeaker(const std::string& value)
{
    speaker_ = value;
    speakerIsSet_ = true;
}

bool TtscAudioxVoiceAssetMeta::speakerIsSet() const
{
    return speakerIsSet_;
}

void TtscAudioxVoiceAssetMeta::unsetspeaker()
{
    speakerIsSet_ = false;
}

}
}
}
}
}


