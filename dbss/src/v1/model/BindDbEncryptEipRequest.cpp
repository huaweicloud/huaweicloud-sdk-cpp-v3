

#include "huaweicloud/dbss/v1/model/BindDbEncryptEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BindDbEncryptEipRequest::BindDbEncryptEipRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BindDbEncryptEipRequest::~BindDbEncryptEipRequest() = default;

void BindDbEncryptEipRequest::validate()
{
}

web::json::value BindDbEncryptEipRequest::toJson() const
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
bool BindDbEncryptEipRequest::fromJson(const web::json::value& val)
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
            BindEIPRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BindDbEncryptEipRequest::getInstanceId() const
{
    return instanceId_;
}

void BindDbEncryptEipRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BindDbEncryptEipRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BindDbEncryptEipRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BindEIPRequest BindDbEncryptEipRequest::getBody() const
{
    return body_;
}

void BindDbEncryptEipRequest::setBody(const BindEIPRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindDbEncryptEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindDbEncryptEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


