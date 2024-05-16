

#include "huaweicloud/gaussdb/v3/model/StarRocksCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksCreateRequest::StarRocksCreateRequest()
{
    name_ = "";
    nameIsSet_ = false;
    engineIsSet_ = false;
    haIsSet_ = false;
    feFlavorId_ = "";
    feFlavorIdIsSet_ = false;
    beFlavorId_ = "";
    beFlavorIdIsSet_ = false;
    dbRootPwd_ = "";
    dbRootPwdIsSet_ = false;
    feCount_ = 0;
    feCountIsSet_ = false;
    beCount_ = 0;
    beCountIsSet_ = false;
    azMode_ = "";
    azModeIsSet_ = false;
    feVolumeIsSet_ = false;
    beVolumeIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    tagsInfoIsSet_ = false;
}

StarRocksCreateRequest::~StarRocksCreateRequest() = default;

void StarRocksCreateRequest::validate()
{
}

web::json::value StarRocksCreateRequest::toJson() const
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
    if(feFlavorIdIsSet_) {
        val[utility::conversions::to_string_t("fe_flavor_id")] = ModelBase::toJson(feFlavorId_);
    }
    if(beFlavorIdIsSet_) {
        val[utility::conversions::to_string_t("be_flavor_id")] = ModelBase::toJson(beFlavorId_);
    }
    if(dbRootPwdIsSet_) {
        val[utility::conversions::to_string_t("db_root_pwd")] = ModelBase::toJson(dbRootPwd_);
    }
    if(feCountIsSet_) {
        val[utility::conversions::to_string_t("fe_count")] = ModelBase::toJson(feCount_);
    }
    if(beCountIsSet_) {
        val[utility::conversions::to_string_t("be_count")] = ModelBase::toJson(beCount_);
    }
    if(azModeIsSet_) {
        val[utility::conversions::to_string_t("az_mode")] = ModelBase::toJson(azMode_);
    }
    if(feVolumeIsSet_) {
        val[utility::conversions::to_string_t("fe_volume")] = ModelBase::toJson(feVolume_);
    }
    if(beVolumeIsSet_) {
        val[utility::conversions::to_string_t("be_volume")] = ModelBase::toJson(beVolume_);
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

    return val;
}
bool StarRocksCreateRequest::fromJson(const web::json::value& val)
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
            StarRocksCreateRequest_engine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha"));
        if(!fieldValue.is_null())
        {
            StarRocksCreateRequest_ha refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fe_flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fe_flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeFlavorId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fe_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fe_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fe_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fe_volume"));
        if(!fieldValue.is_null())
        {
            StarRocksCreateRequest_fe_volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_volume"));
        if(!fieldValue.is_null())
        {
            StarRocksCreateRequest_be_volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeVolume(refVal);
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
            StarRocksCreateRequest_tags_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsInfo(refVal);
        }
    }
    return ok;
}


std::string StarRocksCreateRequest::getName() const
{
    return name_;
}

void StarRocksCreateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StarRocksCreateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void StarRocksCreateRequest::unsetname()
{
    nameIsSet_ = false;
}

StarRocksCreateRequest_engine StarRocksCreateRequest::getEngine() const
{
    return engine_;
}

void StarRocksCreateRequest::setEngine(const StarRocksCreateRequest_engine& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool StarRocksCreateRequest::engineIsSet() const
{
    return engineIsSet_;
}

void StarRocksCreateRequest::unsetengine()
{
    engineIsSet_ = false;
}

StarRocksCreateRequest_ha StarRocksCreateRequest::getHa() const
{
    return ha_;
}

void StarRocksCreateRequest::setHa(const StarRocksCreateRequest_ha& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool StarRocksCreateRequest::haIsSet() const
{
    return haIsSet_;
}

void StarRocksCreateRequest::unsetha()
{
    haIsSet_ = false;
}

std::string StarRocksCreateRequest::getFeFlavorId() const
{
    return feFlavorId_;
}

void StarRocksCreateRequest::setFeFlavorId(const std::string& value)
{
    feFlavorId_ = value;
    feFlavorIdIsSet_ = true;
}

bool StarRocksCreateRequest::feFlavorIdIsSet() const
{
    return feFlavorIdIsSet_;
}

void StarRocksCreateRequest::unsetfeFlavorId()
{
    feFlavorIdIsSet_ = false;
}

std::string StarRocksCreateRequest::getBeFlavorId() const
{
    return beFlavorId_;
}

void StarRocksCreateRequest::setBeFlavorId(const std::string& value)
{
    beFlavorId_ = value;
    beFlavorIdIsSet_ = true;
}

bool StarRocksCreateRequest::beFlavorIdIsSet() const
{
    return beFlavorIdIsSet_;
}

void StarRocksCreateRequest::unsetbeFlavorId()
{
    beFlavorIdIsSet_ = false;
}

std::string StarRocksCreateRequest::getDbRootPwd() const
{
    return dbRootPwd_;
}

void StarRocksCreateRequest::setDbRootPwd(const std::string& value)
{
    dbRootPwd_ = value;
    dbRootPwdIsSet_ = true;
}

bool StarRocksCreateRequest::dbRootPwdIsSet() const
{
    return dbRootPwdIsSet_;
}

void StarRocksCreateRequest::unsetdbRootPwd()
{
    dbRootPwdIsSet_ = false;
}

int32_t StarRocksCreateRequest::getFeCount() const
{
    return feCount_;
}

void StarRocksCreateRequest::setFeCount(int32_t value)
{
    feCount_ = value;
    feCountIsSet_ = true;
}

bool StarRocksCreateRequest::feCountIsSet() const
{
    return feCountIsSet_;
}

void StarRocksCreateRequest::unsetfeCount()
{
    feCountIsSet_ = false;
}

int32_t StarRocksCreateRequest::getBeCount() const
{
    return beCount_;
}

void StarRocksCreateRequest::setBeCount(int32_t value)
{
    beCount_ = value;
    beCountIsSet_ = true;
}

bool StarRocksCreateRequest::beCountIsSet() const
{
    return beCountIsSet_;
}

void StarRocksCreateRequest::unsetbeCount()
{
    beCountIsSet_ = false;
}

std::string StarRocksCreateRequest::getAzMode() const
{
    return azMode_;
}

void StarRocksCreateRequest::setAzMode(const std::string& value)
{
    azMode_ = value;
    azModeIsSet_ = true;
}

bool StarRocksCreateRequest::azModeIsSet() const
{
    return azModeIsSet_;
}

void StarRocksCreateRequest::unsetazMode()
{
    azModeIsSet_ = false;
}

StarRocksCreateRequest_fe_volume StarRocksCreateRequest::getFeVolume() const
{
    return feVolume_;
}

void StarRocksCreateRequest::setFeVolume(const StarRocksCreateRequest_fe_volume& value)
{
    feVolume_ = value;
    feVolumeIsSet_ = true;
}

bool StarRocksCreateRequest::feVolumeIsSet() const
{
    return feVolumeIsSet_;
}

void StarRocksCreateRequest::unsetfeVolume()
{
    feVolumeIsSet_ = false;
}

StarRocksCreateRequest_be_volume StarRocksCreateRequest::getBeVolume() const
{
    return beVolume_;
}

void StarRocksCreateRequest::setBeVolume(const StarRocksCreateRequest_be_volume& value)
{
    beVolume_ = value;
    beVolumeIsSet_ = true;
}

bool StarRocksCreateRequest::beVolumeIsSet() const
{
    return beVolumeIsSet_;
}

void StarRocksCreateRequest::unsetbeVolume()
{
    beVolumeIsSet_ = false;
}

std::string StarRocksCreateRequest::getAzCode() const
{
    return azCode_;
}

void StarRocksCreateRequest::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool StarRocksCreateRequest::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void StarRocksCreateRequest::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string StarRocksCreateRequest::getTimeZone() const
{
    return timeZone_;
}

void StarRocksCreateRequest::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool StarRocksCreateRequest::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void StarRocksCreateRequest::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

StarRocksCreateRequest_tags_info StarRocksCreateRequest::getTagsInfo() const
{
    return tagsInfo_;
}

void StarRocksCreateRequest::setTagsInfo(const StarRocksCreateRequest_tags_info& value)
{
    tagsInfo_ = value;
    tagsInfoIsSet_ = true;
}

bool StarRocksCreateRequest::tagsInfoIsSet() const
{
    return tagsInfoIsSet_;
}

void StarRocksCreateRequest::unsettagsInfo()
{
    tagsInfoIsSet_ = false;
}

}
}
}
}
}


