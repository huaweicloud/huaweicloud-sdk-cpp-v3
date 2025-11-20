

#include "huaweicloud/metastudio/v1/model/ListUserQuotaDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListUserQuotaDetail::ListUserQuotaDetail()
{
    modelingCount2dModel_ = 0;
    modelingCount2dModelIsSet_ = false;
    modelingCount2dModelFlexus_ = 0;
    modelingCount2dModelFlexusIsSet_ = false;
    videoTime2dModel_ = 0.0f;
    videoTime2dModelIsSet_ = false;
    videoTimeFlexus2dModel_ = 0.0f;
    videoTimeFlexus2dModelIsSet_ = false;
    voiceCloneBasic_ = 0;
    voiceCloneBasicIsSet_ = false;
    voiceCloneMiddle_ = 0;
    voiceCloneMiddleIsSet_ = false;
    voiceCloneAdvance_ = 0;
    voiceCloneAdvanceIsSet_ = false;
    voiceCloneFlexus_ = 0;
    voiceCloneFlexusIsSet_ = false;
}

ListUserQuotaDetail::~ListUserQuotaDetail() = default;

void ListUserQuotaDetail::validate()
{
}

web::json::value ListUserQuotaDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modelingCount2dModelIsSet_) {
        val[utility::conversions::to_string_t("modeling_count_2d_model")] = ModelBase::toJson(modelingCount2dModel_);
    }
    if(modelingCount2dModelFlexusIsSet_) {
        val[utility::conversions::to_string_t("modeling_count_2d_model_flexus")] = ModelBase::toJson(modelingCount2dModelFlexus_);
    }
    if(videoTime2dModelIsSet_) {
        val[utility::conversions::to_string_t("video_time_2d_model")] = ModelBase::toJson(videoTime2dModel_);
    }
    if(videoTimeFlexus2dModelIsSet_) {
        val[utility::conversions::to_string_t("video_time_flexus_2d_model")] = ModelBase::toJson(videoTimeFlexus2dModel_);
    }
    if(voiceCloneBasicIsSet_) {
        val[utility::conversions::to_string_t("voice_clone_basic")] = ModelBase::toJson(voiceCloneBasic_);
    }
    if(voiceCloneMiddleIsSet_) {
        val[utility::conversions::to_string_t("voice_clone_middle")] = ModelBase::toJson(voiceCloneMiddle_);
    }
    if(voiceCloneAdvanceIsSet_) {
        val[utility::conversions::to_string_t("voice_clone_advance")] = ModelBase::toJson(voiceCloneAdvance_);
    }
    if(voiceCloneFlexusIsSet_) {
        val[utility::conversions::to_string_t("voice_clone_flexus")] = ModelBase::toJson(voiceCloneFlexus_);
    }

    return val;
}
bool ListUserQuotaDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("modeling_count_2d_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modeling_count_2d_model"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelingCount2dModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modeling_count_2d_model_flexus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modeling_count_2d_model_flexus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelingCount2dModelFlexus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_time_2d_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_time_2d_model"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoTime2dModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_time_flexus_2d_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_time_flexus_2d_model"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoTimeFlexus2dModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_clone_basic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_clone_basic"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceCloneBasic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_clone_middle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_clone_middle"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceCloneMiddle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_clone_advance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_clone_advance"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceCloneAdvance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_clone_flexus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_clone_flexus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceCloneFlexus(refVal);
        }
    }
    return ok;
}


int32_t ListUserQuotaDetail::getModelingCount2dModel() const
{
    return modelingCount2dModel_;
}

void ListUserQuotaDetail::setModelingCount2dModel(int32_t value)
{
    modelingCount2dModel_ = value;
    modelingCount2dModelIsSet_ = true;
}

bool ListUserQuotaDetail::modelingCount2dModelIsSet() const
{
    return modelingCount2dModelIsSet_;
}

void ListUserQuotaDetail::unsetmodelingCount2dModel()
{
    modelingCount2dModelIsSet_ = false;
}

int32_t ListUserQuotaDetail::getModelingCount2dModelFlexus() const
{
    return modelingCount2dModelFlexus_;
}

void ListUserQuotaDetail::setModelingCount2dModelFlexus(int32_t value)
{
    modelingCount2dModelFlexus_ = value;
    modelingCount2dModelFlexusIsSet_ = true;
}

bool ListUserQuotaDetail::modelingCount2dModelFlexusIsSet() const
{
    return modelingCount2dModelFlexusIsSet_;
}

void ListUserQuotaDetail::unsetmodelingCount2dModelFlexus()
{
    modelingCount2dModelFlexusIsSet_ = false;
}

float ListUserQuotaDetail::getVideoTime2dModel() const
{
    return videoTime2dModel_;
}

void ListUserQuotaDetail::setVideoTime2dModel(float value)
{
    videoTime2dModel_ = value;
    videoTime2dModelIsSet_ = true;
}

bool ListUserQuotaDetail::videoTime2dModelIsSet() const
{
    return videoTime2dModelIsSet_;
}

void ListUserQuotaDetail::unsetvideoTime2dModel()
{
    videoTime2dModelIsSet_ = false;
}

float ListUserQuotaDetail::getVideoTimeFlexus2dModel() const
{
    return videoTimeFlexus2dModel_;
}

void ListUserQuotaDetail::setVideoTimeFlexus2dModel(float value)
{
    videoTimeFlexus2dModel_ = value;
    videoTimeFlexus2dModelIsSet_ = true;
}

bool ListUserQuotaDetail::videoTimeFlexus2dModelIsSet() const
{
    return videoTimeFlexus2dModelIsSet_;
}

void ListUserQuotaDetail::unsetvideoTimeFlexus2dModel()
{
    videoTimeFlexus2dModelIsSet_ = false;
}

int32_t ListUserQuotaDetail::getVoiceCloneBasic() const
{
    return voiceCloneBasic_;
}

void ListUserQuotaDetail::setVoiceCloneBasic(int32_t value)
{
    voiceCloneBasic_ = value;
    voiceCloneBasicIsSet_ = true;
}

bool ListUserQuotaDetail::voiceCloneBasicIsSet() const
{
    return voiceCloneBasicIsSet_;
}

void ListUserQuotaDetail::unsetvoiceCloneBasic()
{
    voiceCloneBasicIsSet_ = false;
}

int32_t ListUserQuotaDetail::getVoiceCloneMiddle() const
{
    return voiceCloneMiddle_;
}

void ListUserQuotaDetail::setVoiceCloneMiddle(int32_t value)
{
    voiceCloneMiddle_ = value;
    voiceCloneMiddleIsSet_ = true;
}

bool ListUserQuotaDetail::voiceCloneMiddleIsSet() const
{
    return voiceCloneMiddleIsSet_;
}

void ListUserQuotaDetail::unsetvoiceCloneMiddle()
{
    voiceCloneMiddleIsSet_ = false;
}

int32_t ListUserQuotaDetail::getVoiceCloneAdvance() const
{
    return voiceCloneAdvance_;
}

void ListUserQuotaDetail::setVoiceCloneAdvance(int32_t value)
{
    voiceCloneAdvance_ = value;
    voiceCloneAdvanceIsSet_ = true;
}

bool ListUserQuotaDetail::voiceCloneAdvanceIsSet() const
{
    return voiceCloneAdvanceIsSet_;
}

void ListUserQuotaDetail::unsetvoiceCloneAdvance()
{
    voiceCloneAdvanceIsSet_ = false;
}

int32_t ListUserQuotaDetail::getVoiceCloneFlexus() const
{
    return voiceCloneFlexus_;
}

void ListUserQuotaDetail::setVoiceCloneFlexus(int32_t value)
{
    voiceCloneFlexus_ = value;
    voiceCloneFlexusIsSet_ = true;
}

bool ListUserQuotaDetail::voiceCloneFlexusIsSet() const
{
    return voiceCloneFlexusIsSet_;
}

void ListUserQuotaDetail::unsetvoiceCloneFlexus()
{
    voiceCloneFlexusIsSet_ = false;
}

}
}
}
}
}


