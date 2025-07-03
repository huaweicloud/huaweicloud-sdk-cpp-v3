

#include "huaweicloud/rds/v3/model/ShowPrecheckResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowPrecheckResultRequest::ShowPrecheckResultRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowPrecheckResultRequest::~ShowPrecheckResultRequest() = default;

void ShowPrecheckResultRequest::validate()
{
}

web::json::value ShowPrecheckResultRequest::toJson() const
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
bool ShowPrecheckResultRequest::fromJson(const web::json::value& val)
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


std::string ShowPrecheckResultRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowPrecheckResultRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowPrecheckResultRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowPrecheckResultRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowPrecheckResultRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowPrecheckResultRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowPrecheckResultRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowPrecheckResultRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


