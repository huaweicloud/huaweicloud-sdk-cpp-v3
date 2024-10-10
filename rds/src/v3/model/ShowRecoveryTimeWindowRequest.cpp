

#include "huaweicloud/rds/v3/model/ShowRecoveryTimeWindowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRecoveryTimeWindowRequest::ShowRecoveryTimeWindowRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowRecoveryTimeWindowRequest::~ShowRecoveryTimeWindowRequest() = default;

void ShowRecoveryTimeWindowRequest::validate()
{
}

web::json::value ShowRecoveryTimeWindowRequest::toJson() const
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
bool ShowRecoveryTimeWindowRequest::fromJson(const web::json::value& val)
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


std::string ShowRecoveryTimeWindowRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRecoveryTimeWindowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRecoveryTimeWindowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRecoveryTimeWindowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRecoveryTimeWindowRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowRecoveryTimeWindowRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowRecoveryTimeWindowRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowRecoveryTimeWindowRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


