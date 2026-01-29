

#include "huaweicloud/codeartsartifact/v2/model/PrivilegesResponseV5_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




PrivilegesResponseV5_result::PrivilegesResponseV5_result()
{
    operations_ = "";
    operationsIsSet_ = false;
    operationsIndexIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    roleChineseName_ = "";
    roleChineseNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    areaServiceId_ = "";
    areaServiceIdIsSet_ = false;
    grantedObjectPath_ = "";
    grantedObjectPathIsSet_ = false;
    grantedObjectTypeId_ = "";
    grantedObjectTypeIdIsSet_ = false;
}

PrivilegesResponseV5_result::~PrivilegesResponseV5_result() = default;

void PrivilegesResponseV5_result::validate()
{
}

web::json::value PrivilegesResponseV5_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }
    if(operationsIndexIsSet_) {
        val[utility::conversions::to_string_t("operations_index")] = ModelBase::toJson(operationsIndex_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(roleChineseNameIsSet_) {
        val[utility::conversions::to_string_t("role_chinese_name")] = ModelBase::toJson(roleChineseName_);
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

    return val;
}
bool PrivilegesResponseV5_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operations_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations_index"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationsIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_chinese_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_chinese_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleChineseName(refVal);
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
    return ok;
}


std::string PrivilegesResponseV5_result::getOperations() const
{
    return operations_;
}

void PrivilegesResponseV5_result::setOperations(const std::string& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool PrivilegesResponseV5_result::operationsIsSet() const
{
    return operationsIsSet_;
}

void PrivilegesResponseV5_result::unsetoperations()
{
    operationsIsSet_ = false;
}

std::vector<int32_t>& PrivilegesResponseV5_result::getOperationsIndex()
{
    return operationsIndex_;
}

void PrivilegesResponseV5_result::setOperationsIndex(std::vector<int32_t> value)
{
    operationsIndex_ = value;
    operationsIndexIsSet_ = true;
}

bool PrivilegesResponseV5_result::operationsIndexIsSet() const
{
    return operationsIndexIsSet_;
}

void PrivilegesResponseV5_result::unsetoperationsIndex()
{
    operationsIndexIsSet_ = false;
}

std::string PrivilegesResponseV5_result::getRoleId() const
{
    return roleId_;
}

void PrivilegesResponseV5_result::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool PrivilegesResponseV5_result::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void PrivilegesResponseV5_result::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string PrivilegesResponseV5_result::getRoleName() const
{
    return roleName_;
}

void PrivilegesResponseV5_result::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool PrivilegesResponseV5_result::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void PrivilegesResponseV5_result::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string PrivilegesResponseV5_result::getRoleChineseName() const
{
    return roleChineseName_;
}

void PrivilegesResponseV5_result::setRoleChineseName(const std::string& value)
{
    roleChineseName_ = value;
    roleChineseNameIsSet_ = true;
}

bool PrivilegesResponseV5_result::roleChineseNameIsSet() const
{
    return roleChineseNameIsSet_;
}

void PrivilegesResponseV5_result::unsetroleChineseName()
{
    roleChineseNameIsSet_ = false;
}

std::string PrivilegesResponseV5_result::getProjectId() const
{
    return projectId_;
}

void PrivilegesResponseV5_result::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PrivilegesResponseV5_result::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PrivilegesResponseV5_result::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PrivilegesResponseV5_result::getAreaServiceId() const
{
    return areaServiceId_;
}

void PrivilegesResponseV5_result::setAreaServiceId(const std::string& value)
{
    areaServiceId_ = value;
    areaServiceIdIsSet_ = true;
}

bool PrivilegesResponseV5_result::areaServiceIdIsSet() const
{
    return areaServiceIdIsSet_;
}

void PrivilegesResponseV5_result::unsetareaServiceId()
{
    areaServiceIdIsSet_ = false;
}

std::string PrivilegesResponseV5_result::getGrantedObjectPath() const
{
    return grantedObjectPath_;
}

void PrivilegesResponseV5_result::setGrantedObjectPath(const std::string& value)
{
    grantedObjectPath_ = value;
    grantedObjectPathIsSet_ = true;
}

bool PrivilegesResponseV5_result::grantedObjectPathIsSet() const
{
    return grantedObjectPathIsSet_;
}

void PrivilegesResponseV5_result::unsetgrantedObjectPath()
{
    grantedObjectPathIsSet_ = false;
}

std::string PrivilegesResponseV5_result::getGrantedObjectTypeId() const
{
    return grantedObjectTypeId_;
}

void PrivilegesResponseV5_result::setGrantedObjectTypeId(const std::string& value)
{
    grantedObjectTypeId_ = value;
    grantedObjectTypeIdIsSet_ = true;
}

bool PrivilegesResponseV5_result::grantedObjectTypeIdIsSet() const
{
    return grantedObjectTypeIdIsSet_;
}

void PrivilegesResponseV5_result::unsetgrantedObjectTypeId()
{
    grantedObjectTypeIdIsSet_ = false;
}

}
}
}
}
}


