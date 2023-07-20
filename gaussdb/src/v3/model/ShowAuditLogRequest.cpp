

#include "huaweicloud/gaussdb/v3/model/ShowAuditLogRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAuditLogRequest::ShowAuditLogRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowAuditLogRequest::~ShowAuditLogRequest() = default;

void ShowAuditLogRequest::validate()
{
}

web::json::value ShowAuditLogRequest::toJson() const
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

bool ShowAuditLogRequest::fromJson(const web::json::value& val)
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

std::string ShowAuditLogRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAuditLogRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAuditLogRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAuditLogRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAuditLogRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAuditLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAuditLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAuditLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


