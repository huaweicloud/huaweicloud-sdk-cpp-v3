

#include "huaweicloud/gaussdb/v3/model/ShowAutoExpandPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAutoExpandPolicyRequest::ShowAutoExpandPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowAutoExpandPolicyRequest::~ShowAutoExpandPolicyRequest() = default;

void ShowAutoExpandPolicyRequest::validate()
{
}

web::json::value ShowAutoExpandPolicyRequest::toJson() const
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
bool ShowAutoExpandPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowAutoExpandPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAutoExpandPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAutoExpandPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAutoExpandPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAutoExpandPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAutoExpandPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAutoExpandPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAutoExpandPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


