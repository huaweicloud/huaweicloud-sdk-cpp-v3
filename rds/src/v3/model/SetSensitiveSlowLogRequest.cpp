

#include "huaweicloud/rds/v3/model/SetSensitiveSlowLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetSensitiveSlowLogRequest::SetSensitiveSlowLogRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SetSensitiveSlowLogRequest::~SetSensitiveSlowLogRequest() = default;

void SetSensitiveSlowLogRequest::validate()
{
}

web::json::value SetSensitiveSlowLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetSensitiveSlowLogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SetSensitiveSlowLogRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetSensitiveSlowLogRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetSensitiveSlowLogRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetSensitiveSlowLogRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetSensitiveSlowLogRequest::getInstanceId() const
{
    return instanceId_;
}

void SetSensitiveSlowLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetSensitiveSlowLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetSensitiveSlowLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetSensitiveSlowLogRequest::getStatus() const
{
    return status_;
}

void SetSensitiveSlowLogRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetSensitiveSlowLogRequest::statusIsSet() const
{
    return statusIsSet_;
}

void SetSensitiveSlowLogRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


