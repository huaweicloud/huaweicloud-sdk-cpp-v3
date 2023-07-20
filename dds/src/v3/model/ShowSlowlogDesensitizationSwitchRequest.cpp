

#include "huaweicloud/dds/v3/model/ShowSlowlogDesensitizationSwitchRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowSlowlogDesensitizationSwitchRequest::ShowSlowlogDesensitizationSwitchRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowSlowlogDesensitizationSwitchRequest::~ShowSlowlogDesensitizationSwitchRequest() = default;

void ShowSlowlogDesensitizationSwitchRequest::validate()
{
}

web::json::value ShowSlowlogDesensitizationSwitchRequest::toJson() const
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

bool ShowSlowlogDesensitizationSwitchRequest::fromJson(const web::json::value& val)
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

std::string ShowSlowlogDesensitizationSwitchRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSlowlogDesensitizationSwitchRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSlowlogDesensitizationSwitchRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSlowlogDesensitizationSwitchRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSlowlogDesensitizationSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSlowlogDesensitizationSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSlowlogDesensitizationSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSlowlogDesensitizationSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


