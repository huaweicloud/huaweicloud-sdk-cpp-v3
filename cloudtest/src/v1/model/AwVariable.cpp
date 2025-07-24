

#include "huaweicloud/cloudtest/v1/model/AwVariable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AwVariable::AwVariable()
{
    byOrder_ = 0;
    byOrderIsSet_ = false;
    currentPermission_ = "";
    currentPermissionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    dynamicParam_ = "";
    dynamicParamIsSet_ = false;
    dynamicParamFlag_ = false;
    dynamicParamFlagIsSet_ = false;
    functionParams_ = "";
    functionParamsIsSet_ = false;
    functionArg_ = "";
    functionArgIsSet_ = false;
    functionType_ = "";
    functionTypeIsSet_ = false;
    isSensitiveInfo_ = false;
    isSensitiveInfoIsSet_ = false;
    isSensitiveModified_ = false;
    isSensitiveModifiedIsSet_ = false;
    isOutPut_ = false;
    isOutPutIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeType_ = 0;
    nodeTypeIsSet_ = false;
    oldName_ = "";
    oldNameIsSet_ = false;
    parentNodeId_ = "";
    parentNodeIdIsSet_ = false;
    property_ = "";
    propertyIsSet_ = false;
    regex_ = "";
    regexIsSet_ = false;
    sensitiveInfoSetterTime_ = "";
    sensitiveInfoSetterTimeIsSet_ = false;
    sensitiveInfoSetterUser_ = "";
    sensitiveInfoSetterUserIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    variableType_ = 0;
    variableTypeIsSet_ = false;
}

AwVariable::~AwVariable() = default;

void AwVariable::validate()
{
}

web::json::value AwVariable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(byOrderIsSet_) {
        val[utility::conversions::to_string_t("by_order")] = ModelBase::toJson(byOrder_);
    }
    if(currentPermissionIsSet_) {
        val[utility::conversions::to_string_t("currentPermission")] = ModelBase::toJson(currentPermission_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(dynamicParamIsSet_) {
        val[utility::conversions::to_string_t("dynamicParam")] = ModelBase::toJson(dynamicParam_);
    }
    if(dynamicParamFlagIsSet_) {
        val[utility::conversions::to_string_t("dynamicParamFlag")] = ModelBase::toJson(dynamicParamFlag_);
    }
    if(functionParamsIsSet_) {
        val[utility::conversions::to_string_t("functionParams")] = ModelBase::toJson(functionParams_);
    }
    if(functionArgIsSet_) {
        val[utility::conversions::to_string_t("function_arg")] = ModelBase::toJson(functionArg_);
    }
    if(functionTypeIsSet_) {
        val[utility::conversions::to_string_t("function_type")] = ModelBase::toJson(functionType_);
    }
    if(isSensitiveInfoIsSet_) {
        val[utility::conversions::to_string_t("isSensitiveInfo")] = ModelBase::toJson(isSensitiveInfo_);
    }
    if(isSensitiveModifiedIsSet_) {
        val[utility::conversions::to_string_t("isSensitiveModified")] = ModelBase::toJson(isSensitiveModified_);
    }
    if(isOutPutIsSet_) {
        val[utility::conversions::to_string_t("is_out_put")] = ModelBase::toJson(isOutPut_);
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
    if(oldNameIsSet_) {
        val[utility::conversions::to_string_t("oldName")] = ModelBase::toJson(oldName_);
    }
    if(parentNodeIdIsSet_) {
        val[utility::conversions::to_string_t("parent_node_id")] = ModelBase::toJson(parentNodeId_);
    }
    if(propertyIsSet_) {
        val[utility::conversions::to_string_t("property")] = ModelBase::toJson(property_);
    }
    if(regexIsSet_) {
        val[utility::conversions::to_string_t("regex")] = ModelBase::toJson(regex_);
    }
    if(sensitiveInfoSetterTimeIsSet_) {
        val[utility::conversions::to_string_t("sensitiveInfoSetterTime")] = ModelBase::toJson(sensitiveInfoSetterTime_);
    }
    if(sensitiveInfoSetterUserIsSet_) {
        val[utility::conversions::to_string_t("sensitiveInfoSetterUser")] = ModelBase::toJson(sensitiveInfoSetterUser_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(variableTypeIsSet_) {
        val[utility::conversions::to_string_t("variableType")] = ModelBase::toJson(variableType_);
    }

    return val;
}
bool AwVariable::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dynamicParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dynamicParam"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDynamicParam(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("function_arg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_arg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionArg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("function_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_out_put"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_out_put"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOutPut(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("oldName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("oldName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegex(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


int32_t AwVariable::getByOrder() const
{
    return byOrder_;
}

void AwVariable::setByOrder(int32_t value)
{
    byOrder_ = value;
    byOrderIsSet_ = true;
}

bool AwVariable::byOrderIsSet() const
{
    return byOrderIsSet_;
}

void AwVariable::unsetbyOrder()
{
    byOrderIsSet_ = false;
}

std::string AwVariable::getCurrentPermission() const
{
    return currentPermission_;
}

void AwVariable::setCurrentPermission(const std::string& value)
{
    currentPermission_ = value;
    currentPermissionIsSet_ = true;
}

bool AwVariable::currentPermissionIsSet() const
{
    return currentPermissionIsSet_;
}

void AwVariable::unsetcurrentPermission()
{
    currentPermissionIsSet_ = false;
}

std::string AwVariable::getDescription() const
{
    return description_;
}

void AwVariable::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AwVariable::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AwVariable::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AwVariable::getDynamicParam() const
{
    return dynamicParam_;
}

void AwVariable::setDynamicParam(const std::string& value)
{
    dynamicParam_ = value;
    dynamicParamIsSet_ = true;
}

bool AwVariable::dynamicParamIsSet() const
{
    return dynamicParamIsSet_;
}

void AwVariable::unsetdynamicParam()
{
    dynamicParamIsSet_ = false;
}

bool AwVariable::isDynamicParamFlag() const
{
    return dynamicParamFlag_;
}

void AwVariable::setDynamicParamFlag(bool value)
{
    dynamicParamFlag_ = value;
    dynamicParamFlagIsSet_ = true;
}

bool AwVariable::dynamicParamFlagIsSet() const
{
    return dynamicParamFlagIsSet_;
}

void AwVariable::unsetdynamicParamFlag()
{
    dynamicParamFlagIsSet_ = false;
}

std::string AwVariable::getFunctionParams() const
{
    return functionParams_;
}

void AwVariable::setFunctionParams(const std::string& value)
{
    functionParams_ = value;
    functionParamsIsSet_ = true;
}

bool AwVariable::functionParamsIsSet() const
{
    return functionParamsIsSet_;
}

void AwVariable::unsetfunctionParams()
{
    functionParamsIsSet_ = false;
}

std::string AwVariable::getFunctionArg() const
{
    return functionArg_;
}

void AwVariable::setFunctionArg(const std::string& value)
{
    functionArg_ = value;
    functionArgIsSet_ = true;
}

bool AwVariable::functionArgIsSet() const
{
    return functionArgIsSet_;
}

void AwVariable::unsetfunctionArg()
{
    functionArgIsSet_ = false;
}

std::string AwVariable::getFunctionType() const
{
    return functionType_;
}

void AwVariable::setFunctionType(const std::string& value)
{
    functionType_ = value;
    functionTypeIsSet_ = true;
}

bool AwVariable::functionTypeIsSet() const
{
    return functionTypeIsSet_;
}

void AwVariable::unsetfunctionType()
{
    functionTypeIsSet_ = false;
}

bool AwVariable::isIsSensitiveInfo() const
{
    return isSensitiveInfo_;
}

void AwVariable::setIsSensitiveInfo(bool value)
{
    isSensitiveInfo_ = value;
    isSensitiveInfoIsSet_ = true;
}

bool AwVariable::isSensitiveInfoIsSet() const
{
    return isSensitiveInfoIsSet_;
}

void AwVariable::unsetisSensitiveInfo()
{
    isSensitiveInfoIsSet_ = false;
}

bool AwVariable::isIsSensitiveModified() const
{
    return isSensitiveModified_;
}

void AwVariable::setIsSensitiveModified(bool value)
{
    isSensitiveModified_ = value;
    isSensitiveModifiedIsSet_ = true;
}

bool AwVariable::isSensitiveModifiedIsSet() const
{
    return isSensitiveModifiedIsSet_;
}

void AwVariable::unsetisSensitiveModified()
{
    isSensitiveModifiedIsSet_ = false;
}

bool AwVariable::isIsOutPut() const
{
    return isOutPut_;
}

void AwVariable::setIsOutPut(bool value)
{
    isOutPut_ = value;
    isOutPutIsSet_ = true;
}

bool AwVariable::isOutPutIsSet() const
{
    return isOutPutIsSet_;
}

void AwVariable::unsetisOutPut()
{
    isOutPutIsSet_ = false;
}

std::string AwVariable::getName() const
{
    return name_;
}

void AwVariable::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AwVariable::nameIsSet() const
{
    return nameIsSet_;
}

void AwVariable::unsetname()
{
    nameIsSet_ = false;
}

std::string AwVariable::getNodeId() const
{
    return nodeId_;
}

void AwVariable::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool AwVariable::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void AwVariable::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t AwVariable::getNodeType() const
{
    return nodeType_;
}

void AwVariable::setNodeType(int32_t value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool AwVariable::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void AwVariable::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::string AwVariable::getOldName() const
{
    return oldName_;
}

void AwVariable::setOldName(const std::string& value)
{
    oldName_ = value;
    oldNameIsSet_ = true;
}

bool AwVariable::oldNameIsSet() const
{
    return oldNameIsSet_;
}

void AwVariable::unsetoldName()
{
    oldNameIsSet_ = false;
}

std::string AwVariable::getParentNodeId() const
{
    return parentNodeId_;
}

void AwVariable::setParentNodeId(const std::string& value)
{
    parentNodeId_ = value;
    parentNodeIdIsSet_ = true;
}

bool AwVariable::parentNodeIdIsSet() const
{
    return parentNodeIdIsSet_;
}

void AwVariable::unsetparentNodeId()
{
    parentNodeIdIsSet_ = false;
}

std::string AwVariable::getProperty() const
{
    return property_;
}

void AwVariable::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool AwVariable::propertyIsSet() const
{
    return propertyIsSet_;
}

void AwVariable::unsetproperty()
{
    propertyIsSet_ = false;
}

std::string AwVariable::getRegex() const
{
    return regex_;
}

void AwVariable::setRegex(const std::string& value)
{
    regex_ = value;
    regexIsSet_ = true;
}

bool AwVariable::regexIsSet() const
{
    return regexIsSet_;
}

void AwVariable::unsetregex()
{
    regexIsSet_ = false;
}

std::string AwVariable::getSensitiveInfoSetterTime() const
{
    return sensitiveInfoSetterTime_;
}

void AwVariable::setSensitiveInfoSetterTime(const std::string& value)
{
    sensitiveInfoSetterTime_ = value;
    sensitiveInfoSetterTimeIsSet_ = true;
}

bool AwVariable::sensitiveInfoSetterTimeIsSet() const
{
    return sensitiveInfoSetterTimeIsSet_;
}

void AwVariable::unsetsensitiveInfoSetterTime()
{
    sensitiveInfoSetterTimeIsSet_ = false;
}

std::string AwVariable::getSensitiveInfoSetterUser() const
{
    return sensitiveInfoSetterUser_;
}

void AwVariable::setSensitiveInfoSetterUser(const std::string& value)
{
    sensitiveInfoSetterUser_ = value;
    sensitiveInfoSetterUserIsSet_ = true;
}

bool AwVariable::sensitiveInfoSetterUserIsSet() const
{
    return sensitiveInfoSetterUserIsSet_;
}

void AwVariable::unsetsensitiveInfoSetterUser()
{
    sensitiveInfoSetterUserIsSet_ = false;
}

std::string AwVariable::getType() const
{
    return type_;
}

void AwVariable::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AwVariable::typeIsSet() const
{
    return typeIsSet_;
}

void AwVariable::unsettype()
{
    typeIsSet_ = false;
}

int32_t AwVariable::getVariableType() const
{
    return variableType_;
}

void AwVariable::setVariableType(int32_t value)
{
    variableType_ = value;
    variableTypeIsSet_ = true;
}

bool AwVariable::variableTypeIsSet() const
{
    return variableTypeIsSet_;
}

void AwVariable::unsetvariableType()
{
    variableTypeIsSet_ = false;
}

}
}
}
}
}


