

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowConfigurationRequest::ShowConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowConfigurationRequest::~ShowConfigurationRequest() = default;

void ShowConfigurationRequest::validate()
{
}

web::json::value ShowConfigurationRequest::toJson() const
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
bool ShowConfigurationRequest::fromJson(const web::json::value& val)
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


std::string ShowConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


