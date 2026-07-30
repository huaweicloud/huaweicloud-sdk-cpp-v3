

#include "huaweicloud/modelarts/v1/model/RewardAttrs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RewardAttrs::RewardAttrs()
{
    name_ = "";
    nameIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    regex_ = "";
    regexIsSet_ = false;
}

RewardAttrs::~RewardAttrs() = default;

void RewardAttrs::validate()
{
}

web::json::value RewardAttrs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(regexIsSet_) {
        val[utility::conversions::to_string_t("regex")] = ModelBase::toJson(regex_);
    }

    return val;
}
bool RewardAttrs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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
    return ok;
}


std::string RewardAttrs::getName() const
{
    return name_;
}

void RewardAttrs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RewardAttrs::nameIsSet() const
{
    return nameIsSet_;
}

void RewardAttrs::unsetname()
{
    nameIsSet_ = false;
}

std::string RewardAttrs::getMode() const
{
    return mode_;
}

void RewardAttrs::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool RewardAttrs::modeIsSet() const
{
    return modeIsSet_;
}

void RewardAttrs::unsetmode()
{
    modeIsSet_ = false;
}

std::string RewardAttrs::getRegex() const
{
    return regex_;
}

void RewardAttrs::setRegex(const std::string& value)
{
    regex_ = value;
    regexIsSet_ = true;
}

bool RewardAttrs::regexIsSet() const
{
    return regexIsSet_;
}

void RewardAttrs::unsetregex()
{
    regexIsSet_ = false;
}

}
}
}
}
}


