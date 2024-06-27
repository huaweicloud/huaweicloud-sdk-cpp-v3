

#include "huaweicloud/gaussdb/v3/model/CreateClickHouseDataBaseReplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateClickHouseDataBaseReplicationRequest::CreateClickHouseDataBaseReplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateClickHouseDataBaseReplicationRequest::~CreateClickHouseDataBaseReplicationRequest() = default;

void CreateClickHouseDataBaseReplicationRequest::validate()
{
}

web::json::value CreateClickHouseDataBaseReplicationRequest::toJson() const
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
bool CreateClickHouseDataBaseReplicationRequest::fromJson(const web::json::value& val)
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
            CreateChDatabaseReplicationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateClickHouseDataBaseReplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateClickHouseDataBaseReplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateClickHouseDataBaseReplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateClickHouseDataBaseReplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateClickHouseDataBaseReplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateClickHouseDataBaseReplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateClickHouseDataBaseReplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateClickHouseDataBaseReplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateChDatabaseReplicationRequestBody CreateClickHouseDataBaseReplicationRequest::getBody() const
{
    return body_;
}

void CreateClickHouseDataBaseReplicationRequest::setBody(const CreateChDatabaseReplicationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateClickHouseDataBaseReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateClickHouseDataBaseReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


