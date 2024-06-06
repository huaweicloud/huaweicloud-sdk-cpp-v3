

#include "huaweicloud/gaussdb/v3/model/InstanceLtsBasicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




InstanceLtsBasicInfo::InstanceLtsBasicInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
}

InstanceLtsBasicInfo::~InstanceLtsBasicInfo() = default;

void InstanceLtsBasicInfo::validate()
{
}

web::json::value InstanceLtsBasicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }

    return val;
}
bool InstanceLtsBasicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectName(refVal);
        }
    }
    return ok;
}


std::string InstanceLtsBasicInfo::getId() const
{
    return id_;
}

void InstanceLtsBasicInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InstanceLtsBasicInfo::idIsSet() const
{
    return idIsSet_;
}

void InstanceLtsBasicInfo::unsetid()
{
    idIsSet_ = false;
}

std::string InstanceLtsBasicInfo::getName() const
{
    return name_;
}

void InstanceLtsBasicInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstanceLtsBasicInfo::nameIsSet() const
{
    return nameIsSet_;
}

void InstanceLtsBasicInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string InstanceLtsBasicInfo::getMode() const
{
    return mode_;
}

void InstanceLtsBasicInfo::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool InstanceLtsBasicInfo::modeIsSet() const
{
    return modeIsSet_;
}

void InstanceLtsBasicInfo::unsetmode()
{
    modeIsSet_ = false;
}

std::string InstanceLtsBasicInfo::getEngineName() const
{
    return engineName_;
}

void InstanceLtsBasicInfo::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool InstanceLtsBasicInfo::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void InstanceLtsBasicInfo::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string InstanceLtsBasicInfo::getEngineVersion() const
{
    return engineVersion_;
}

void InstanceLtsBasicInfo::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool InstanceLtsBasicInfo::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void InstanceLtsBasicInfo::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string InstanceLtsBasicInfo::getStatus() const
{
    return status_;
}

void InstanceLtsBasicInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceLtsBasicInfo::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceLtsBasicInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InstanceLtsBasicInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void InstanceLtsBasicInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool InstanceLtsBasicInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void InstanceLtsBasicInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string InstanceLtsBasicInfo::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void InstanceLtsBasicInfo::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool InstanceLtsBasicInfo::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void InstanceLtsBasicInfo::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

}
}
}
}
}


