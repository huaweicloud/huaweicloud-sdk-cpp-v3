

#include "huaweicloud/cce/v3/model/ConfigurationRisks.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ConfigurationRisks::ConfigurationRisks()
{
    package_ = "";
    packageIsSet_ = false;
    sourceFile_ = "";
    sourceFileIsSet_ = false;
    nodeMsg_ = "";
    nodeMsgIsSet_ = false;
    field_ = "";
    fieldIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
    originalValue_ = "";
    originalValueIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ConfigurationRisks::~ConfigurationRisks() = default;

void ConfigurationRisks::validate()
{
}

web::json::value ConfigurationRisks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageIsSet_) {
        val[utility::conversions::to_string_t("package")] = ModelBase::toJson(package_);
    }
    if(sourceFileIsSet_) {
        val[utility::conversions::to_string_t("sourceFile")] = ModelBase::toJson(sourceFile_);
    }
    if(nodeMsgIsSet_) {
        val[utility::conversions::to_string_t("nodeMsg")] = ModelBase::toJson(nodeMsg_);
    }
    if(fieldIsSet_) {
        val[utility::conversions::to_string_t("field")] = ModelBase::toJson(field_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(originalValueIsSet_) {
        val[utility::conversions::to_string_t("originalValue")] = ModelBase::toJson(originalValue_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ConfigurationRisks::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sourceFile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sourceFile"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeMsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeMsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("originalValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("originalValue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ConfigurationRisks::getPackage() const
{
    return package_;
}

void ConfigurationRisks::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool ConfigurationRisks::packageIsSet() const
{
    return packageIsSet_;
}

void ConfigurationRisks::unsetpackage()
{
    packageIsSet_ = false;
}

std::string ConfigurationRisks::getSourceFile() const
{
    return sourceFile_;
}

void ConfigurationRisks::setSourceFile(const std::string& value)
{
    sourceFile_ = value;
    sourceFileIsSet_ = true;
}

bool ConfigurationRisks::sourceFileIsSet() const
{
    return sourceFileIsSet_;
}

void ConfigurationRisks::unsetsourceFile()
{
    sourceFileIsSet_ = false;
}

std::string ConfigurationRisks::getNodeMsg() const
{
    return nodeMsg_;
}

void ConfigurationRisks::setNodeMsg(const std::string& value)
{
    nodeMsg_ = value;
    nodeMsgIsSet_ = true;
}

bool ConfigurationRisks::nodeMsgIsSet() const
{
    return nodeMsgIsSet_;
}

void ConfigurationRisks::unsetnodeMsg()
{
    nodeMsgIsSet_ = false;
}

std::string ConfigurationRisks::getField() const
{
    return field_;
}

void ConfigurationRisks::setField(const std::string& value)
{
    field_ = value;
    fieldIsSet_ = true;
}

bool ConfigurationRisks::fieldIsSet() const
{
    return fieldIsSet_;
}

void ConfigurationRisks::unsetfield()
{
    fieldIsSet_ = false;
}

std::string ConfigurationRisks::getOperation() const
{
    return operation_;
}

void ConfigurationRisks::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool ConfigurationRisks::operationIsSet() const
{
    return operationIsSet_;
}

void ConfigurationRisks::unsetoperation()
{
    operationIsSet_ = false;
}

std::string ConfigurationRisks::getOriginalValue() const
{
    return originalValue_;
}

void ConfigurationRisks::setOriginalValue(const std::string& value)
{
    originalValue_ = value;
    originalValueIsSet_ = true;
}

bool ConfigurationRisks::originalValueIsSet() const
{
    return originalValueIsSet_;
}

void ConfigurationRisks::unsetoriginalValue()
{
    originalValueIsSet_ = false;
}

std::string ConfigurationRisks::getValue() const
{
    return value_;
}

void ConfigurationRisks::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ConfigurationRisks::valueIsSet() const
{
    return valueIsSet_;
}

void ConfigurationRisks::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


