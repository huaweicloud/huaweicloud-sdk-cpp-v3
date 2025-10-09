

#include "huaweicloud/gaussdb/v3/model/ShowServerlessScalingPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowServerlessScalingPolicyRequest::ShowServerlessScalingPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowServerlessScalingPolicyRequest::~ShowServerlessScalingPolicyRequest() = default;

void ShowServerlessScalingPolicyRequest::validate()
{
}

web::json::value ShowServerlessScalingPolicyRequest::toJson() const
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
bool ShowServerlessScalingPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowServerlessScalingPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowServerlessScalingPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowServerlessScalingPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowServerlessScalingPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowServerlessScalingPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowServerlessScalingPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowServerlessScalingPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowServerlessScalingPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


