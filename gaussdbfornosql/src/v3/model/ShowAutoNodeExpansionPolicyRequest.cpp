

#include "huaweicloud/gaussdbfornosql/v3/model/ShowAutoNodeExpansionPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowAutoNodeExpansionPolicyRequest::ShowAutoNodeExpansionPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowAutoNodeExpansionPolicyRequest::~ShowAutoNodeExpansionPolicyRequest() = default;

void ShowAutoNodeExpansionPolicyRequest::validate()
{
}

web::json::value ShowAutoNodeExpansionPolicyRequest::toJson() const
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
bool ShowAutoNodeExpansionPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowAutoNodeExpansionPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAutoNodeExpansionPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAutoNodeExpansionPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAutoNodeExpansionPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAutoNodeExpansionPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAutoNodeExpansionPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAutoNodeExpansionPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAutoNodeExpansionPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


