

#include "huaweicloud/dds/v3/model/DeleteDatabaseUserRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteDatabaseUserRequest::DeleteDatabaseUserRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteDatabaseUserRequest::~DeleteDatabaseUserRequest() = default;

void DeleteDatabaseUserRequest::validate()
{
}

web::json::value DeleteDatabaseUserRequest::toJson() const
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

bool DeleteDatabaseUserRequest::fromJson(const web::json::value& val)
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
            DeleteDatabaseUserRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteDatabaseUserRequestBody DeleteDatabaseUserRequest::getBody() const
{
    return body_;
}

void DeleteDatabaseUserRequest::setBody(const DeleteDatabaseUserRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDatabaseUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDatabaseUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


