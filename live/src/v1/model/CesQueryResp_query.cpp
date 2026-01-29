

#include "huaweicloud/live/v1/model/CesQueryResp_query.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CesQueryResp_query::CesQueryResp_query()
{
    medialiveMpcIsSet_ = false;
    pipelineIsSet_ = false;
    audioIsSet_ = false;
    medialiveCdnIsSet_ = false;
    medialivePackageIsSet_ = false;
    medialiveConnectIsSet_ = false;
    medialiveTailorIsSet_ = false;
    regionIsSet_ = false;
}

CesQueryResp_query::~CesQueryResp_query() = default;

void CesQueryResp_query::validate()
{
}

web::json::value CesQueryResp_query::toJson() const
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
    if(medialiveCdnIsSet_) {
        val[utility::conversions::to_string_t("medialive_cdn")] = ModelBase::toJson(medialiveCdn_);
    }
    if(medialivePackageIsSet_) {
        val[utility::conversions::to_string_t("medialive_package")] = ModelBase::toJson(medialivePackage_);
    }
    if(medialiveConnectIsSet_) {
        val[utility::conversions::to_string_t("medialive_connect")] = ModelBase::toJson(medialiveConnect_);
    }
    if(medialiveTailorIsSet_) {
        val[utility::conversions::to_string_t("medialive_tailor")] = ModelBase::toJson(medialiveTailor_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool CesQueryResp_query::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("medialive_mpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medialive_mpc"));
        if(!fieldValue.is_null())
        {
            CesDimsItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMedialiveMpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline"));
        if(!fieldValue.is_null())
        {
            CesDimsItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipeline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            CesDimsItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("medialive_cdn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medialive_cdn"));
        if(!fieldValue.is_null())
        {
            CesDimsItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMedialiveCdn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("medialive_package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medialive_package"));
        if(!fieldValue.is_null())
        {
            CesDimsItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMedialivePackage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("medialive_connect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medialive_connect"));
        if(!fieldValue.is_null())
        {
            CesDimsItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMedialiveConnect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("medialive_tailor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medialive_tailor"));
        if(!fieldValue.is_null())
        {
            CesDimsItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMedialiveTailor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            CesDimsItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    return ok;
}


CesDimsItem CesQueryResp_query::getMedialiveMpc() const
{
    return medialiveMpc_;
}

void CesQueryResp_query::setMedialiveMpc(const CesDimsItem& value)
{
    medialiveMpc_ = value;
    medialiveMpcIsSet_ = true;
}

bool CesQueryResp_query::medialiveMpcIsSet() const
{
    return medialiveMpcIsSet_;
}

void CesQueryResp_query::unsetmedialiveMpc()
{
    medialiveMpcIsSet_ = false;
}

CesDimsItem CesQueryResp_query::getPipeline() const
{
    return pipeline_;
}

void CesQueryResp_query::setPipeline(const CesDimsItem& value)
{
    pipeline_ = value;
    pipelineIsSet_ = true;
}

bool CesQueryResp_query::pipelineIsSet() const
{
    return pipelineIsSet_;
}

void CesQueryResp_query::unsetpipeline()
{
    pipelineIsSet_ = false;
}

CesDimsItem CesQueryResp_query::getAudio() const
{
    return audio_;
}

void CesQueryResp_query::setAudio(const CesDimsItem& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool CesQueryResp_query::audioIsSet() const
{
    return audioIsSet_;
}

void CesQueryResp_query::unsetaudio()
{
    audioIsSet_ = false;
}

CesDimsItem CesQueryResp_query::getMedialiveCdn() const
{
    return medialiveCdn_;
}

void CesQueryResp_query::setMedialiveCdn(const CesDimsItem& value)
{
    medialiveCdn_ = value;
    medialiveCdnIsSet_ = true;
}

bool CesQueryResp_query::medialiveCdnIsSet() const
{
    return medialiveCdnIsSet_;
}

void CesQueryResp_query::unsetmedialiveCdn()
{
    medialiveCdnIsSet_ = false;
}

CesDimsItem CesQueryResp_query::getMedialivePackage() const
{
    return medialivePackage_;
}

void CesQueryResp_query::setMedialivePackage(const CesDimsItem& value)
{
    medialivePackage_ = value;
    medialivePackageIsSet_ = true;
}

bool CesQueryResp_query::medialivePackageIsSet() const
{
    return medialivePackageIsSet_;
}

void CesQueryResp_query::unsetmedialivePackage()
{
    medialivePackageIsSet_ = false;
}

CesDimsItem CesQueryResp_query::getMedialiveConnect() const
{
    return medialiveConnect_;
}

void CesQueryResp_query::setMedialiveConnect(const CesDimsItem& value)
{
    medialiveConnect_ = value;
    medialiveConnectIsSet_ = true;
}

bool CesQueryResp_query::medialiveConnectIsSet() const
{
    return medialiveConnectIsSet_;
}

void CesQueryResp_query::unsetmedialiveConnect()
{
    medialiveConnectIsSet_ = false;
}

CesDimsItem CesQueryResp_query::getMedialiveTailor() const
{
    return medialiveTailor_;
}

void CesQueryResp_query::setMedialiveTailor(const CesDimsItem& value)
{
    medialiveTailor_ = value;
    medialiveTailorIsSet_ = true;
}

bool CesQueryResp_query::medialiveTailorIsSet() const
{
    return medialiveTailorIsSet_;
}

void CesQueryResp_query::unsetmedialiveTailor()
{
    medialiveTailorIsSet_ = false;
}

CesDimsItem CesQueryResp_query::getRegion() const
{
    return region_;
}

void CesQueryResp_query::setRegion(const CesDimsItem& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CesQueryResp_query::regionIsSet() const
{
    return regionIsSet_;
}

void CesQueryResp_query::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


