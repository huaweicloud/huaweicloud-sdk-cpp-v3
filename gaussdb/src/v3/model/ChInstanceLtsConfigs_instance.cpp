

#include "huaweicloud/gaussdb/v3/model/ChInstanceLtsConfigs_instance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChInstanceLtsConfigs_instance::ChInstanceLtsConfigs_instance()
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

ChInstanceLtsConfigs_instance::~ChInstanceLtsConfigs_instance() = default;

void ChInstanceLtsConfigs_instance::validate()
{
}

web::json::value ChInstanceLtsConfigs_instance::toJson() const
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
bool ChInstanceLtsConfigs_instance::fromJson(const web::json::value& val)
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


std::string ChInstanceLtsConfigs_instance::getId() const
{
    return id_;
}

void ChInstanceLtsConfigs_instance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChInstanceLtsConfigs_instance::idIsSet() const
{
    return idIsSet_;
}

void ChInstanceLtsConfigs_instance::unsetid()
{
    idIsSet_ = false;
}

std::string ChInstanceLtsConfigs_instance::getName() const
{
    return name_;
}

void ChInstanceLtsConfigs_instance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChInstanceLtsConfigs_instance::nameIsSet() const
{
    return nameIsSet_;
}

void ChInstanceLtsConfigs_instance::unsetname()
{
    nameIsSet_ = false;
}

std::string ChInstanceLtsConfigs_instance::getMode() const
{
    return mode_;
}

void ChInstanceLtsConfigs_instance::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ChInstanceLtsConfigs_instance::modeIsSet() const
{
    return modeIsSet_;
}

void ChInstanceLtsConfigs_instance::unsetmode()
{
    modeIsSet_ = false;
}

std::string ChInstanceLtsConfigs_instance::getEngineName() const
{
    return engineName_;
}

void ChInstanceLtsConfigs_instance::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ChInstanceLtsConfigs_instance::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ChInstanceLtsConfigs_instance::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ChInstanceLtsConfigs_instance::getEngineVersion() const
{
    return engineVersion_;
}

void ChInstanceLtsConfigs_instance::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool ChInstanceLtsConfigs_instance::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void ChInstanceLtsConfigs_instance::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string ChInstanceLtsConfigs_instance::getStatus() const
{
    return status_;
}

void ChInstanceLtsConfigs_instance::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChInstanceLtsConfigs_instance::statusIsSet() const
{
    return statusIsSet_;
}

void ChInstanceLtsConfigs_instance::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ChInstanceLtsConfigs_instance::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChInstanceLtsConfigs_instance::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChInstanceLtsConfigs_instance::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChInstanceLtsConfigs_instance::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ChInstanceLtsConfigs_instance::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void ChInstanceLtsConfigs_instance::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool ChInstanceLtsConfigs_instance::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void ChInstanceLtsConfigs_instance::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

}
}
}
}
}


