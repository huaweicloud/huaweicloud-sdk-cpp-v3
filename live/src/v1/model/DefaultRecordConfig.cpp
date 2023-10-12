

#include "huaweicloud/live/v1/model/DefaultRecordConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DefaultRecordConfig::DefaultRecordConfig()
{
    recordFormatIsSet_ = false;
    obsAddrIsSet_ = false;
    hlsConfigIsSet_ = false;
    flvConfigIsSet_ = false;
    mp4ConfigIsSet_ = false;
}

DefaultRecordConfig::~DefaultRecordConfig() = default;

void DefaultRecordConfig::validate()
{
}

web::json::value DefaultRecordConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordFormatIsSet_) {
        val[utility::conversions::to_string_t("record_format")] = ModelBase::toJson(recordFormat_);
    }
    if(obsAddrIsSet_) {
        val[utility::conversions::to_string_t("obs_addr")] = ModelBase::toJson(obsAddr_);
    }
    if(hlsConfigIsSet_) {
        val[utility::conversions::to_string_t("hls_config")] = ModelBase::toJson(hlsConfig_);
    }
    if(flvConfigIsSet_) {
        val[utility::conversions::to_string_t("flv_config")] = ModelBase::toJson(flvConfig_);
    }
    if(mp4ConfigIsSet_) {
        val[utility::conversions::to_string_t("mp4_config")] = ModelBase::toJson(mp4Config_);
    }

    return val;
}
bool DefaultRecordConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_format"));
        if(!fieldValue.is_null())
        {
            std::vector<VideoFormatVar> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_addr"));
        if(!fieldValue.is_null())
        {
            RecordObsFileAddr refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hls_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_config"));
        if(!fieldValue.is_null())
        {
            HLSRecordConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flv_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flv_config"));
        if(!fieldValue.is_null())
        {
            FLVRecordConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlvConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mp4_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mp4_config"));
        if(!fieldValue.is_null())
        {
            MP4RecordConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMp4Config(refVal);
        }
    }
    return ok;
}


std::vector<VideoFormatVar>& DefaultRecordConfig::getRecordFormat()
{
    return recordFormat_;
}

void DefaultRecordConfig::setRecordFormat(const std::vector<VideoFormatVar>& value)
{
    recordFormat_ = value;
    recordFormatIsSet_ = true;
}

bool DefaultRecordConfig::recordFormatIsSet() const
{
    return recordFormatIsSet_;
}

void DefaultRecordConfig::unsetrecordFormat()
{
    recordFormatIsSet_ = false;
}

RecordObsFileAddr DefaultRecordConfig::getObsAddr() const
{
    return obsAddr_;
}

void DefaultRecordConfig::setObsAddr(const RecordObsFileAddr& value)
{
    obsAddr_ = value;
    obsAddrIsSet_ = true;
}

bool DefaultRecordConfig::obsAddrIsSet() const
{
    return obsAddrIsSet_;
}

void DefaultRecordConfig::unsetobsAddr()
{
    obsAddrIsSet_ = false;
}

HLSRecordConfig DefaultRecordConfig::getHlsConfig() const
{
    return hlsConfig_;
}

void DefaultRecordConfig::setHlsConfig(const HLSRecordConfig& value)
{
    hlsConfig_ = value;
    hlsConfigIsSet_ = true;
}

bool DefaultRecordConfig::hlsConfigIsSet() const
{
    return hlsConfigIsSet_;
}

void DefaultRecordConfig::unsethlsConfig()
{
    hlsConfigIsSet_ = false;
}

FLVRecordConfig DefaultRecordConfig::getFlvConfig() const
{
    return flvConfig_;
}

void DefaultRecordConfig::setFlvConfig(const FLVRecordConfig& value)
{
    flvConfig_ = value;
    flvConfigIsSet_ = true;
}

bool DefaultRecordConfig::flvConfigIsSet() const
{
    return flvConfigIsSet_;
}

void DefaultRecordConfig::unsetflvConfig()
{
    flvConfigIsSet_ = false;
}

MP4RecordConfig DefaultRecordConfig::getMp4Config() const
{
    return mp4Config_;
}

void DefaultRecordConfig::setMp4Config(const MP4RecordConfig& value)
{
    mp4Config_ = value;
    mp4ConfigIsSet_ = true;
}

bool DefaultRecordConfig::mp4ConfigIsSet() const
{
    return mp4ConfigIsSet_;
}

void DefaultRecordConfig::unsetmp4Config()
{
    mp4ConfigIsSet_ = false;
}

}
}
}
}
}


