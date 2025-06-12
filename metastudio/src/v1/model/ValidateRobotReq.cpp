

#include "huaweicloud/metastudio/v1/model/ValidateRobotReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ValidateRobotReq::ValidateRobotReq()
{
    appType_ = 0;
    appTypeIsSet_ = false;
    huaweiEiCbsIsSet_ = false;
    iflytekAiuiConfigIsSet_ = false;
    iflytekSparkIsSet_ = false;
    thirdPartyModelConfigIsSet_ = false;
    mobvoiConfigIsSet_ = false;
    wiseBrainConfigIsSet_ = false;
}

ValidateRobotReq::~ValidateRobotReq() = default;

void ValidateRobotReq::validate()
{
}

web::json::value ValidateRobotReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appTypeIsSet_) {
        val[utility::conversions::to_string_t("app_type")] = ModelBase::toJson(appType_);
    }
    if(huaweiEiCbsIsSet_) {
        val[utility::conversions::to_string_t("huawei_ei_cbs")] = ModelBase::toJson(huaweiEiCbs_);
    }
    if(iflytekAiuiConfigIsSet_) {
        val[utility::conversions::to_string_t("iflytek_aiui_config")] = ModelBase::toJson(iflytekAiuiConfig_);
    }
    if(iflytekSparkIsSet_) {
        val[utility::conversions::to_string_t("iflytek_spark")] = ModelBase::toJson(iflytekSpark_);
    }
    if(thirdPartyModelConfigIsSet_) {
        val[utility::conversions::to_string_t("third_party_model_config")] = ModelBase::toJson(thirdPartyModelConfig_);
    }
    if(mobvoiConfigIsSet_) {
        val[utility::conversions::to_string_t("mobvoi_config")] = ModelBase::toJson(mobvoiConfig_);
    }
    if(wiseBrainConfigIsSet_) {
        val[utility::conversions::to_string_t("wise_brain_config")] = ModelBase::toJson(wiseBrainConfig_);
    }

    return val;
}
bool ValidateRobotReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huawei_ei_cbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huawei_ei_cbs"));
        if(!fieldValue.is_null())
        {
            HuaweiEiCbs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHuaweiEiCbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iflytek_aiui_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iflytek_aiui_config"));
        if(!fieldValue.is_null())
        {
            IflytekAiuiConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIflytekAiuiConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iflytek_spark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iflytek_spark"));
        if(!fieldValue.is_null())
        {
            IflytekSpark refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIflytekSpark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("third_party_model_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("third_party_model_config"));
        if(!fieldValue.is_null())
        {
            ThirdPartyModelConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdPartyModelConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mobvoi_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mobvoi_config"));
        if(!fieldValue.is_null())
        {
            MobvoiConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMobvoiConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wise_brain_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wise_brain_config"));
        if(!fieldValue.is_null())
        {
            WiseBrainConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWiseBrainConfig(refVal);
        }
    }
    return ok;
}


int32_t ValidateRobotReq::getAppType() const
{
    return appType_;
}

void ValidateRobotReq::setAppType(int32_t value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool ValidateRobotReq::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void ValidateRobotReq::unsetappType()
{
    appTypeIsSet_ = false;
}

HuaweiEiCbs ValidateRobotReq::getHuaweiEiCbs() const
{
    return huaweiEiCbs_;
}

void ValidateRobotReq::setHuaweiEiCbs(const HuaweiEiCbs& value)
{
    huaweiEiCbs_ = value;
    huaweiEiCbsIsSet_ = true;
}

bool ValidateRobotReq::huaweiEiCbsIsSet() const
{
    return huaweiEiCbsIsSet_;
}

void ValidateRobotReq::unsethuaweiEiCbs()
{
    huaweiEiCbsIsSet_ = false;
}

IflytekAiuiConfig ValidateRobotReq::getIflytekAiuiConfig() const
{
    return iflytekAiuiConfig_;
}

void ValidateRobotReq::setIflytekAiuiConfig(const IflytekAiuiConfig& value)
{
    iflytekAiuiConfig_ = value;
    iflytekAiuiConfigIsSet_ = true;
}

bool ValidateRobotReq::iflytekAiuiConfigIsSet() const
{
    return iflytekAiuiConfigIsSet_;
}

void ValidateRobotReq::unsetiflytekAiuiConfig()
{
    iflytekAiuiConfigIsSet_ = false;
}

IflytekSpark ValidateRobotReq::getIflytekSpark() const
{
    return iflytekSpark_;
}

void ValidateRobotReq::setIflytekSpark(const IflytekSpark& value)
{
    iflytekSpark_ = value;
    iflytekSparkIsSet_ = true;
}

bool ValidateRobotReq::iflytekSparkIsSet() const
{
    return iflytekSparkIsSet_;
}

void ValidateRobotReq::unsetiflytekSpark()
{
    iflytekSparkIsSet_ = false;
}

ThirdPartyModelConfig ValidateRobotReq::getThirdPartyModelConfig() const
{
    return thirdPartyModelConfig_;
}

void ValidateRobotReq::setThirdPartyModelConfig(const ThirdPartyModelConfig& value)
{
    thirdPartyModelConfig_ = value;
    thirdPartyModelConfigIsSet_ = true;
}

bool ValidateRobotReq::thirdPartyModelConfigIsSet() const
{
    return thirdPartyModelConfigIsSet_;
}

void ValidateRobotReq::unsetthirdPartyModelConfig()
{
    thirdPartyModelConfigIsSet_ = false;
}

MobvoiConfig ValidateRobotReq::getMobvoiConfig() const
{
    return mobvoiConfig_;
}

void ValidateRobotReq::setMobvoiConfig(const MobvoiConfig& value)
{
    mobvoiConfig_ = value;
    mobvoiConfigIsSet_ = true;
}

bool ValidateRobotReq::mobvoiConfigIsSet() const
{
    return mobvoiConfigIsSet_;
}

void ValidateRobotReq::unsetmobvoiConfig()
{
    mobvoiConfigIsSet_ = false;
}

WiseBrainConfig ValidateRobotReq::getWiseBrainConfig() const
{
    return wiseBrainConfig_;
}

void ValidateRobotReq::setWiseBrainConfig(const WiseBrainConfig& value)
{
    wiseBrainConfig_ = value;
    wiseBrainConfigIsSet_ = true;
}

bool ValidateRobotReq::wiseBrainConfigIsSet() const
{
    return wiseBrainConfigIsSet_;
}

void ValidateRobotReq::unsetwiseBrainConfig()
{
    wiseBrainConfigIsSet_ = false;
}

}
}
}
}
}


