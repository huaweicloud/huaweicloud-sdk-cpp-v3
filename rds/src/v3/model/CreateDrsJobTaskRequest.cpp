

#include "huaweicloud/rds/v3/model/CreateDrsJobTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDrsJobTaskRequest::CreateDrsJobTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDrsJobTaskRequest::~CreateDrsJobTaskRequest() = default;

void CreateDrsJobTaskRequest::validate()
{
}

web::json::value CreateDrsJobTaskRequest::toJson() const
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
bool CreateDrsJobTaskRequest::fromJson(const web::json::value& val)
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
            CreateDrsTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDrsJobTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDrsJobTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDrsJobTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDrsJobTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDrsTaskReq CreateDrsJobTaskRequest::getBody() const
{
    return body_;
}

void CreateDrsJobTaskRequest::setBody(const CreateDrsTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDrsJobTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDrsJobTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


