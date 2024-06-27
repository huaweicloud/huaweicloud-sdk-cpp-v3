

#include "huaweicloud/gaussdb/v3/model/ShowClickHouseSlowLogDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowClickHouseSlowLogDetailRequest::ShowClickHouseSlowLogDetailRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowClickHouseSlowLogDetailRequest::~ShowClickHouseSlowLogDetailRequest() = default;

void ShowClickHouseSlowLogDetailRequest::validate()
{
}

web::json::value ShowClickHouseSlowLogDetailRequest::toJson() const
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
bool ShowClickHouseSlowLogDetailRequest::fromJson(const web::json::value& val)
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
            ChSlowLogQueryRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowClickHouseSlowLogDetailRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowClickHouseSlowLogDetailRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowClickHouseSlowLogDetailRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowClickHouseSlowLogDetailRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowClickHouseSlowLogDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowClickHouseSlowLogDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowClickHouseSlowLogDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowClickHouseSlowLogDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ChSlowLogQueryRequestBody ShowClickHouseSlowLogDetailRequest::getBody() const
{
    return body_;
}

void ShowClickHouseSlowLogDetailRequest::setBody(const ChSlowLogQueryRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowClickHouseSlowLogDetailRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowClickHouseSlowLogDetailRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


