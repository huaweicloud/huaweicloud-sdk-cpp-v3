

#include "huaweicloud/rds/v3/model/MigrateFollowerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MigrateFollowerRequest::MigrateFollowerRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

MigrateFollowerRequest::~MigrateFollowerRequest() = default;

void MigrateFollowerRequest::validate()
{
}

web::json::value MigrateFollowerRequest::toJson() const
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

bool MigrateFollowerRequest::fromJson(const web::json::value& val)
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
            FollowerMigrateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string MigrateFollowerRequest::getXLanguage() const
{
    return xLanguage_;
}

void MigrateFollowerRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool MigrateFollowerRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void MigrateFollowerRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string MigrateFollowerRequest::getInstanceId() const
{
    return instanceId_;
}

void MigrateFollowerRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool MigrateFollowerRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void MigrateFollowerRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

FollowerMigrateRequest MigrateFollowerRequest::getBody() const
{
    return body_;
}

void MigrateFollowerRequest::setBody(const FollowerMigrateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MigrateFollowerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MigrateFollowerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


