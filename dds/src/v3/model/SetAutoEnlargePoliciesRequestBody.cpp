

#include "huaweicloud/dds/v3/model/SetAutoEnlargePoliciesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SetAutoEnlargePoliciesRequestBody::SetAutoEnlargePoliciesRequestBody()
{
    switchOption_ = "";
    switchOptionIsSet_ = false;
    policiesIsSet_ = false;
}

SetAutoEnlargePoliciesRequestBody::~SetAutoEnlargePoliciesRequestBody() = default;

void SetAutoEnlargePoliciesRequestBody::validate()
{
}

web::json::value SetAutoEnlargePoliciesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }
    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }

    return val;
}
bool SetAutoEnlargePoliciesRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<DiskAutoExpansionPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}


std::string SetAutoEnlargePoliciesRequestBody::getSwitchOption() const
{
    return switchOption_;
}

void SetAutoEnlargePoliciesRequestBody::setSwitchOption(const std::string& value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool SetAutoEnlargePoliciesRequestBody::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void SetAutoEnlargePoliciesRequestBody::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

std::vector<DiskAutoExpansionPolicy>& SetAutoEnlargePoliciesRequestBody::getPolicies()
{
    return policies_;
}

void SetAutoEnlargePoliciesRequestBody::setPolicies(const std::vector<DiskAutoExpansionPolicy>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool SetAutoEnlargePoliciesRequestBody::policiesIsSet() const
{
    return policiesIsSet_;
}

void SetAutoEnlargePoliciesRequestBody::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


