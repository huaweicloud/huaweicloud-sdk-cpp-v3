

#include "huaweicloud/gaussdb/v3/model/ResizeClickHouseInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResizeClickHouseInstanceRequest::ResizeClickHouseInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeClickHouseInstanceRequest::~ResizeClickHouseInstanceRequest() = default;

void ResizeClickHouseInstanceRequest::validate()
{
}

web::json::value ResizeClickHouseInstanceRequest::toJson() const
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
bool ResizeClickHouseInstanceRequest::fromJson(const web::json::value& val)
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
            ChEnlargeVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResizeClickHouseInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void ResizeClickHouseInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResizeClickHouseInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResizeClickHouseInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ResizeClickHouseInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResizeClickHouseInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResizeClickHouseInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResizeClickHouseInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ChEnlargeVolumeRequestBody ResizeClickHouseInstanceRequest::getBody() const
{
    return body_;
}

void ResizeClickHouseInstanceRequest::setBody(const ChEnlargeVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeClickHouseInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeClickHouseInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


