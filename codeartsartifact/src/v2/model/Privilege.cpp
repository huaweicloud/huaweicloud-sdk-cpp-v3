

#include "huaweicloud/codeartsartifact/v2/model/Privilege.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




Privilege::Privilege()
{
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
    operations_ = "";
    operationsIsSet_ = false;
    operationsIndexIsSet_ = false;
}

Privilege::~Privilege() = default;

void Privilege::validate()
{
}

web::json::value Privilege::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }
    if(operationsIndexIsSet_) {
        val[utility::conversions::to_string_t("operations_index")] = ModelBase::toJson(operationsIndex_);
    }

    return val;
}
bool Privilege::fromJson(const web::json::value& val)
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
    return ok;
}


std::string Privilege::getRoleId() const
{
    return roleId_;
}

void Privilege::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool Privilege::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void Privilege::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string Privilege::getRoleName() const
{
    return roleName_;
}

void Privilege::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool Privilege::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void Privilege::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string Privilege::getRoleChineseName() const
{
    return roleChineseName_;
}

void Privilege::setRoleChineseName(const std::string& value)
{
    roleChineseName_ = value;
    roleChineseNameIsSet_ = true;
}

bool Privilege::roleChineseNameIsSet() const
{
    return roleChineseNameIsSet_;
}

void Privilege::unsetroleChineseName()
{
    roleChineseNameIsSet_ = false;
}

std::string Privilege::getProjectId() const
{
    return projectId_;
}

void Privilege::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Privilege::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Privilege::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Privilege::getAreaServiceId() const
{
    return areaServiceId_;
}

void Privilege::setAreaServiceId(const std::string& value)
{
    areaServiceId_ = value;
    areaServiceIdIsSet_ = true;
}

bool Privilege::areaServiceIdIsSet() const
{
    return areaServiceIdIsSet_;
}

void Privilege::unsetareaServiceId()
{
    areaServiceIdIsSet_ = false;
}

std::string Privilege::getGrantedObjectPath() const
{
    return grantedObjectPath_;
}

void Privilege::setGrantedObjectPath(const std::string& value)
{
    grantedObjectPath_ = value;
    grantedObjectPathIsSet_ = true;
}

bool Privilege::grantedObjectPathIsSet() const
{
    return grantedObjectPathIsSet_;
}

void Privilege::unsetgrantedObjectPath()
{
    grantedObjectPathIsSet_ = false;
}

std::string Privilege::getGrantedObjectTypeId() const
{
    return grantedObjectTypeId_;
}

void Privilege::setGrantedObjectTypeId(const std::string& value)
{
    grantedObjectTypeId_ = value;
    grantedObjectTypeIdIsSet_ = true;
}

bool Privilege::grantedObjectTypeIdIsSet() const
{
    return grantedObjectTypeIdIsSet_;
}

void Privilege::unsetgrantedObjectTypeId()
{
    grantedObjectTypeIdIsSet_ = false;
}

std::string Privilege::getOperations() const
{
    return operations_;
}

void Privilege::setOperations(const std::string& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool Privilege::operationsIsSet() const
{
    return operationsIsSet_;
}

void Privilege::unsetoperations()
{
    operationsIsSet_ = false;
}

std::vector<int32_t>& Privilege::getOperationsIndex()
{
    return operationsIndex_;
}

void Privilege::setOperationsIndex(std::vector<int32_t> value)
{
    operationsIndex_ = value;
    operationsIndexIsSet_ = true;
}

bool Privilege::operationsIndexIsSet() const
{
    return operationsIndexIsSet_;
}

void Privilege::unsetoperationsIndex()
{
    operationsIndexIsSet_ = false;
}

}
}
}
}
}


