

#include "huaweicloud/codeartsdeploy/v2/model/DeployV2OperationsDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeployV2OperationsDO::DeployV2OperationsDO()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    params_ = "";
    paramsIsSet_ = false;
    entrance_ = "";
    entranceIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
}

DeployV2OperationsDO::~DeployV2OperationsDO() = default;

void DeployV2OperationsDO::validate()
{
}

web::json::value DeployV2OperationsDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }
    if(entranceIsSet_) {
        val[utility::conversions::to_string_t("entrance")] = ModelBase::toJson(entrance_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }

    return val;
}
bool DeployV2OperationsDO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entrance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entrance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntrance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    return ok;
}


std::string DeployV2OperationsDO::getId() const
{
    return id_;
}

void DeployV2OperationsDO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeployV2OperationsDO::idIsSet() const
{
    return idIsSet_;
}

void DeployV2OperationsDO::unsetid()
{
    idIsSet_ = false;
}

std::string DeployV2OperationsDO::getName() const
{
    return name_;
}

void DeployV2OperationsDO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeployV2OperationsDO::nameIsSet() const
{
    return nameIsSet_;
}

void DeployV2OperationsDO::unsetname()
{
    nameIsSet_ = false;
}

std::string DeployV2OperationsDO::getDescription() const
{
    return description_;
}

void DeployV2OperationsDO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DeployV2OperationsDO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DeployV2OperationsDO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DeployV2OperationsDO::getCode() const
{
    return code_;
}

void DeployV2OperationsDO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DeployV2OperationsDO::codeIsSet() const
{
    return codeIsSet_;
}

void DeployV2OperationsDO::unsetcode()
{
    codeIsSet_ = false;
}

std::string DeployV2OperationsDO::getParams() const
{
    return params_;
}

void DeployV2OperationsDO::setParams(const std::string& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool DeployV2OperationsDO::paramsIsSet() const
{
    return paramsIsSet_;
}

void DeployV2OperationsDO::unsetparams()
{
    paramsIsSet_ = false;
}

std::string DeployV2OperationsDO::getEntrance() const
{
    return entrance_;
}

void DeployV2OperationsDO::setEntrance(const std::string& value)
{
    entrance_ = value;
    entranceIsSet_ = true;
}

bool DeployV2OperationsDO::entranceIsSet() const
{
    return entranceIsSet_;
}

void DeployV2OperationsDO::unsetentrance()
{
    entranceIsSet_ = false;
}

std::string DeployV2OperationsDO::getVersion() const
{
    return version_;
}

void DeployV2OperationsDO::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DeployV2OperationsDO::versionIsSet() const
{
    return versionIsSet_;
}

void DeployV2OperationsDO::unsetversion()
{
    versionIsSet_ = false;
}

std::string DeployV2OperationsDO::getModuleId() const
{
    return moduleId_;
}

void DeployV2OperationsDO::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool DeployV2OperationsDO::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void DeployV2OperationsDO::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

}
}
}
}
}


