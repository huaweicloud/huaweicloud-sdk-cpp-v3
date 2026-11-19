

#include "huaweicloud/gaussdb/v3/model/ShowKillProcessStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowKillProcessStatusRequest::ShowKillProcessStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowKillProcessStatusRequest::~ShowKillProcessStatusRequest() = default;

void ShowKillProcessStatusRequest::validate()
{
}

web::json::value ShowKillProcessStatusRequest::toJson() const
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
bool ShowKillProcessStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowKillProcessStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowKillProcessStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowKillProcessStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowKillProcessStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowKillProcessStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowKillProcessStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowKillProcessStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowKillProcessStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


