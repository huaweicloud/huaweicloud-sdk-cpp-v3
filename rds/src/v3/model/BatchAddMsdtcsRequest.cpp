

#include "huaweicloud/rds/v3/model/BatchAddMsdtcsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchAddMsdtcsRequest::BatchAddMsdtcsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddMsdtcsRequest::~BatchAddMsdtcsRequest() = default;

void BatchAddMsdtcsRequest::validate()
{
}

web::json::value BatchAddMsdtcsRequest::toJson() const
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
bool BatchAddMsdtcsRequest::fromJson(const web::json::value& val)
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
            AddMsdtcRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddMsdtcsRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchAddMsdtcsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchAddMsdtcsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchAddMsdtcsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddMsdtcRequestBody BatchAddMsdtcsRequest::getBody() const
{
    return body_;
}

void BatchAddMsdtcsRequest::setBody(const AddMsdtcRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddMsdtcsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddMsdtcsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


