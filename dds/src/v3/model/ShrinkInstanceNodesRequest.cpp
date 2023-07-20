

#include "huaweicloud/dds/v3/model/ShrinkInstanceNodesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShrinkInstanceNodesRequest::ShrinkInstanceNodesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShrinkInstanceNodesRequest::~ShrinkInstanceNodesRequest() = default;

void ShrinkInstanceNodesRequest::validate()
{
}

web::json::value ShrinkInstanceNodesRequest::toJson() const
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

bool ShrinkInstanceNodesRequest::fromJson(const web::json::value& val)
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
            ReduceInstanceNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ShrinkInstanceNodesRequest::getInstanceId() const
{
    return instanceId_;
}

void ShrinkInstanceNodesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShrinkInstanceNodesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShrinkInstanceNodesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ReduceInstanceNodeRequestBody ShrinkInstanceNodesRequest::getBody() const
{
    return body_;
}

void ShrinkInstanceNodesRequest::setBody(const ReduceInstanceNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShrinkInstanceNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShrinkInstanceNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


