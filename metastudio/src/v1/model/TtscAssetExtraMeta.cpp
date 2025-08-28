

#include "huaweicloud/metastudio/v1/model/TtscAssetExtraMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtscAssetExtraMeta::TtscAssetExtraMeta()
{
    voiceModelMetaIsSet_ = false;
}

TtscAssetExtraMeta::~TtscAssetExtraMeta() = default;

void TtscAssetExtraMeta::validate()
{
}

web::json::value TtscAssetExtraMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(voiceModelMetaIsSet_) {
        val[utility::conversions::to_string_t("voice_model_meta")] = ModelBase::toJson(voiceModelMeta_);
    }

    return val;
}
bool TtscAssetExtraMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("voice_model_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_model_meta"));
        if(!fieldValue.is_null())
        {
            TtscVoiceModelAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceModelMeta(refVal);
        }
    }
    return ok;
}


TtscVoiceModelAssetMeta TtscAssetExtraMeta::getVoiceModelMeta() const
{
    return voiceModelMeta_;
}

void TtscAssetExtraMeta::setVoiceModelMeta(const TtscVoiceModelAssetMeta& value)
{
    voiceModelMeta_ = value;
    voiceModelMetaIsSet_ = true;
}

bool TtscAssetExtraMeta::voiceModelMetaIsSet() const
{
    return voiceModelMetaIsSet_;
}

void TtscAssetExtraMeta::unsetvoiceModelMeta()
{
    voiceModelMetaIsSet_ = false;
}

}
}
}
}
}


