

#include "huaweicloud/rds/v3/model/ShowOffSiteBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowOffSiteBackupPolicyRequest::ShowOffSiteBackupPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowOffSiteBackupPolicyRequest::~ShowOffSiteBackupPolicyRequest() = default;

void ShowOffSiteBackupPolicyRequest::validate()
{
}

web::json::value ShowOffSiteBackupPolicyRequest::toJson() const
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
bool ShowOffSiteBackupPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowOffSiteBackupPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowOffSiteBackupPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowOffSiteBackupPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowOffSiteBackupPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowOffSiteBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowOffSiteBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowOffSiteBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowOffSiteBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


