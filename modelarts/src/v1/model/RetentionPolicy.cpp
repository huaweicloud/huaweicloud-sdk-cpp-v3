

#include "huaweicloud/modelarts/v1/model/RetentionPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RetentionPolicy::RetentionPolicy()
{
    policy_ = "";
    policyIsSet_ = false;
}

RetentionPolicy::~RetentionPolicy() = default;

void RetentionPolicy::validate()
{
}

web::json::value RetentionPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool RetentionPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


std::string RetentionPolicy::getPolicy() const
{
    return policy_;
}

void RetentionPolicy::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool RetentionPolicy::policyIsSet() const
{
    return policyIsSet_;
}

void RetentionPolicy::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


