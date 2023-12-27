

#include "huaweicloud/rds/v3/model/StopBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StopBackupRequest::StopBackupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

StopBackupRequest::~StopBackupRequest() = default;

void StopBackupRequest::validate()
{
}

web::json::value StopBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool StopBackupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string StopBackupRequest::getInstanceId() const
{
    return instanceId_;
}

void StopBackupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopBackupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopBackupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string StopBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


