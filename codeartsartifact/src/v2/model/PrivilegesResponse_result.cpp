

#include "huaweicloud/codeartsartifact/v2/model/PrivilegesResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




PrivilegesResponse_result::PrivilegesResponse_result()
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

PrivilegesResponse_result::~PrivilegesResponse_result() = default;

void PrivilegesResponse_result::validate()
{
}

web::json::value PrivilegesResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }
    if(operationsIndexIsSet_) {
        val[utility::conversions::to_string_t("operationsIndex")] = ModelBase::toJson(operationsIndex_);
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
bool PrivilegesResponse_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operationsIndex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operationsIndex"));
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


std::string PrivilegesResponse_result::getOperations() const
{
    return operations_;
}

void PrivilegesResponse_result::setOperations(const std::string& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool PrivilegesResponse_result::operationsIsSet() const
{
    return operationsIsSet_;
}

void PrivilegesResponse_result::unsetoperations()
{
    operationsIsSet_ = false;
}

std::vector<int32_t>& PrivilegesResponse_result::getOperationsIndex()
{
    return operationsIndex_;
}

void PrivilegesResponse_result::setOperationsIndex(std::vector<int32_t> value)
{
    operationsIndex_ = value;
    operationsIndexIsSet_ = true;
}

bool PrivilegesResponse_result::operationsIndexIsSet() const
{
    return operationsIndexIsSet_;
}

void PrivilegesResponse_result::unsetoperationsIndex()
{
    operationsIndexIsSet_ = false;
}

std::string PrivilegesResponse_result::getRoleId() const
{
    return roleId_;
}

void PrivilegesResponse_result::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool PrivilegesResponse_result::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void PrivilegesResponse_result::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string PrivilegesResponse_result::getRoleName() const
{
    return roleName_;
}

void PrivilegesResponse_result::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool PrivilegesResponse_result::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void PrivilegesResponse_result::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string PrivilegesResponse_result::getRoleChineseName() const
{
    return roleChineseName_;
}

void PrivilegesResponse_result::setRoleChineseName(const std::string& value)
{
    roleChineseName_ = value;
    roleChineseNameIsSet_ = true;
}

bool PrivilegesResponse_result::roleChineseNameIsSet() const
{
    return roleChineseNameIsSet_;
}

void PrivilegesResponse_result::unsetroleChineseName()
{
    roleChineseNameIsSet_ = false;
}

std::string PrivilegesResponse_result::getProjectId() const
{
    return projectId_;
}

void PrivilegesResponse_result::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PrivilegesResponse_result::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PrivilegesResponse_result::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PrivilegesResponse_result::getAreaServiceId() const
{
    return areaServiceId_;
}

void PrivilegesResponse_result::setAreaServiceId(const std::string& value)
{
    areaServiceId_ = value;
    areaServiceIdIsSet_ = true;
}

bool PrivilegesResponse_result::areaServiceIdIsSet() const
{
    return areaServiceIdIsSet_;
}

void PrivilegesResponse_result::unsetareaServiceId()
{
    areaServiceIdIsSet_ = false;
}

std::string PrivilegesResponse_result::getGrantedObjectPath() const
{
    return grantedObjectPath_;
}

void PrivilegesResponse_result::setGrantedObjectPath(const std::string& value)
{
    grantedObjectPath_ = value;
    grantedObjectPathIsSet_ = true;
}

bool PrivilegesResponse_result::grantedObjectPathIsSet() const
{
    return grantedObjectPathIsSet_;
}

void PrivilegesResponse_result::unsetgrantedObjectPath()
{
    grantedObjectPathIsSet_ = false;
}

std::string PrivilegesResponse_result::getGrantedObjectTypeId() const
{
    return grantedObjectTypeId_;
}

void PrivilegesResponse_result::setGrantedObjectTypeId(const std::string& value)
{
    grantedObjectTypeId_ = value;
    grantedObjectTypeIdIsSet_ = true;
}

bool PrivilegesResponse_result::grantedObjectTypeIdIsSet() const
{
    return grantedObjectTypeIdIsSet_;
}

void PrivilegesResponse_result::unsetgrantedObjectTypeId()
{
    grantedObjectTypeIdIsSet_ = false;
}

}
}
}
}
}


