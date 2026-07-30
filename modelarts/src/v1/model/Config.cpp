

#include "huaweicloud/modelarts/v1/model/Config.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Config::Config()
{
    script_ = "";
    scriptIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

Config::~Config() = default;

void Config::validate()
{
}

web::json::value Config::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptIsSet_) {
        val[utility::conversions::to_string_t("script")] = ModelBase::toJson(script_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool Config::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScript(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string Config::getScript() const
{
    return script_;
}

void Config::setScript(const std::string& value)
{
    script_ = value;
    scriptIsSet_ = true;
}

bool Config::scriptIsSet() const
{
    return scriptIsSet_;
}

void Config::unsetscript()
{
    scriptIsSet_ = false;
}

std::string Config::getType() const
{
    return type_;
}

void Config::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Config::typeIsSet() const
{
    return typeIsSet_;
}

void Config::unsettype()
{
    typeIsSet_ = false;
}

std::string Config::getMode() const
{
    return mode_;
}

void Config::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool Config::modeIsSet() const
{
    return modeIsSet_;
}

void Config::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


