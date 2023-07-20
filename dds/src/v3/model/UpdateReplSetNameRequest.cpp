

#include "huaweicloud/dds/v3/model/UpdateReplSetNameRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateReplSetNameRequest::UpdateReplSetNameRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateReplSetNameRequest::~UpdateReplSetNameRequest() = default;

void UpdateReplSetNameRequest::validate()
{
}

web::json::value UpdateReplSetNameRequest::toJson() const
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

bool UpdateReplSetNameRequest::fromJson(const web::json::value& val)
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
            MongoUpdateReplSetV3RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateReplSetNameRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateReplSetNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateReplSetNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateReplSetNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MongoUpdateReplSetV3RequestBody UpdateReplSetNameRequest::getBody() const
{
    return body_;
}

void UpdateReplSetNameRequest::setBody(const MongoUpdateReplSetV3RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateReplSetNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateReplSetNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


