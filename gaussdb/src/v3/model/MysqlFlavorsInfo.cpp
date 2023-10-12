

#include "huaweicloud/gaussdb/v3/model/MysqlFlavorsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlFlavorsInfo::MysqlFlavorsInfo()
{
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    azStatusIsSet_ = false;
}

MysqlFlavorsInfo::~MysqlFlavorsInfo() = default;

void MysqlFlavorsInfo::validate()
{
}

web::json::value MysqlFlavorsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }

    return val;
}
bool MysqlFlavorsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    return ok;
}


std::string MysqlFlavorsInfo::getVcpus() const
{
    return vcpus_;
}

void MysqlFlavorsInfo::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool MysqlFlavorsInfo::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void MysqlFlavorsInfo::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string MysqlFlavorsInfo::getRam() const
{
    return ram_;
}

void MysqlFlavorsInfo::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool MysqlFlavorsInfo::ramIsSet() const
{
    return ramIsSet_;
}

void MysqlFlavorsInfo::unsetram()
{
    ramIsSet_ = false;
}

std::string MysqlFlavorsInfo::getType() const
{
    return type_;
}

void MysqlFlavorsInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlFlavorsInfo::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlFlavorsInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string MysqlFlavorsInfo::getId() const
{
    return id_;
}

void MysqlFlavorsInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlFlavorsInfo::idIsSet() const
{
    return idIsSet_;
}

void MysqlFlavorsInfo::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlFlavorsInfo::getSpecCode() const
{
    return specCode_;
}

void MysqlFlavorsInfo::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool MysqlFlavorsInfo::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void MysqlFlavorsInfo::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string MysqlFlavorsInfo::getVersionName() const
{
    return versionName_;
}

void MysqlFlavorsInfo::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool MysqlFlavorsInfo::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void MysqlFlavorsInfo::unsetversionName()
{
    versionNameIsSet_ = false;
}

std::string MysqlFlavorsInfo::getInstanceMode() const
{
    return instanceMode_;
}

void MysqlFlavorsInfo::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool MysqlFlavorsInfo::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void MysqlFlavorsInfo::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::map<std::string, std::string>& MysqlFlavorsInfo::getAzStatus()
{
    return azStatus_;
}

void MysqlFlavorsInfo::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool MysqlFlavorsInfo::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void MysqlFlavorsInfo::unsetazStatus()
{
    azStatusIsSet_ = false;
}

}
}
}
}
}


