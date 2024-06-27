

#include "huaweicloud/gaussdb/v3/model/CreateClickHouseInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateClickHouseInstanceRequest::CreateClickHouseInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateClickHouseInstanceRequest::~CreateClickHouseInstanceRequest() = default;

void CreateClickHouseInstanceRequest::validate()
{
}

web::json::value CreateClickHouseInstanceRequest::toJson() const
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
bool CreateClickHouseInstanceRequest::fromJson(const web::json::value& val)
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
            CreateChInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateClickHouseInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateClickHouseInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateClickHouseInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateClickHouseInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateClickHouseInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateClickHouseInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateClickHouseInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateClickHouseInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateChInstanceRequestBody CreateClickHouseInstanceRequest::getBody() const
{
    return body_;
}

void CreateClickHouseInstanceRequest::setBody(const CreateChInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateClickHouseInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateClickHouseInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


