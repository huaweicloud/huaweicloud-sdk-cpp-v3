

#include "huaweicloud/drs/v5/model/BackupFileInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BackupFileInfo::BackupFileInfo()
{
    name_ = "";
    nameIsSet_ = false;
    obsPath_ = "";
    obsPathIsSet_ = false;
    rdsVersion_ = "";
    rdsVersionIsSet_ = false;
    rdsSourceInstanceId_ = "";
    rdsSourceInstanceIdIsSet_ = false;
}

BackupFileInfo::~BackupFileInfo() = default;

void BackupFileInfo::validate()
{
}

web::json::value BackupFileInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(obsPathIsSet_) {
        val[utility::conversions::to_string_t("obs_path")] = ModelBase::toJson(obsPath_);
    }
    if(rdsVersionIsSet_) {
        val[utility::conversions::to_string_t("rds_version")] = ModelBase::toJson(rdsVersion_);
    }
    if(rdsSourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("rds_source_instance_id")] = ModelBase::toJson(rdsSourceInstanceId_);
    }

    return val;
}
bool BackupFileInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("obs_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rds_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rds_source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsSourceInstanceId(refVal);
        }
    }
    return ok;
}


std::string BackupFileInfo::getName() const
{
    return name_;
}

void BackupFileInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupFileInfo::nameIsSet() const
{
    return nameIsSet_;
}

void BackupFileInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string BackupFileInfo::getObsPath() const
{
    return obsPath_;
}

void BackupFileInfo::setObsPath(const std::string& value)
{
    obsPath_ = value;
    obsPathIsSet_ = true;
}

bool BackupFileInfo::obsPathIsSet() const
{
    return obsPathIsSet_;
}

void BackupFileInfo::unsetobsPath()
{
    obsPathIsSet_ = false;
}

std::string BackupFileInfo::getRdsVersion() const
{
    return rdsVersion_;
}

void BackupFileInfo::setRdsVersion(const std::string& value)
{
    rdsVersion_ = value;
    rdsVersionIsSet_ = true;
}

bool BackupFileInfo::rdsVersionIsSet() const
{
    return rdsVersionIsSet_;
}

void BackupFileInfo::unsetrdsVersion()
{
    rdsVersionIsSet_ = false;
}

std::string BackupFileInfo::getRdsSourceInstanceId() const
{
    return rdsSourceInstanceId_;
}

void BackupFileInfo::setRdsSourceInstanceId(const std::string& value)
{
    rdsSourceInstanceId_ = value;
    rdsSourceInstanceIdIsSet_ = true;
}

bool BackupFileInfo::rdsSourceInstanceIdIsSet() const
{
    return rdsSourceInstanceIdIsSet_;
}

void BackupFileInfo::unsetrdsSourceInstanceId()
{
    rdsSourceInstanceIdIsSet_ = false;
}

}
}
}
}
}


