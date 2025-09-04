

#include "huaweicloud/iotdm/v5/model/BindInstanceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




BindInstanceTagsRequest::BindInstanceTagsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BindInstanceTagsRequest::~BindInstanceTagsRequest() = default;

void BindInstanceTagsRequest::validate()
{
}

web::json::value BindInstanceTagsRequest::toJson() const
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
bool BindInstanceTagsRequest::fromJson(const web::json::value& val)
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
            BindInstanceTags refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BindInstanceTagsRequest::getInstanceId() const
{
    return instanceId_;
}

void BindInstanceTagsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BindInstanceTagsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BindInstanceTagsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BindInstanceTags BindInstanceTagsRequest::getBody() const
{
    return body_;
}

void BindInstanceTagsRequest::setBody(const BindInstanceTags& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindInstanceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindInstanceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


