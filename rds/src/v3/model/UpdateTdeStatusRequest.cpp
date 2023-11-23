

#include "huaweicloud/rds/v3/model/UpdateTdeStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateTdeStatusRequest::UpdateTdeStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTdeStatusRequest::~UpdateTdeStatusRequest() = default;

void UpdateTdeStatusRequest::validate()
{
}

web::json::value UpdateTdeStatusRequest::toJson() const
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
bool UpdateTdeStatusRequest::fromJson(const web::json::value& val)
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
            UpdateTdeStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTdeStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateTdeStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateTdeStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateTdeStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateTdeStatusRequestBody UpdateTdeStatusRequest::getBody() const
{
    return body_;
}

void UpdateTdeStatusRequest::setBody(const UpdateTdeStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTdeStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTdeStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


