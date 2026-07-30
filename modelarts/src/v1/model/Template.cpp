

#include "huaweicloud/modelarts/v1/model/Template.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Template::Template()
{
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    inputsIsSet_ = false;
}

Template::~Template() = default;

void Template::validate()
{
}

web::json::value Template::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }

    return val;
}
bool Template::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    return ok;
}


std::string Template::getName() const
{
    return name_;
}

void Template::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Template::nameIsSet() const
{
    return nameIsSet_;
}

void Template::unsetname()
{
    nameIsSet_ = false;
}

std::string Template::getVersion() const
{
    return version_;
}

void Template::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Template::versionIsSet() const
{
    return versionIsSet_;
}

void Template::unsetversion()
{
    versionIsSet_ = false;
}

std::map<std::string, Object>& Template::getInputs()
{
    return inputs_;
}

void Template::setInputs(const std::map<std::string, Object>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool Template::inputsIsSet() const
{
    return inputsIsSet_;
}

void Template::unsetinputs()
{
    inputsIsSet_ = false;
}

}
}
}
}
}


