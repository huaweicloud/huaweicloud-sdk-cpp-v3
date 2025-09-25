

#include "huaweicloud/codeartspipeline/v2/model/Stages.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




Stages::Stages()
{
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    parametersIsSet_ = false;
    order_ = 0;
    orderIsSet_ = false;
    dslMethod_ = "";
    dslMethodIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
}

Stages::~Stages() = default;

void Stages::validate()
{
}

web::json::value Stages::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(dslMethodIsSet_) {
        val[utility::conversions::to_string_t("dsl_method")] = ModelBase::toJson(dslMethod_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}
bool Stages::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dsl_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsl_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDslMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}


std::string Stages::getResult() const
{
    return result_;
}

void Stages::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool Stages::resultIsSet() const
{
    return resultIsSet_;
}

void Stages::unsetresult()
{
    resultIsSet_ = false;
}

std::string Stages::getStatus() const
{
    return status_;
}

void Stages::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Stages::statusIsSet() const
{
    return statusIsSet_;
}

void Stages::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Stages::getName() const
{
    return name_;
}

void Stages::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Stages::nameIsSet() const
{
    return nameIsSet_;
}

void Stages::unsetname()
{
    nameIsSet_ = false;
}

Object Stages::getParameters() const
{
    return parameters_;
}

void Stages::setParameters(const Object& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool Stages::parametersIsSet() const
{
    return parametersIsSet_;
}

void Stages::unsetparameters()
{
    parametersIsSet_ = false;
}

int32_t Stages::getOrder() const
{
    return order_;
}

void Stages::setOrder(int32_t value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool Stages::orderIsSet() const
{
    return orderIsSet_;
}

void Stages::unsetorder()
{
    orderIsSet_ = false;
}

std::string Stages::getDslMethod() const
{
    return dslMethod_;
}

void Stages::setDslMethod(const std::string& value)
{
    dslMethod_ = value;
    dslMethodIsSet_ = true;
}

bool Stages::dslMethodIsSet() const
{
    return dslMethodIsSet_;
}

void Stages::unsetdslMethod()
{
    dslMethodIsSet_ = false;
}

std::string Stages::getDisplayName() const
{
    return displayName_;
}

void Stages::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool Stages::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void Stages::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


