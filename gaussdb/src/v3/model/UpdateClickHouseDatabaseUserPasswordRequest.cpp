

#include "huaweicloud/gaussdb/v3/model/UpdateClickHouseDatabaseUserPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateClickHouseDatabaseUserPasswordRequest::UpdateClickHouseDatabaseUserPasswordRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClickHouseDatabaseUserPasswordRequest::~UpdateClickHouseDatabaseUserPasswordRequest() = default;

void UpdateClickHouseDatabaseUserPasswordRequest::validate()
{
}

web::json::value UpdateClickHouseDatabaseUserPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateClickHouseDatabaseUserPasswordRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ClickHouseDatabaseUserPWinfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateClickHouseDatabaseUserPasswordRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateClickHouseDatabaseUserPasswordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateClickHouseDatabaseUserPasswordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateClickHouseDatabaseUserPasswordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateClickHouseDatabaseUserPasswordRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateClickHouseDatabaseUserPasswordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateClickHouseDatabaseUserPasswordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateClickHouseDatabaseUserPasswordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ClickHouseDatabaseUserPWinfo UpdateClickHouseDatabaseUserPasswordRequest::getBody() const
{
    return body_;
}

void UpdateClickHouseDatabaseUserPasswordRequest::setBody(const ClickHouseDatabaseUserPWinfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClickHouseDatabaseUserPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClickHouseDatabaseUserPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


