

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowUpgradeCandidateVersionsDetailsRequest::ShowUpgradeCandidateVersionsDetailsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowUpgradeCandidateVersionsDetailsRequest::~ShowUpgradeCandidateVersionsDetailsRequest() = default;

void ShowUpgradeCandidateVersionsDetailsRequest::validate()
{
}

web::json::value ShowUpgradeCandidateVersionsDetailsRequest::toJson() const
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
bool ShowUpgradeCandidateVersionsDetailsRequest::fromJson(const web::json::value& val)
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


std::string ShowUpgradeCandidateVersionsDetailsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowUpgradeCandidateVersionsDetailsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowUpgradeCandidateVersionsDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowUpgradeCandidateVersionsDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


