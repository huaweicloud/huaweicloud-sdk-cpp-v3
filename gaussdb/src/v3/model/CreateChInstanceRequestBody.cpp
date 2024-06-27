

#include "huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateChInstanceRequestBody::CreateChInstanceRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    engineIsSet_ = false;
    haIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    dbRootPwd_ = "";
    dbRootPwdIsSet_ = false;
    azMode_ = "";
    azModeIsSet_ = false;
    volumeIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    tagsInfoIsSet_ = false;
    payInfoIsSet_ = false;
}

CreateChInstanceRequestBody::~CreateChInstanceRequestBody() = default;

void CreateChInstanceRequestBody::validate()
{
}

web::json::value CreateChInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(haIsSet_) {
        val[utility::conversions::to_string_t("ha")] = ModelBase::toJson(ha_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(dbRootPwdIsSet_) {
        val[utility::conversions::to_string_t("db_root_pwd")] = ModelBase::toJson(dbRootPwd_);
    }
    if(azModeIsSet_) {
        val[utility::conversions::to_string_t("az_mode")] = ModelBase::toJson(azMode_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(tagsInfoIsSet_) {
        val[utility::conversions::to_string_t("tags_info")] = ModelBase::toJson(tagsInfo_);
    }
    if(payInfoIsSet_) {
        val[utility::conversions::to_string_t("pay_info")] = ModelBase::toJson(payInfo_);
    }

    return val;
}
bool CreateChInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            ClickHouseEngineInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha"));
        if(!fieldValue.is_null())
        {
            CreateChInstanceRequestBody_ha refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_root_pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_root_pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbRootPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            CreateChInstanceRequestBody_volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_info"));
        if(!fieldValue.is_null())
        {
            CreateChInstanceRequestBody_tags_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pay_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pay_info"));
        if(!fieldValue.is_null())
        {
            CreateChInstanceRequestBody_pay_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayInfo(refVal);
        }
    }
    return ok;
}


std::string CreateChInstanceRequestBody::getName() const
{
    return name_;
}

void CreateChInstanceRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateChInstanceRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateChInstanceRequestBody::unsetname()
{
    nameIsSet_ = false;
}

ClickHouseEngineInfo CreateChInstanceRequestBody::getEngine() const
{
    return engine_;
}

void CreateChInstanceRequestBody::setEngine(const ClickHouseEngineInfo& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool CreateChInstanceRequestBody::engineIsSet() const
{
    return engineIsSet_;
}

void CreateChInstanceRequestBody::unsetengine()
{
    engineIsSet_ = false;
}

CreateChInstanceRequestBody_ha CreateChInstanceRequestBody::getHa() const
{
    return ha_;
}

void CreateChInstanceRequestBody::setHa(const CreateChInstanceRequestBody_ha& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool CreateChInstanceRequestBody::haIsSet() const
{
    return haIsSet_;
}

void CreateChInstanceRequestBody::unsetha()
{
    haIsSet_ = false;
}

std::string CreateChInstanceRequestBody::getFlavorId() const
{
    return flavorId_;
}

void CreateChInstanceRequestBody::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool CreateChInstanceRequestBody::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void CreateChInstanceRequestBody::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string CreateChInstanceRequestBody::getDbRootPwd() const
{
    return dbRootPwd_;
}

void CreateChInstanceRequestBody::setDbRootPwd(const std::string& value)
{
    dbRootPwd_ = value;
    dbRootPwdIsSet_ = true;
}

bool CreateChInstanceRequestBody::dbRootPwdIsSet() const
{
    return dbRootPwdIsSet_;
}

void CreateChInstanceRequestBody::unsetdbRootPwd()
{
    dbRootPwdIsSet_ = false;
}

std::string CreateChInstanceRequestBody::getAzMode() const
{
    return azMode_;
}

void CreateChInstanceRequestBody::setAzMode(const std::string& value)
{
    azMode_ = value;
    azModeIsSet_ = true;
}

bool CreateChInstanceRequestBody::azModeIsSet() const
{
    return azModeIsSet_;
}

void CreateChInstanceRequestBody::unsetazMode()
{
    azModeIsSet_ = false;
}

CreateChInstanceRequestBody_volume CreateChInstanceRequestBody::getVolume() const
{
    return volume_;
}

void CreateChInstanceRequestBody::setVolume(const CreateChInstanceRequestBody_volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool CreateChInstanceRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void CreateChInstanceRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string CreateChInstanceRequestBody::getAzCode() const
{
    return azCode_;
}

void CreateChInstanceRequestBody::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool CreateChInstanceRequestBody::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void CreateChInstanceRequestBody::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string CreateChInstanceRequestBody::getTimeZone() const
{
    return timeZone_;
}

void CreateChInstanceRequestBody::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool CreateChInstanceRequestBody::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void CreateChInstanceRequestBody::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

CreateChInstanceRequestBody_tags_info CreateChInstanceRequestBody::getTagsInfo() const
{
    return tagsInfo_;
}

void CreateChInstanceRequestBody::setTagsInfo(const CreateChInstanceRequestBody_tags_info& value)
{
    tagsInfo_ = value;
    tagsInfoIsSet_ = true;
}

bool CreateChInstanceRequestBody::tagsInfoIsSet() const
{
    return tagsInfoIsSet_;
}

void CreateChInstanceRequestBody::unsettagsInfo()
{
    tagsInfoIsSet_ = false;
}

CreateChInstanceRequestBody_pay_info CreateChInstanceRequestBody::getPayInfo() const
{
    return payInfo_;
}

void CreateChInstanceRequestBody::setPayInfo(const CreateChInstanceRequestBody_pay_info& value)
{
    payInfo_ = value;
    payInfoIsSet_ = true;
}

bool CreateChInstanceRequestBody::payInfoIsSet() const
{
    return payInfoIsSet_;
}

void CreateChInstanceRequestBody::unsetpayInfo()
{
    payInfoIsSet_ = false;
}

}
}
}
}
}


