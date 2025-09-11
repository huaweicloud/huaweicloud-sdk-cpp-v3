

#include "huaweicloud/functiongraph/v2/model/FunctionRef.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FunctionRef::FunctionRef()
{
    refName_ = "";
    refNameIsSet_ = false;
    invokeMode_ = "";
    invokeModeIsSet_ = false;
    argumentsIsSet_ = false;
}

FunctionRef::~FunctionRef() = default;

void FunctionRef::validate()
{
}

web::json::value FunctionRef::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refNameIsSet_) {
        val[utility::conversions::to_string_t("ref_name")] = ModelBase::toJson(refName_);
    }
    if(invokeModeIsSet_) {
        val[utility::conversions::to_string_t("invoke_mode")] = ModelBase::toJson(invokeMode_);
    }
    if(argumentsIsSet_) {
        val[utility::conversions::to_string_t("arguments")] = ModelBase::toJson(arguments_);
    }

    return val;
}
bool FunctionRef::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ref_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invoke_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invoke_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvokeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arguments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arguments"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArguments(refVal);
        }
    }
    return ok;
}


std::string FunctionRef::getRefName() const
{
    return refName_;
}

void FunctionRef::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool FunctionRef::refNameIsSet() const
{
    return refNameIsSet_;
}

void FunctionRef::unsetrefName()
{
    refNameIsSet_ = false;
}

std::string FunctionRef::getInvokeMode() const
{
    return invokeMode_;
}

void FunctionRef::setInvokeMode(const std::string& value)
{
    invokeMode_ = value;
    invokeModeIsSet_ = true;
}

bool FunctionRef::invokeModeIsSet() const
{
    return invokeModeIsSet_;
}

void FunctionRef::unsetinvokeMode()
{
    invokeModeIsSet_ = false;
}

Object FunctionRef::getArguments() const
{
    return arguments_;
}

void FunctionRef::setArguments(const Object& value)
{
    arguments_ = value;
    argumentsIsSet_ = true;
}

bool FunctionRef::argumentsIsSet() const
{
    return argumentsIsSet_;
}

void FunctionRef::unsetarguments()
{
    argumentsIsSet_ = false;
}

}
}
}
}
}


