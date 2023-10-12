

#include "huaweicloud/rds/v3/model/ShowInstanceConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowInstanceConfigurationRequest::ShowInstanceConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceConfigurationRequest::~ShowInstanceConfigurationRequest() = default;

void ShowInstanceConfigurationRequest::validate()
{
}

web::json::value ShowInstanceConfigurationRequest::toJson() const
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
bool ShowInstanceConfigurationRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


