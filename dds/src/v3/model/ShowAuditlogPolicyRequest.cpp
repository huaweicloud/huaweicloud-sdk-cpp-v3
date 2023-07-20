

#include "huaweicloud/dds/v3/model/ShowAuditlogPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowAuditlogPolicyRequest::ShowAuditlogPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowAuditlogPolicyRequest::~ShowAuditlogPolicyRequest() = default;

void ShowAuditlogPolicyRequest::validate()
{
}

web::json::value ShowAuditlogPolicyRequest::toJson() const
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

bool ShowAuditlogPolicyRequest::fromJson(const web::json::value& val)
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

std::string ShowAuditlogPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAuditlogPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAuditlogPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAuditlogPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAuditlogPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAuditlogPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAuditlogPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAuditlogPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


