

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowErrorLogSwitchStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowErrorLogSwitchStatusRequest::ShowErrorLogSwitchStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowErrorLogSwitchStatusRequest::~ShowErrorLogSwitchStatusRequest() = default;

void ShowErrorLogSwitchStatusRequest::validate()
{
}

web::json::value ShowErrorLogSwitchStatusRequest::toJson() const
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
bool ShowErrorLogSwitchStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowErrorLogSwitchStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowErrorLogSwitchStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowErrorLogSwitchStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowErrorLogSwitchStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowErrorLogSwitchStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowErrorLogSwitchStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowErrorLogSwitchStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowErrorLogSwitchStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


