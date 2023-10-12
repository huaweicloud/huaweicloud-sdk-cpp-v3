

#include "huaweicloud/dds/v3/model/SetBalancerWindowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SetBalancerWindowRequest::SetBalancerWindowRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetBalancerWindowRequest::~SetBalancerWindowRequest() = default;

void SetBalancerWindowRequest::validate()
{
}

web::json::value SetBalancerWindowRequest::toJson() const
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
bool SetBalancerWindowRequest::fromJson(const web::json::value& val)
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
            BalancerActiveWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetBalancerWindowRequest::getInstanceId() const
{
    return instanceId_;
}

void SetBalancerWindowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetBalancerWindowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetBalancerWindowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BalancerActiveWindow SetBalancerWindowRequest::getBody() const
{
    return body_;
}

void SetBalancerWindowRequest::setBody(const BalancerActiveWindow& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetBalancerWindowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetBalancerWindowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


