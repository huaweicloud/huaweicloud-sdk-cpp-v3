

#include "huaweicloud/gaussdb/v3/model/UpdateSqlFilterControlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateSqlFilterControlRequest::UpdateSqlFilterControlRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSqlFilterControlRequest::~UpdateSqlFilterControlRequest() = default;

void UpdateSqlFilterControlRequest::validate()
{
}

web::json::value UpdateSqlFilterControlRequest::toJson() const
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

bool UpdateSqlFilterControlRequest::fromJson(const web::json::value& val)
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
            OperateSqlFilterControlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateSqlFilterControlRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateSqlFilterControlRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateSqlFilterControlRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateSqlFilterControlRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateSqlFilterControlRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSqlFilterControlRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSqlFilterControlRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSqlFilterControlRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OperateSqlFilterControlReq UpdateSqlFilterControlRequest::getBody() const
{
    return body_;
}

void UpdateSqlFilterControlRequest::setBody(const OperateSqlFilterControlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSqlFilterControlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSqlFilterControlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


