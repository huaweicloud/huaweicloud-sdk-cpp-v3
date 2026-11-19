

#include "huaweicloud/rds/v3/model/UpgradeDbVersionFinalConfirmRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbVersionFinalConfirmRequest::UpgradeDbVersionFinalConfirmRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeDbVersionFinalConfirmRequest::~UpgradeDbVersionFinalConfirmRequest() = default;

void UpgradeDbVersionFinalConfirmRequest::validate()
{
}

web::json::value UpgradeDbVersionFinalConfirmRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpgradeDbVersionFinalConfirmRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpgradeDbVersionFinalConfirmRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeDbVersionFinalConfirmRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeDbVersionFinalConfirmRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeDbVersionFinalConfirmRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeDbVersionFinalConfirmRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpgradeDbVersionFinalConfirmRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeDbVersionFinalConfirmRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeDbVersionFinalConfirmRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeDbVersionFinalConfirmRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpgradeDbVersionFinalConfirmRequestBody UpgradeDbVersionFinalConfirmRequest::getBody() const
{
    return body_;
}

void UpgradeDbVersionFinalConfirmRequest::setBody(const UpgradeDbVersionFinalConfirmRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeDbVersionFinalConfirmRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeDbVersionFinalConfirmRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


