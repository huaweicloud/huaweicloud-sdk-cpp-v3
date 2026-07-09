

#include "huaweicloud/dbss/v1/model/AddDatabaseSslKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddDatabaseSslKeyRequest::AddDatabaseSslKeyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbId_ = "";
    dbIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddDatabaseSslKeyRequest::~AddDatabaseSslKeyRequest() = default;

void AddDatabaseSslKeyRequest::validate()
{
}

web::json::value AddDatabaseSslKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddDatabaseSslKeyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadDatabaseSslFileRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddDatabaseSslKeyRequest::getInstanceId() const
{
    return instanceId_;
}

void AddDatabaseSslKeyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddDatabaseSslKeyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddDatabaseSslKeyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AddDatabaseSslKeyRequest::getDbId() const
{
    return dbId_;
}

void AddDatabaseSslKeyRequest::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool AddDatabaseSslKeyRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void AddDatabaseSslKeyRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

UploadDatabaseSslFileRequest AddDatabaseSslKeyRequest::getBody() const
{
    return body_;
}

void AddDatabaseSslKeyRequest::setBody(const UploadDatabaseSslFileRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddDatabaseSslKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddDatabaseSslKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


