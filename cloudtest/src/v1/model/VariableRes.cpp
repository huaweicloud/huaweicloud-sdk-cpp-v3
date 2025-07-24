

#include "huaweicloud/cloudtest/v1/model/VariableRes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




VariableRes::VariableRes()
{
    byOrder_ = 0;
    byOrderIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    createTimeStamp_ = 0L;
    createTimeStampIsSet_ = false;
    createTimeString_ = "";
    createTimeStringIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    currentPermission_ = "";
    currentPermissionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    dynamicParamFlag_ = false;
    dynamicParamFlagIsSet_ = false;
    functionParams_ = "";
    functionParamsIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    isSensitiveInfo_ = false;
    isSensitiveInfoIsSet_ = false;
    isSensitiveModified_ = false;
    isSensitiveModifiedIsSet_ = false;
    locked_ = 0;
    lockedIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeType_ = 0;
    nodeTypeIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    parentNodeId_ = "";
    parentNodeIdIsSet_ = false;
    property_ = "";
    propertyIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    sensitiveInfoSetterTime_ = "";
    sensitiveInfoSetterTimeIsSet_ = false;
    sensitiveInfoSetterUser_ = "";
    sensitiveInfoSetterUserIsSet_ = false;
    sourceId_ = "";
    sourceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    updateTimeStamp_ = 0L;
    updateTimeStampIsSet_ = false;
    updateTimeString_ = "";
    updateTimeStringIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
    variableType_ = 0;
    variableTypeIsSet_ = false;
}

VariableRes::~VariableRes() = default;

void VariableRes::validate()
{
}

web::json::value VariableRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(byOrderIsSet_) {
        val[utility::conversions::to_string_t("by_order")] = ModelBase::toJson(byOrder_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("create_time_stamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(createTimeStringIsSet_) {
        val[utility::conversions::to_string_t("create_time_string")] = ModelBase::toJson(createTimeString_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(currentPermissionIsSet_) {
        val[utility::conversions::to_string_t("currentPermission")] = ModelBase::toJson(currentPermission_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(dynamicParamFlagIsSet_) {
        val[utility::conversions::to_string_t("dynamicParamFlag")] = ModelBase::toJson(dynamicParamFlag_);
    }
    if(functionParamsIsSet_) {
        val[utility::conversions::to_string_t("functionParams")] = ModelBase::toJson(functionParams_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("groupId")] = ModelBase::toJson(groupId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isSensitiveInfoIsSet_) {
        val[utility::conversions::to_string_t("isSensitiveInfo")] = ModelBase::toJson(isSensitiveInfo_);
    }
    if(isSensitiveModifiedIsSet_) {
        val[utility::conversions::to_string_t("isSensitiveModified")] = ModelBase::toJson(isSensitiveModified_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(parentNodeIdIsSet_) {
        val[utility::conversions::to_string_t("parent_node_id")] = ModelBase::toJson(parentNodeId_);
    }
    if(propertyIsSet_) {
        val[utility::conversions::to_string_t("property")] = ModelBase::toJson(property_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(sensitiveInfoSetterTimeIsSet_) {
        val[utility::conversions::to_string_t("sensitiveInfoSetterTime")] = ModelBase::toJson(sensitiveInfoSetterTime_);
    }
    if(sensitiveInfoSetterUserIsSet_) {
        val[utility::conversions::to_string_t("sensitiveInfoSetterUser")] = ModelBase::toJson(sensitiveInfoSetterUser_);
    }
    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("sourceId")] = ModelBase::toJson(sourceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimeStampIsSet_) {
        val[utility::conversions::to_string_t("update_time_stamp")] = ModelBase::toJson(updateTimeStamp_);
    }
    if(updateTimeStringIsSet_) {
        val[utility::conversions::to_string_t("update_time_string")] = ModelBase::toJson(updateTimeString_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }
    if(variableTypeIsSet_) {
        val[utility::conversions::to_string_t("variableType")] = ModelBase::toJson(variableType_);
    }

    return val;
}
bool VariableRes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("by_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("by_order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setByOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currentPermission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentPermission"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentPermission(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dynamicParamFlag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dynamicParamFlag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDynamicParamFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("functionParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functionParams"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("isSensitiveInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSensitiveInfo"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSensitiveInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSensitiveModified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSensitiveModified"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSensitiveModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocked(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("property"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("property"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperty(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sensitiveInfoSetterTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sensitiveInfoSetterTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSensitiveInfoSetterTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sensitiveInfoSetterUser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sensitiveInfoSetterUser"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSensitiveInfoSetterUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sourceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sourceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variableType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variableType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariableType(refVal);
        }
    }
    return ok;
}


int32_t VariableRes::getByOrder() const
{
    return byOrder_;
}

void VariableRes::setByOrder(int32_t value)
{
    byOrder_ = value;
    byOrderIsSet_ = true;
}

bool VariableRes::byOrderIsSet() const
{
    return byOrderIsSet_;
}

void VariableRes::unsetbyOrder()
{
    byOrderIsSet_ = false;
}

std::string VariableRes::getCategory() const
{
    return category_;
}

void VariableRes::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool VariableRes::categoryIsSet() const
{
    return categoryIsSet_;
}

void VariableRes::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string VariableRes::getCreateTime() const
{
    return createTime_;
}

void VariableRes::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool VariableRes::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void VariableRes::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t VariableRes::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void VariableRes::setCreateTimeStamp(int64_t value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool VariableRes::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void VariableRes::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

std::string VariableRes::getCreateTimeString() const
{
    return createTimeString_;
}

void VariableRes::setCreateTimeString(const std::string& value)
{
    createTimeString_ = value;
    createTimeStringIsSet_ = true;
}

bool VariableRes::createTimeStringIsSet() const
{
    return createTimeStringIsSet_;
}

void VariableRes::unsetcreateTimeString()
{
    createTimeStringIsSet_ = false;
}

std::string VariableRes::getCreateUser() const
{
    return createUser_;
}

void VariableRes::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool VariableRes::createUserIsSet() const
{
    return createUserIsSet_;
}

void VariableRes::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string VariableRes::getCurrentPermission() const
{
    return currentPermission_;
}

void VariableRes::setCurrentPermission(const std::string& value)
{
    currentPermission_ = value;
    currentPermissionIsSet_ = true;
}

bool VariableRes::currentPermissionIsSet() const
{
    return currentPermissionIsSet_;
}

void VariableRes::unsetcurrentPermission()
{
    currentPermissionIsSet_ = false;
}

std::string VariableRes::getDescription() const
{
    return description_;
}

void VariableRes::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VariableRes::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VariableRes::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool VariableRes::isDynamicParamFlag() const
{
    return dynamicParamFlag_;
}

void VariableRes::setDynamicParamFlag(bool value)
{
    dynamicParamFlag_ = value;
    dynamicParamFlagIsSet_ = true;
}

bool VariableRes::dynamicParamFlagIsSet() const
{
    return dynamicParamFlagIsSet_;
}

void VariableRes::unsetdynamicParamFlag()
{
    dynamicParamFlagIsSet_ = false;
}

std::string VariableRes::getFunctionParams() const
{
    return functionParams_;
}

void VariableRes::setFunctionParams(const std::string& value)
{
    functionParams_ = value;
    functionParamsIsSet_ = true;
}

bool VariableRes::functionParamsIsSet() const
{
    return functionParamsIsSet_;
}

void VariableRes::unsetfunctionParams()
{
    functionParamsIsSet_ = false;
}

std::string VariableRes::getGroupId() const
{
    return groupId_;
}

void VariableRes::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool VariableRes::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void VariableRes::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string VariableRes::getId() const
{
    return id_;
}

void VariableRes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VariableRes::idIsSet() const
{
    return idIsSet_;
}

void VariableRes::unsetid()
{
    idIsSet_ = false;
}

bool VariableRes::isIsSensitiveInfo() const
{
    return isSensitiveInfo_;
}

void VariableRes::setIsSensitiveInfo(bool value)
{
    isSensitiveInfo_ = value;
    isSensitiveInfoIsSet_ = true;
}

bool VariableRes::isSensitiveInfoIsSet() const
{
    return isSensitiveInfoIsSet_;
}

void VariableRes::unsetisSensitiveInfo()
{
    isSensitiveInfoIsSet_ = false;
}

bool VariableRes::isIsSensitiveModified() const
{
    return isSensitiveModified_;
}

void VariableRes::setIsSensitiveModified(bool value)
{
    isSensitiveModified_ = value;
    isSensitiveModifiedIsSet_ = true;
}

bool VariableRes::isSensitiveModifiedIsSet() const
{
    return isSensitiveModifiedIsSet_;
}

void VariableRes::unsetisSensitiveModified()
{
    isSensitiveModifiedIsSet_ = false;
}

int32_t VariableRes::getLocked() const
{
    return locked_;
}

void VariableRes::setLocked(int32_t value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool VariableRes::lockedIsSet() const
{
    return lockedIsSet_;
}

void VariableRes::unsetlocked()
{
    lockedIsSet_ = false;
}

std::string VariableRes::getName() const
{
    return name_;
}

void VariableRes::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VariableRes::nameIsSet() const
{
    return nameIsSet_;
}

void VariableRes::unsetname()
{
    nameIsSet_ = false;
}

std::string VariableRes::getNodeId() const
{
    return nodeId_;
}

void VariableRes::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool VariableRes::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void VariableRes::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t VariableRes::getNodeType() const
{
    return nodeType_;
}

void VariableRes::setNodeType(int32_t value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool VariableRes::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void VariableRes::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::string VariableRes::getParentId() const
{
    return parentId_;
}

void VariableRes::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool VariableRes::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void VariableRes::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string VariableRes::getParentNodeId() const
{
    return parentNodeId_;
}

void VariableRes::setParentNodeId(const std::string& value)
{
    parentNodeId_ = value;
    parentNodeIdIsSet_ = true;
}

bool VariableRes::parentNodeIdIsSet() const
{
    return parentNodeIdIsSet_;
}

void VariableRes::unsetparentNodeId()
{
    parentNodeIdIsSet_ = false;
}

std::string VariableRes::getProperty() const
{
    return property_;
}

void VariableRes::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool VariableRes::propertyIsSet() const
{
    return propertyIsSet_;
}

void VariableRes::unsetproperty()
{
    propertyIsSet_ = false;
}

std::string VariableRes::getRegion() const
{
    return region_;
}

void VariableRes::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool VariableRes::regionIsSet() const
{
    return regionIsSet_;
}

void VariableRes::unsetregion()
{
    regionIsSet_ = false;
}

std::string VariableRes::getSensitiveInfoSetterTime() const
{
    return sensitiveInfoSetterTime_;
}

void VariableRes::setSensitiveInfoSetterTime(const std::string& value)
{
    sensitiveInfoSetterTime_ = value;
    sensitiveInfoSetterTimeIsSet_ = true;
}

bool VariableRes::sensitiveInfoSetterTimeIsSet() const
{
    return sensitiveInfoSetterTimeIsSet_;
}

void VariableRes::unsetsensitiveInfoSetterTime()
{
    sensitiveInfoSetterTimeIsSet_ = false;
}

std::string VariableRes::getSensitiveInfoSetterUser() const
{
    return sensitiveInfoSetterUser_;
}

void VariableRes::setSensitiveInfoSetterUser(const std::string& value)
{
    sensitiveInfoSetterUser_ = value;
    sensitiveInfoSetterUserIsSet_ = true;
}

bool VariableRes::sensitiveInfoSetterUserIsSet() const
{
    return sensitiveInfoSetterUserIsSet_;
}

void VariableRes::unsetsensitiveInfoSetterUser()
{
    sensitiveInfoSetterUserIsSet_ = false;
}

std::string VariableRes::getSourceId() const
{
    return sourceId_;
}

void VariableRes::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool VariableRes::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void VariableRes::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string VariableRes::getType() const
{
    return type_;
}

void VariableRes::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool VariableRes::typeIsSet() const
{
    return typeIsSet_;
}

void VariableRes::unsettype()
{
    typeIsSet_ = false;
}

std::string VariableRes::getUpdateTime() const
{
    return updateTime_;
}

void VariableRes::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool VariableRes::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void VariableRes::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t VariableRes::getUpdateTimeStamp() const
{
    return updateTimeStamp_;
}

void VariableRes::setUpdateTimeStamp(int64_t value)
{
    updateTimeStamp_ = value;
    updateTimeStampIsSet_ = true;
}

bool VariableRes::updateTimeStampIsSet() const
{
    return updateTimeStampIsSet_;
}

void VariableRes::unsetupdateTimeStamp()
{
    updateTimeStampIsSet_ = false;
}

std::string VariableRes::getUpdateTimeString() const
{
    return updateTimeString_;
}

void VariableRes::setUpdateTimeString(const std::string& value)
{
    updateTimeString_ = value;
    updateTimeStringIsSet_ = true;
}

bool VariableRes::updateTimeStringIsSet() const
{
    return updateTimeStringIsSet_;
}

void VariableRes::unsetupdateTimeString()
{
    updateTimeStringIsSet_ = false;
}

std::string VariableRes::getUpdateUser() const
{
    return updateUser_;
}

void VariableRes::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool VariableRes::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void VariableRes::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

int32_t VariableRes::getVariableType() const
{
    return variableType_;
}

void VariableRes::setVariableType(int32_t value)
{
    variableType_ = value;
    variableTypeIsSet_ = true;
}

bool VariableRes::variableTypeIsSet() const
{
    return variableTypeIsSet_;
}

void VariableRes::unsetvariableType()
{
    variableTypeIsSet_ = false;
}

}
}
}
}
}


