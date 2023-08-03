

#include "huaweicloud/rds/v3/model/UpdatePostgresqlInstanceAliasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlInstanceAliasRequest::UpdatePostgresqlInstanceAliasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePostgresqlInstanceAliasRequest::~UpdatePostgresqlInstanceAliasRequest() = default;

void UpdatePostgresqlInstanceAliasRequest::validate()
{
}

web::json::value UpdatePostgresqlInstanceAliasRequest::toJson() const
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

bool UpdatePostgresqlInstanceAliasRequest::fromJson(const web::json::value& val)
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
            UpdateRdsInstanceAliasRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdatePostgresqlInstanceAliasRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdatePostgresqlInstanceAliasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdatePostgresqlInstanceAliasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdatePostgresqlInstanceAliasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdatePostgresqlInstanceAliasRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdatePostgresqlInstanceAliasRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdatePostgresqlInstanceAliasRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdatePostgresqlInstanceAliasRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateRdsInstanceAliasRequest UpdatePostgresqlInstanceAliasRequest::getBody() const
{
    return body_;
}

void UpdatePostgresqlInstanceAliasRequest::setBody(const UpdateRdsInstanceAliasRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePostgresqlInstanceAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePostgresqlInstanceAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


