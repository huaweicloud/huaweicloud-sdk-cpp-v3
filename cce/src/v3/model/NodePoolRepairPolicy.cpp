

#include "huaweicloud/cce/v3/model/NodePoolRepairPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolRepairPolicy::NodePoolRepairPolicy()
{
    enable_ = false;
    enableIsSet_ = false;
    policy_ = "";
    policyIsSet_ = false;
}

NodePoolRepairPolicy::~NodePoolRepairPolicy() = default;

void NodePoolRepairPolicy::validate()
{
}

web::json::value NodePoolRepairPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool NodePoolRepairPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
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


bool NodePoolRepairPolicy::isEnable() const
{
    return enable_;
}

void NodePoolRepairPolicy::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool NodePoolRepairPolicy::enableIsSet() const
{
    return enableIsSet_;
}

void NodePoolRepairPolicy::unsetenable()
{
    enableIsSet_ = false;
}

std::string NodePoolRepairPolicy::getPolicy() const
{
    return policy_;
}

void NodePoolRepairPolicy::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool NodePoolRepairPolicy::policyIsSet() const
{
    return policyIsSet_;
}

void NodePoolRepairPolicy::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


