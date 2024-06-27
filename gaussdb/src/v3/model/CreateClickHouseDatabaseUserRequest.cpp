

#include "huaweicloud/gaussdb/v3/model/CreateClickHouseDatabaseUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateClickHouseDatabaseUserRequest::CreateClickHouseDatabaseUserRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateClickHouseDatabaseUserRequest::~CreateClickHouseDatabaseUserRequest() = default;

void CreateClickHouseDatabaseUserRequest::validate()
{
}

web::json::value CreateClickHouseDatabaseUserRequest::toJson() const
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
bool CreateClickHouseDatabaseUserRequest::fromJson(const web::json::value& val)
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
            ClickHouseDatabaseUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateClickHouseDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateClickHouseDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateClickHouseDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateClickHouseDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateClickHouseDatabaseUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateClickHouseDatabaseUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateClickHouseDatabaseUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateClickHouseDatabaseUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ClickHouseDatabaseUserInfo CreateClickHouseDatabaseUserRequest::getBody() const
{
    return body_;
}

void CreateClickHouseDatabaseUserRequest::setBody(const ClickHouseDatabaseUserInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateClickHouseDatabaseUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateClickHouseDatabaseUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


