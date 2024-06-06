

#include "huaweicloud/gaussdb/v3/model/ShowSlowlogSensitiveStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSlowlogSensitiveStatusRequest::ShowSlowlogSensitiveStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowSlowlogSensitiveStatusRequest::~ShowSlowlogSensitiveStatusRequest() = default;

void ShowSlowlogSensitiveStatusRequest::validate()
{
}

web::json::value ShowSlowlogSensitiveStatusRequest::toJson() const
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
bool ShowSlowlogSensitiveStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowSlowlogSensitiveStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSlowlogSensitiveStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSlowlogSensitiveStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSlowlogSensitiveStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSlowlogSensitiveStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSlowlogSensitiveStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSlowlogSensitiveStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSlowlogSensitiveStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


