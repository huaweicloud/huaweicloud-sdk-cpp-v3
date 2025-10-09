

#include "huaweicloud/gaussdb/v3/model/ShowHtapQueryQueuesRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowHtapQueryQueuesRuleRequest::ShowHtapQueryQueuesRuleRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowHtapQueryQueuesRuleRequest::~ShowHtapQueryQueuesRuleRequest() = default;

void ShowHtapQueryQueuesRuleRequest::validate()
{
}

web::json::value ShowHtapQueryQueuesRuleRequest::toJson() const
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
bool ShowHtapQueryQueuesRuleRequest::fromJson(const web::json::value& val)
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


std::string ShowHtapQueryQueuesRuleRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowHtapQueryQueuesRuleRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowHtapQueryQueuesRuleRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowHtapQueryQueuesRuleRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowHtapQueryQueuesRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowHtapQueryQueuesRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowHtapQueryQueuesRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowHtapQueryQueuesRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


