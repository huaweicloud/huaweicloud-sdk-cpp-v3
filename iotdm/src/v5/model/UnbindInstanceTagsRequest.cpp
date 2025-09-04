

#include "huaweicloud/iotdm/v5/model/UnbindInstanceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




UnbindInstanceTagsRequest::UnbindInstanceTagsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UnbindInstanceTagsRequest::~UnbindInstanceTagsRequest() = default;

void UnbindInstanceTagsRequest::validate()
{
}

web::json::value UnbindInstanceTagsRequest::toJson() const
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
bool UnbindInstanceTagsRequest::fromJson(const web::json::value& val)
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
            UnbindInstanceTags refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UnbindInstanceTagsRequest::getInstanceId() const
{
    return instanceId_;
}

void UnbindInstanceTagsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UnbindInstanceTagsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UnbindInstanceTagsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UnbindInstanceTags UnbindInstanceTagsRequest::getBody() const
{
    return body_;
}

void UnbindInstanceTagsRequest::setBody(const UnbindInstanceTags& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UnbindInstanceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UnbindInstanceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


