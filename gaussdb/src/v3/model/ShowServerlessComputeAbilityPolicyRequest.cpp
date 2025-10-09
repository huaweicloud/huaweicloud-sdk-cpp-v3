

#include "huaweicloud/gaussdb/v3/model/ShowServerlessComputeAbilityPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowServerlessComputeAbilityPolicyRequest::ShowServerlessComputeAbilityPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowServerlessComputeAbilityPolicyRequest::~ShowServerlessComputeAbilityPolicyRequest() = default;

void ShowServerlessComputeAbilityPolicyRequest::validate()
{
}

web::json::value ShowServerlessComputeAbilityPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowServerlessComputeAbilityPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ShowServerlessComputeAbilityPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowServerlessComputeAbilityPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowServerlessComputeAbilityPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowServerlessComputeAbilityPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowServerlessComputeAbilityPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowServerlessComputeAbilityPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowServerlessComputeAbilityPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowServerlessComputeAbilityPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


