

#include "huaweicloud/dds/v3/model/CheckPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CheckPasswordRequest::CheckPasswordRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CheckPasswordRequest::~CheckPasswordRequest() = default;

void CheckPasswordRequest::validate()
{
}

web::json::value CheckPasswordRequest::toJson() const
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
bool CheckPasswordRequest::fromJson(const web::json::value& val)
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
            CheckPasswordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckPasswordRequest::getInstanceId() const
{
    return instanceId_;
}

void CheckPasswordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CheckPasswordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CheckPasswordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CheckPasswordRequestBody CheckPasswordRequest::getBody() const
{
    return body_;
}

void CheckPasswordRequest::setBody(const CheckPasswordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


