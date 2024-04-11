

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowUpgradeCandidateVersionsRequest::ShowUpgradeCandidateVersionsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowUpgradeCandidateVersionsRequest::~ShowUpgradeCandidateVersionsRequest() = default;

void ShowUpgradeCandidateVersionsRequest::validate()
{
}

web::json::value ShowUpgradeCandidateVersionsRequest::toJson() const
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
bool ShowUpgradeCandidateVersionsRequest::fromJson(const web::json::value& val)
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


std::string ShowUpgradeCandidateVersionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowUpgradeCandidateVersionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowUpgradeCandidateVersionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowUpgradeCandidateVersionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowUpgradeCandidateVersionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowUpgradeCandidateVersionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


