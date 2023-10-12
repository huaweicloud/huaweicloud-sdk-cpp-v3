

#include "huaweicloud/gaussdb/v3/model/ShowInstanceMonitorExtendRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceMonitorExtendRequest::ShowInstanceMonitorExtendRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceMonitorExtendRequest::~ShowInstanceMonitorExtendRequest() = default;

void ShowInstanceMonitorExtendRequest::validate()
{
}

web::json::value ShowInstanceMonitorExtendRequest::toJson() const
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
bool ShowInstanceMonitorExtendRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceMonitorExtendRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceMonitorExtendRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceMonitorExtendRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceMonitorExtendRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceMonitorExtendRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceMonitorExtendRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceMonitorExtendRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceMonitorExtendRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


