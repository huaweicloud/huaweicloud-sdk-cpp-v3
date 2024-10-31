

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateLimitTaskRequest::CreateLimitTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateLimitTaskRequest::~CreateLimitTaskRequest() = default;

void CreateLimitTaskRequest::validate()
{
}

web::json::value CreateLimitTaskRequest::toJson() const
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
bool CreateLimitTaskRequest::fromJson(const web::json::value& val)
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
            CreateLimitTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateLimitTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateLimitTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateLimitTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateLimitTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateLimitTaskRequestBody CreateLimitTaskRequest::getBody() const
{
    return body_;
}

void CreateLimitTaskRequest::setBody(const CreateLimitTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLimitTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLimitTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


