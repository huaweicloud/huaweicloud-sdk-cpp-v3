

#include "huaweicloud/rds/v3/model/ListAutoScalingPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAutoScalingPolicyRequest::ListAutoScalingPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListAutoScalingPolicyRequest::~ListAutoScalingPolicyRequest() = default;

void ListAutoScalingPolicyRequest::validate()
{
}

web::json::value ListAutoScalingPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListAutoScalingPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListAutoScalingPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAutoScalingPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAutoScalingPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAutoScalingPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAutoScalingPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAutoScalingPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAutoScalingPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAutoScalingPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


