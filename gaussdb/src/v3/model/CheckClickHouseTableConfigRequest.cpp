

#include "huaweicloud/gaussdb/v3/model/CheckClickHouseTableConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckClickHouseTableConfigRequest::CheckClickHouseTableConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckClickHouseTableConfigRequest::~CheckClickHouseTableConfigRequest() = default;

void CheckClickHouseTableConfigRequest::validate()
{
}

web::json::value CheckClickHouseTableConfigRequest::toJson() const
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
bool CheckClickHouseTableConfigRequest::fromJson(const web::json::value& val)
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
            CheckChDatabaseTableConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckClickHouseTableConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void CheckClickHouseTableConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CheckClickHouseTableConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CheckClickHouseTableConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CheckClickHouseTableConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckClickHouseTableConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckClickHouseTableConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckClickHouseTableConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CheckChDatabaseTableConfigRequestBody CheckClickHouseTableConfigRequest::getBody() const
{
    return body_;
}

void CheckClickHouseTableConfigRequest::setBody(const CheckChDatabaseTableConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckClickHouseTableConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckClickHouseTableConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


