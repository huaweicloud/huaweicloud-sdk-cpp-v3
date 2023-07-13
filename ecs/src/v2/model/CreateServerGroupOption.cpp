

#include "huaweicloud/ecs/v2/model/CreateServerGroupOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateServerGroupOption::CreateServerGroupOption()
{
    name_ = "";
    nameIsSet_ = false;
    policiesIsSet_ = false;
}

CreateServerGroupOption::~CreateServerGroupOption() = default;

void CreateServerGroupOption::validate()
{
}

web::json::value CreateServerGroupOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }

    return val;
}

bool CreateServerGroupOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}

std::string CreateServerGroupOption::getName() const
{
    return name_;
}

void CreateServerGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateServerGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateServerGroupOption::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateServerGroupOption::getPolicies()
{
    return policies_;
}

void CreateServerGroupOption::setPolicies(const std::vector<std::string>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool CreateServerGroupOption::policiesIsSet() const
{
    return policiesIsSet_;
}

void CreateServerGroupOption::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


