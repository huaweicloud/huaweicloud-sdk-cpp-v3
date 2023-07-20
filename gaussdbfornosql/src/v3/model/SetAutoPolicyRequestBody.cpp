

#include "huaweicloud/gaussdbfornosql/v3/model/SetAutoPolicyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetAutoPolicyRequestBody::SetAutoPolicyRequestBody()
{
    instanceIdsIsSet_ = false;
    switchOption_ = "";
    switchOptionIsSet_ = false;
    policyIsSet_ = false;
}

SetAutoPolicyRequestBody::~SetAutoPolicyRequestBody() = default;

void SetAutoPolicyRequestBody::validate()
{
}

web::json::value SetAutoPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}

bool SetAutoPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
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
            std::vector<DiskAutoExpansionPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& SetAutoPolicyRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void SetAutoPolicyRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool SetAutoPolicyRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void SetAutoPolicyRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string SetAutoPolicyRequestBody::getSwitchOption() const
{
    return switchOption_;
}

void SetAutoPolicyRequestBody::setSwitchOption(const std::string& value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool SetAutoPolicyRequestBody::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void SetAutoPolicyRequestBody::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

std::vector<DiskAutoExpansionPolicy>& SetAutoPolicyRequestBody::getPolicy()
{
    return policy_;
}

void SetAutoPolicyRequestBody::setPolicy(const std::vector<DiskAutoExpansionPolicy>& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool SetAutoPolicyRequestBody::policyIsSet() const
{
    return policyIsSet_;
}

void SetAutoPolicyRequestBody::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


