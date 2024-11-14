

#include "huaweicloud/dds/v3/model/ShowAutoEnlargePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowAutoEnlargePolicyResponse::ShowAutoEnlargePolicyResponse()
{
    switchOption_ = "";
    switchOptionIsSet_ = false;
    policyIsSet_ = false;
}

ShowAutoEnlargePolicyResponse::~ShowAutoEnlargePolicyResponse() = default;

void ShowAutoEnlargePolicyResponse::validate()
{
}

web::json::value ShowAutoEnlargePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool ShowAutoEnlargePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_option"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            DiskAutoExpansionPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


std::string ShowAutoEnlargePolicyResponse::getSwitchOption() const
{
    return switchOption_;
}

void ShowAutoEnlargePolicyResponse::setSwitchOption(const std::string& value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool ShowAutoEnlargePolicyResponse::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void ShowAutoEnlargePolicyResponse::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

DiskAutoExpansionPolicy ShowAutoEnlargePolicyResponse::getPolicy() const
{
    return policy_;
}

void ShowAutoEnlargePolicyResponse::setPolicy(const DiskAutoExpansionPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowAutoEnlargePolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void ShowAutoEnlargePolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


