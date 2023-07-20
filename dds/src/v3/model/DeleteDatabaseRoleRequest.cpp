

#include "huaweicloud/dds/v3/model/DeleteDatabaseRoleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteDatabaseRoleRequest::DeleteDatabaseRoleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteDatabaseRoleRequest::~DeleteDatabaseRoleRequest() = default;

void DeleteDatabaseRoleRequest::validate()
{
}

web::json::value DeleteDatabaseRoleRequest::toJson() const
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

bool DeleteDatabaseRoleRequest::fromJson(const web::json::value& val)
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
            DeleteDatabaseRoleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteDatabaseRoleRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDatabaseRoleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDatabaseRoleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDatabaseRoleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteDatabaseRoleRequestBody DeleteDatabaseRoleRequest::getBody() const
{
    return body_;
}

void DeleteDatabaseRoleRequest::setBody(const DeleteDatabaseRoleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDatabaseRoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDatabaseRoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


