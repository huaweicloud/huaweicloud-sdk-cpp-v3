

#include "huaweicloud/dds/v3/model/ExpandReplicasetNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ExpandReplicasetNodeRequest::ExpandReplicasetNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExpandReplicasetNodeRequest::~ExpandReplicasetNodeRequest() = default;

void ExpandReplicasetNodeRequest::validate()
{
}

web::json::value ExpandReplicasetNodeRequest::toJson() const
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
bool ExpandReplicasetNodeRequest::fromJson(const web::json::value& val)
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
            EnlargeReplicasetNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExpandReplicasetNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void ExpandReplicasetNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExpandReplicasetNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExpandReplicasetNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

EnlargeReplicasetNodeRequestBody ExpandReplicasetNodeRequest::getBody() const
{
    return body_;
}

void ExpandReplicasetNodeRequest::setBody(const EnlargeReplicasetNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExpandReplicasetNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExpandReplicasetNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


