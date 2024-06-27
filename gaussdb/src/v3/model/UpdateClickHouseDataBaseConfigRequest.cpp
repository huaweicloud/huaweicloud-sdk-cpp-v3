

#include "huaweicloud/gaussdb/v3/model/UpdateClickHouseDataBaseConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateClickHouseDataBaseConfigRequest::UpdateClickHouseDataBaseConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClickHouseDataBaseConfigRequest::~UpdateClickHouseDataBaseConfigRequest() = default;

void UpdateClickHouseDataBaseConfigRequest::validate()
{
}

web::json::value UpdateClickHouseDataBaseConfigRequest::toJson() const
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
bool UpdateClickHouseDataBaseConfigRequest::fromJson(const web::json::value& val)
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
            UpdateChDatabaseConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateClickHouseDataBaseConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateClickHouseDataBaseConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateClickHouseDataBaseConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateClickHouseDataBaseConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateClickHouseDataBaseConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateClickHouseDataBaseConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateClickHouseDataBaseConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateClickHouseDataBaseConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateChDatabaseConfigRequestBody UpdateClickHouseDataBaseConfigRequest::getBody() const
{
    return body_;
}

void UpdateClickHouseDataBaseConfigRequest::setBody(const UpdateChDatabaseConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClickHouseDataBaseConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClickHouseDataBaseConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


