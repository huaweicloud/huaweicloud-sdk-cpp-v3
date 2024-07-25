

#include "huaweicloud/rds/v3/model/InstanceLtsBasicInfoResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceLtsBasicInfoResp::InstanceLtsBasicInfoResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    engineCategory_ = "";
    engineCategoryIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    actionsIsSet_ = false;
}

InstanceLtsBasicInfoResp::~InstanceLtsBasicInfoResp() = default;

void InstanceLtsBasicInfoResp::validate()
{
}

web::json::value InstanceLtsBasicInfoResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(engineCategoryIsSet_) {
        val[utility::conversions::to_string_t("engine_category")] = ModelBase::toJson(engineCategory_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool InstanceLtsBasicInfoResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("engine_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


std::string InstanceLtsBasicInfoResp::getId() const
{
    return id_;
}

void InstanceLtsBasicInfoResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InstanceLtsBasicInfoResp::idIsSet() const
{
    return idIsSet_;
}

void InstanceLtsBasicInfoResp::unsetid()
{
    idIsSet_ = false;
}

std::string InstanceLtsBasicInfoResp::getName() const
{
    return name_;
}

void InstanceLtsBasicInfoResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstanceLtsBasicInfoResp::nameIsSet() const
{
    return nameIsSet_;
}

void InstanceLtsBasicInfoResp::unsetname()
{
    nameIsSet_ = false;
}

std::string InstanceLtsBasicInfoResp::getEngineName() const
{
    return engineName_;
}

void InstanceLtsBasicInfoResp::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool InstanceLtsBasicInfoResp::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void InstanceLtsBasicInfoResp::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string InstanceLtsBasicInfoResp::getEngineVersion() const
{
    return engineVersion_;
}

void InstanceLtsBasicInfoResp::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool InstanceLtsBasicInfoResp::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void InstanceLtsBasicInfoResp::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string InstanceLtsBasicInfoResp::getEngineCategory() const
{
    return engineCategory_;
}

void InstanceLtsBasicInfoResp::setEngineCategory(const std::string& value)
{
    engineCategory_ = value;
    engineCategoryIsSet_ = true;
}

bool InstanceLtsBasicInfoResp::engineCategoryIsSet() const
{
    return engineCategoryIsSet_;
}

void InstanceLtsBasicInfoResp::unsetengineCategory()
{
    engineCategoryIsSet_ = false;
}

std::string InstanceLtsBasicInfoResp::getStatus() const
{
    return status_;
}

void InstanceLtsBasicInfoResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceLtsBasicInfoResp::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceLtsBasicInfoResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InstanceLtsBasicInfoResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void InstanceLtsBasicInfoResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool InstanceLtsBasicInfoResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void InstanceLtsBasicInfoResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& InstanceLtsBasicInfoResp::getActions()
{
    return actions_;
}

void InstanceLtsBasicInfoResp::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool InstanceLtsBasicInfoResp::actionsIsSet() const
{
    return actionsIsSet_;
}

void InstanceLtsBasicInfoResp::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


