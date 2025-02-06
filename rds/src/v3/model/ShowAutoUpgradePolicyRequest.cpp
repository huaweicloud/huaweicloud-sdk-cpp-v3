

#include "huaweicloud/rds/v3/model/ShowAutoUpgradePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAutoUpgradePolicyRequest::ShowAutoUpgradePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowAutoUpgradePolicyRequest::~ShowAutoUpgradePolicyRequest() = default;

void ShowAutoUpgradePolicyRequest::validate()
{
}

web::json::value ShowAutoUpgradePolicyRequest::toJson() const
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
bool ShowAutoUpgradePolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowAutoUpgradePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAutoUpgradePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAutoUpgradePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAutoUpgradePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAutoUpgradePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAutoUpgradePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAutoUpgradePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAutoUpgradePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


