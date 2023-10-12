

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowBackupPolicyRequest::ShowBackupPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowBackupPolicyRequest::~ShowBackupPolicyRequest() = default;

void ShowBackupPolicyRequest::validate()
{
}

web::json::value ShowBackupPolicyRequest::toJson() const
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
bool ShowBackupPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowBackupPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBackupPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBackupPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBackupPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


