

#include "huaweicloud/gaussdb/v3/model/ShowAutoScalingPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAutoScalingPolicyRequest::ShowAutoScalingPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowAutoScalingPolicyRequest::~ShowAutoScalingPolicyRequest() = default;

void ShowAutoScalingPolicyRequest::validate()
{
}

web::json::value ShowAutoScalingPolicyRequest::toJson() const
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
bool ShowAutoScalingPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowAutoScalingPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAutoScalingPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAutoScalingPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAutoScalingPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAutoScalingPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAutoScalingPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAutoScalingPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAutoScalingPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


