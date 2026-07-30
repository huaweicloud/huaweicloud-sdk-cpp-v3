

#include "huaweicloud/modelarts/v1/model/JobOutputResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobOutputResp::JobOutputResp()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    configIsSet_ = false;
}

JobOutputResp::~JobOutputResp() = default;

void JobOutputResp::validate()
{
}

web::json::value JobOutputResp::toJson() const
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
bool JobOutputResp::fromJson(const web::json::value& val)
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


std::string JobOutputResp::getName() const
{
    return name_;
}

void JobOutputResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobOutputResp::nameIsSet() const
{
    return nameIsSet_;
}

void JobOutputResp::unsetname()
{
    nameIsSet_ = false;
}

std::string JobOutputResp::getType() const
{
    return type_;
}

void JobOutputResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool JobOutputResp::typeIsSet() const
{
    return typeIsSet_;
}

void JobOutputResp::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, Object>& JobOutputResp::getConfig()
{
    return config_;
}

void JobOutputResp::setConfig(const std::map<std::string, Object>& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool JobOutputResp::configIsSet() const
{
    return configIsSet_;
}

void JobOutputResp::unsetconfig()
{
    configIsSet_ = false;
}

}
}
}
}
}


