

#include "huaweicloud/rds/v3/model/ShowInformationAboutDatabaseProxyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowInformationAboutDatabaseProxyRequest::ShowInformationAboutDatabaseProxyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInformationAboutDatabaseProxyRequest::~ShowInformationAboutDatabaseProxyRequest() = default;

void ShowInformationAboutDatabaseProxyRequest::validate()
{
}

web::json::value ShowInformationAboutDatabaseProxyRequest::toJson() const
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

bool ShowInformationAboutDatabaseProxyRequest::fromJson(const web::json::value& val)
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

std::string ShowInformationAboutDatabaseProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInformationAboutDatabaseProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInformationAboutDatabaseProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInformationAboutDatabaseProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInformationAboutDatabaseProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInformationAboutDatabaseProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInformationAboutDatabaseProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInformationAboutDatabaseProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


