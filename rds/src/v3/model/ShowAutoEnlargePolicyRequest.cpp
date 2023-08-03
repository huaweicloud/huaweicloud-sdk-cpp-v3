

#include "huaweicloud/rds/v3/model/ShowAutoEnlargePolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAutoEnlargePolicyRequest::ShowAutoEnlargePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowAutoEnlargePolicyRequest::~ShowAutoEnlargePolicyRequest() = default;

void ShowAutoEnlargePolicyRequest::validate()
{
}

web::json::value ShowAutoEnlargePolicyRequest::toJson() const
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

bool ShowAutoEnlargePolicyRequest::fromJson(const web::json::value& val)
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

std::string ShowAutoEnlargePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAutoEnlargePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAutoEnlargePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAutoEnlargePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAutoEnlargePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAutoEnlargePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAutoEnlargePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAutoEnlargePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


