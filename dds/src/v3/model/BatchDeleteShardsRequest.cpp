

#include "huaweicloud/dds/v3/model/BatchDeleteShardsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BatchDeleteShardsRequest::BatchDeleteShardsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteShardsRequest::~BatchDeleteShardsRequest() = default;

void BatchDeleteShardsRequest::validate()
{
}

web::json::value BatchDeleteShardsRequest::toJson() const
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
bool BatchDeleteShardsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteShardsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteShardsRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchDeleteShardsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchDeleteShardsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchDeleteShardsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BatchDeleteShardsRequestBody BatchDeleteShardsRequest::getBody() const
{
    return body_;
}

void BatchDeleteShardsRequest::setBody(const BatchDeleteShardsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteShardsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteShardsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


