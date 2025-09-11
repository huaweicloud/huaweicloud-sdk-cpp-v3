

#include "huaweicloud/dbss/v1/model/BindDbOmEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BindDbOmEipRequest::BindDbOmEipRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BindDbOmEipRequest::~BindDbOmEipRequest() = default;

void BindDbOmEipRequest::validate()
{
}

web::json::value BindDbOmEipRequest::toJson() const
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
bool BindDbOmEipRequest::fromJson(const web::json::value& val)
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


std::string BindDbOmEipRequest::getInstanceId() const
{
    return instanceId_;
}

void BindDbOmEipRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BindDbOmEipRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BindDbOmEipRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BindEIPRequest BindDbOmEipRequest::getBody() const
{
    return body_;
}

void BindDbOmEipRequest::setBody(const BindEIPRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindDbOmEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindDbOmEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


