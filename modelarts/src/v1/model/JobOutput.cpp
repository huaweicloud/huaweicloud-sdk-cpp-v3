

#include "huaweicloud/modelarts/v1/model/JobOutput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobOutput::JobOutput()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    configIsSet_ = false;
}

JobOutput::~JobOutput() = default;

void JobOutput::validate()
{
}

web::json::value JobOutput::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }

    return val;
}
bool JobOutput::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    return ok;
}


std::string JobOutput::getName() const
{
    return name_;
}

void JobOutput::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobOutput::nameIsSet() const
{
    return nameIsSet_;
}

void JobOutput::unsetname()
{
    nameIsSet_ = false;
}

std::string JobOutput::getType() const
{
    return type_;
}

void JobOutput::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool JobOutput::typeIsSet() const
{
    return typeIsSet_;
}

void JobOutput::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, Object>& JobOutput::getConfig()
{
    return config_;
}

void JobOutput::setConfig(const std::map<std::string, Object>& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool JobOutput::configIsSet() const
{
    return configIsSet_;
}

void JobOutput::unsetconfig()
{
    configIsSet_ = false;
}

}
}
}
}
}


