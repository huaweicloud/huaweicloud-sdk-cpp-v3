

#include "huaweicloud/live/v1/model/ListCesInstanceRspBody_instances.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesInstanceRspBody_instances::ListCesInstanceRspBody_instances()
{
    medialiveMpcIsSet_ = false;
    pipelineIsSet_ = false;
    audioIsSet_ = false;
}

ListCesInstanceRspBody_instances::~ListCesInstanceRspBody_instances() = default;

void ListCesInstanceRspBody_instances::validate()
{
}

web::json::value ListCesInstanceRspBody_instances::toJson() const
{
    web::json::value val = web::json::value::object();

    if(medialiveMpcIsSet_) {
        val[utility::conversions::to_string_t("medialive_mpc")] = ModelBase::toJson(medialiveMpc_);
    }
    if(pipelineIsSet_) {
        val[utility::conversions::to_string_t("pipeline")] = ModelBase::toJson(pipeline_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }

    return val;
}
bool ListCesInstanceRspBody_instances::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("medialive_mpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medialive_mpc"));
        if(!fieldValue.is_null())
        {
            ListCesInstanceRspBody_medialive_mpc refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMedialiveMpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline"));
        if(!fieldValue.is_null())
        {
            ListCesInstanceRspBody_pipeline refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipeline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            ListCesInstanceRspBody_audio refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    return ok;
}


ListCesInstanceRspBody_medialive_mpc ListCesInstanceRspBody_instances::getMedialiveMpc() const
{
    return medialiveMpc_;
}

void ListCesInstanceRspBody_instances::setMedialiveMpc(const ListCesInstanceRspBody_medialive_mpc& value)
{
    medialiveMpc_ = value;
    medialiveMpcIsSet_ = true;
}

bool ListCesInstanceRspBody_instances::medialiveMpcIsSet() const
{
    return medialiveMpcIsSet_;
}

void ListCesInstanceRspBody_instances::unsetmedialiveMpc()
{
    medialiveMpcIsSet_ = false;
}

ListCesInstanceRspBody_pipeline ListCesInstanceRspBody_instances::getPipeline() const
{
    return pipeline_;
}

void ListCesInstanceRspBody_instances::setPipeline(const ListCesInstanceRspBody_pipeline& value)
{
    pipeline_ = value;
    pipelineIsSet_ = true;
}

bool ListCesInstanceRspBody_instances::pipelineIsSet() const
{
    return pipelineIsSet_;
}

void ListCesInstanceRspBody_instances::unsetpipeline()
{
    pipelineIsSet_ = false;
}

ListCesInstanceRspBody_audio ListCesInstanceRspBody_instances::getAudio() const
{
    return audio_;
}

void ListCesInstanceRspBody_instances::setAudio(const ListCesInstanceRspBody_audio& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool ListCesInstanceRspBody_instances::audioIsSet() const
{
    return audioIsSet_;
}

void ListCesInstanceRspBody_instances::unsetaudio()
{
    audioIsSet_ = false;
}

}
}
}
}
}


