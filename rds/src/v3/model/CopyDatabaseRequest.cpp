

#include "huaweicloud/rds/v3/model/CopyDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CopyDatabaseRequest::CopyDatabaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CopyDatabaseRequest::~CopyDatabaseRequest() = default;

void CopyDatabaseRequest::validate()
{
}

web::json::value CopyDatabaseRequest::toJson() const
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
bool CopyDatabaseRequest::fromJson(const web::json::value& val)
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
            AddCopyDatabaseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CopyDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void CopyDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CopyDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CopyDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddCopyDatabaseRequestBody CopyDatabaseRequest::getBody() const
{
    return body_;
}

void CopyDatabaseRequest::setBody(const AddCopyDatabaseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


