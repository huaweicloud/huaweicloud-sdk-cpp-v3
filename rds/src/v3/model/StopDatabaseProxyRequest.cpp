

#include "huaweicloud/rds/v3/model/StopDatabaseProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StopDatabaseProxyRequest::StopDatabaseProxyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

StopDatabaseProxyRequest::~StopDatabaseProxyRequest() = default;

void StopDatabaseProxyRequest::validate()
{
}

web::json::value StopDatabaseProxyRequest::toJson() const
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
bool StopDatabaseProxyRequest::fromJson(const web::json::value& val)
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


std::string StopDatabaseProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopDatabaseProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopDatabaseProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopDatabaseProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StopDatabaseProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void StopDatabaseProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopDatabaseProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopDatabaseProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


