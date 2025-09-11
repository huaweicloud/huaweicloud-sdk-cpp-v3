

#include "huaweicloud/functiongraph/v2/model/Function.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




Function::Function()
{
    name_ = "";
    nameIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
    metadataIsSet_ = false;
}

Function::~Function() = default;

void Function::validate()
{
}

web::json::value Function::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool Function::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string Function::getName() const
{
    return name_;
}

void Function::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Function::nameIsSet() const
{
    return nameIsSet_;
}

void Function::unsetname()
{
    nameIsSet_ = false;
}

std::string Function::getOperation() const
{
    return operation_;
}

void Function::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool Function::operationIsSet() const
{
    return operationIsSet_;
}

void Function::unsetoperation()
{
    operationIsSet_ = false;
}

Object Function::getMetadata() const
{
    return metadata_;
}

void Function::setMetadata(const Object& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool Function::metadataIsSet() const
{
    return metadataIsSet_;
}

void Function::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


