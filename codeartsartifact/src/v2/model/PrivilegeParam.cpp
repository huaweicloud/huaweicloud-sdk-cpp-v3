

#include "huaweicloud/codeartsartifact/v2/model/PrivilegeParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




PrivilegeParam::PrivilegeParam()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    areaServiceId_ = "";
    areaServiceIdIsSet_ = false;
    grantedObjectPath_ = "";
    grantedObjectPathIsSet_ = false;
    grantedObjectTypeId_ = "";
    grantedObjectTypeIdIsSet_ = false;
    operations_ = "";
    operationsIsSet_ = false;
}

PrivilegeParam::~PrivilegeParam() = default;

void PrivilegeParam::validate()
{
}

web::json::value PrivilegeParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(areaServiceIdIsSet_) {
        val[utility::conversions::to_string_t("area_service_id")] = ModelBase::toJson(areaServiceId_);
    }
    if(grantedObjectPathIsSet_) {
        val[utility::conversions::to_string_t("granted_object_path")] = ModelBase::toJson(grantedObjectPath_);
    }
    if(grantedObjectTypeIdIsSet_) {
        val[utility::conversions::to_string_t("granted_object_type_id")] = ModelBase::toJson(grantedObjectTypeId_);
    }
    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }

    return val;
}
bool PrivilegeParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area_service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area_service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAreaServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("granted_object_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("granted_object_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrantedObjectPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("granted_object_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("granted_object_type_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrantedObjectTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperations(refVal);
        }
    }
    return ok;
}


std::string PrivilegeParam::getRoleId() const
{
    return roleId_;
}

void PrivilegeParam::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool PrivilegeParam::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void PrivilegeParam::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string PrivilegeParam::getProjectId() const
{
    return projectId_;
}

void PrivilegeParam::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PrivilegeParam::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PrivilegeParam::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PrivilegeParam::getAreaServiceId() const
{
    return areaServiceId_;
}

void PrivilegeParam::setAreaServiceId(const std::string& value)
{
    areaServiceId_ = value;
    areaServiceIdIsSet_ = true;
}

bool PrivilegeParam::areaServiceIdIsSet() const
{
    return areaServiceIdIsSet_;
}

void PrivilegeParam::unsetareaServiceId()
{
    areaServiceIdIsSet_ = false;
}

std::string PrivilegeParam::getGrantedObjectPath() const
{
    return grantedObjectPath_;
}

void PrivilegeParam::setGrantedObjectPath(const std::string& value)
{
    grantedObjectPath_ = value;
    grantedObjectPathIsSet_ = true;
}

bool PrivilegeParam::grantedObjectPathIsSet() const
{
    return grantedObjectPathIsSet_;
}

void PrivilegeParam::unsetgrantedObjectPath()
{
    grantedObjectPathIsSet_ = false;
}

std::string PrivilegeParam::getGrantedObjectTypeId() const
{
    return grantedObjectTypeId_;
}

void PrivilegeParam::setGrantedObjectTypeId(const std::string& value)
{
    grantedObjectTypeId_ = value;
    grantedObjectTypeIdIsSet_ = true;
}

bool PrivilegeParam::grantedObjectTypeIdIsSet() const
{
    return grantedObjectTypeIdIsSet_;
}

void PrivilegeParam::unsetgrantedObjectTypeId()
{
    grantedObjectTypeIdIsSet_ = false;
}

std::string PrivilegeParam::getOperations() const
{
    return operations_;
}

void PrivilegeParam::setOperations(const std::string& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool PrivilegeParam::operationsIsSet() const
{
    return operationsIsSet_;
}

void PrivilegeParam::unsetoperations()
{
    operationsIsSet_ = false;
}

}
}
}
}
}


