

#include "huaweicloud/codeartsdeploy/v2/model/Step.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




Step::Step()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    paramsIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
}

Step::~Step() = default;

void Step::validate()
{
}

web::json::value Step::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}

bool Step::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    return ok;
}

std::string Step::getId() const
{
    return id_;
}

void Step::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Step::idIsSet() const
{
    return idIsSet_;
}

void Step::unsetid()
{
    idIsSet_ = false;
}

std::string Step::getName() const
{
    return name_;
}

void Step::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Step::nameIsSet() const
{
    return nameIsSet_;
}

void Step::unsetname()
{
    nameIsSet_ = false;
}

std::map<std::string, std::string>& Step::getParams()
{
    return params_;
}

void Step::setParams(const std::map<std::string, std::string>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool Step::paramsIsSet() const
{
    return paramsIsSet_;
}

void Step::unsetparams()
{
    paramsIsSet_ = false;
}

bool Step::isEnable() const
{
    return enable_;
}

void Step::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool Step::enableIsSet() const
{
    return enableIsSet_;
}

void Step::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


