

#include "huaweicloud/lts/v2/model/UpdateSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateSwitchRequest::UpdateSwitchRequest()
{
    logConvergeSwitch_ = "";
    logConvergeSwitchIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

UpdateSwitchRequest::~UpdateSwitchRequest() = default;

void UpdateSwitchRequest::validate()
{
}

web::json::value UpdateSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConvergeSwitchIsSet_) {
        val[utility::conversions::to_string_t("log_converge_switch")] = ModelBase::toJson(logConvergeSwitch_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool UpdateSwitchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_converge_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_converge_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConvergeSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string UpdateSwitchRequest::getLogConvergeSwitch() const
{
    return logConvergeSwitch_;
}

void UpdateSwitchRequest::setLogConvergeSwitch(const std::string& value)
{
    logConvergeSwitch_ = value;
    logConvergeSwitchIsSet_ = true;
}

bool UpdateSwitchRequest::logConvergeSwitchIsSet() const
{
    return logConvergeSwitchIsSet_;
}

void UpdateSwitchRequest::unsetlogConvergeSwitch()
{
    logConvergeSwitchIsSet_ = false;
}

std::string UpdateSwitchRequest::getContentType() const
{
    return contentType_;
}

void UpdateSwitchRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateSwitchRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateSwitchRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


