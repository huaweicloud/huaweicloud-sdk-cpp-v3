

#include "huaweicloud/modelarts/v1/model/JobAlgorithmResponse_policies_auto_search_reward_attrs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobAlgorithmResponse_policies_auto_search_reward_attrs::JobAlgorithmResponse_policies_auto_search_reward_attrs()
{
    name_ = "";
    nameIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    regex_ = "";
    regexIsSet_ = false;
}

JobAlgorithmResponse_policies_auto_search_reward_attrs::~JobAlgorithmResponse_policies_auto_search_reward_attrs() = default;

void JobAlgorithmResponse_policies_auto_search_reward_attrs::validate()
{
}

web::json::value JobAlgorithmResponse_policies_auto_search_reward_attrs::toJson() const
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
bool JobAlgorithmResponse_policies_auto_search_reward_attrs::fromJson(const web::json::value& val)
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


std::string JobAlgorithmResponse_policies_auto_search_reward_attrs::getName() const
{
    return name_;
}

void JobAlgorithmResponse_policies_auto_search_reward_attrs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_reward_attrs::nameIsSet() const
{
    return nameIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_reward_attrs::unsetname()
{
    nameIsSet_ = false;
}

std::string JobAlgorithmResponse_policies_auto_search_reward_attrs::getMode() const
{
    return mode_;
}

void JobAlgorithmResponse_policies_auto_search_reward_attrs::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_reward_attrs::modeIsSet() const
{
    return modeIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_reward_attrs::unsetmode()
{
    modeIsSet_ = false;
}

std::string JobAlgorithmResponse_policies_auto_search_reward_attrs::getRegex() const
{
    return regex_;
}

void JobAlgorithmResponse_policies_auto_search_reward_attrs::setRegex(const std::string& value)
{
    regex_ = value;
    regexIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_reward_attrs::regexIsSet() const
{
    return regexIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_reward_attrs::unsetregex()
{
    regexIsSet_ = false;
}

}
}
}
}
}


