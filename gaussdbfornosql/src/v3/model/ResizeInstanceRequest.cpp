

#include "huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResizeInstanceRequest::ResizeInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeInstanceRequest::~ResizeInstanceRequest() = default;

void ResizeInstanceRequest::validate()
{
}

web::json::value ResizeInstanceRequest::toJson() const
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
bool ResizeInstanceRequest::fromJson(const web::json::value& val)
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
            ResizeInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResizeInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void ResizeInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResizeInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResizeInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ResizeInstanceRequestBody ResizeInstanceRequest::getBody() const
{
    return body_;
}

void ResizeInstanceRequest::setBody(const ResizeInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


