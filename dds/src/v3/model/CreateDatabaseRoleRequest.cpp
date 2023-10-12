

#include "huaweicloud/dds/v3/model/CreateDatabaseRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateDatabaseRoleRequest::CreateDatabaseRoleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDatabaseRoleRequest::~CreateDatabaseRoleRequest() = default;

void CreateDatabaseRoleRequest::validate()
{
}

web::json::value CreateDatabaseRoleRequest::toJson() const
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
bool CreateDatabaseRoleRequest::fromJson(const web::json::value& val)
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
            CreateDatabaseRoleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDatabaseRoleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDatabaseRoleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDatabaseRoleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDatabaseRoleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDatabaseRoleRequestBody CreateDatabaseRoleRequest::getBody() const
{
    return body_;
}

void CreateDatabaseRoleRequest::setBody(const CreateDatabaseRoleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDatabaseRoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDatabaseRoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


