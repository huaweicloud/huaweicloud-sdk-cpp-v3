

#include "huaweicloud/metastudio/v1/model/OutputInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




OutputInfo::OutputInfo()
{
    faceAddr_ = "";
    faceAddrIsSet_ = false;
    bodyAddr_ = "";
    bodyAddrIsSet_ = false;
    audioAddr_ = "";
    audioAddrIsSet_ = false;
    sessionId_ = 0;
    sessionIdIsSet_ = false;
    outputDataVersion_ = "";
    outputDataVersionIsSet_ = false;
}

OutputInfo::~OutputInfo() = default;

void OutputInfo::validate()
{
}

web::json::value OutputInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceAddrIsSet_) {
        val[utility::conversions::to_string_t("face_addr")] = ModelBase::toJson(faceAddr_);
    }
    if(bodyAddrIsSet_) {
        val[utility::conversions::to_string_t("body_addr")] = ModelBase::toJson(bodyAddr_);
    }
    if(audioAddrIsSet_) {
        val[utility::conversions::to_string_t("audio_addr")] = ModelBase::toJson(audioAddr_);
    }
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(outputDataVersionIsSet_) {
        val[utility::conversions::to_string_t("output_data_version")] = ModelBase::toJson(outputDataVersion_);
    }

    return val;
}
bool OutputInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("face_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBodyAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_data_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_data_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputDataVersion(refVal);
        }
    }
    return ok;
}


std::string OutputInfo::getFaceAddr() const
{
    return faceAddr_;
}

void OutputInfo::setFaceAddr(const std::string& value)
{
    faceAddr_ = value;
    faceAddrIsSet_ = true;
}

bool OutputInfo::faceAddrIsSet() const
{
    return faceAddrIsSet_;
}

void OutputInfo::unsetfaceAddr()
{
    faceAddrIsSet_ = false;
}

std::string OutputInfo::getBodyAddr() const
{
    return bodyAddr_;
}

void OutputInfo::setBodyAddr(const std::string& value)
{
    bodyAddr_ = value;
    bodyAddrIsSet_ = true;
}

bool OutputInfo::bodyAddrIsSet() const
{
    return bodyAddrIsSet_;
}

void OutputInfo::unsetbodyAddr()
{
    bodyAddrIsSet_ = false;
}

std::string OutputInfo::getAudioAddr() const
{
    return audioAddr_;
}

void OutputInfo::setAudioAddr(const std::string& value)
{
    audioAddr_ = value;
    audioAddrIsSet_ = true;
}

bool OutputInfo::audioAddrIsSet() const
{
    return audioAddrIsSet_;
}

void OutputInfo::unsetaudioAddr()
{
    audioAddrIsSet_ = false;
}

int32_t OutputInfo::getSessionId() const
{
    return sessionId_;
}

void OutputInfo::setSessionId(int32_t value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool OutputInfo::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void OutputInfo::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

std::string OutputInfo::getOutputDataVersion() const
{
    return outputDataVersion_;
}

void OutputInfo::setOutputDataVersion(const std::string& value)
{
    outputDataVersion_ = value;
    outputDataVersionIsSet_ = true;
}

bool OutputInfo::outputDataVersionIsSet() const
{
    return outputDataVersionIsSet_;
}

void OutputInfo::unsetoutputDataVersion()
{
    outputDataVersionIsSet_ = false;
}

}
}
}
}
}


