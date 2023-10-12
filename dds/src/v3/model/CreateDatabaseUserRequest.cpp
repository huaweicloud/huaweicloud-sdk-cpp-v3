

#include "huaweicloud/dds/v3/model/CreateDatabaseUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateDatabaseUserRequest::CreateDatabaseUserRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDatabaseUserRequest::~CreateDatabaseUserRequest() = default;

void CreateDatabaseUserRequest::validate()
{
}

web::json::value CreateDatabaseUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDatabaseUserRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDatabaseUserRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDatabaseUserRequestBody CreateDatabaseUserRequest::getBody() const
{
    return body_;
}

void CreateDatabaseUserRequest::setBody(const CreateDatabaseUserRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDatabaseUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDatabaseUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


