

#include "huaweicloud/ecs/v2/model/BatchDeleteServerNicsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDeleteServerNicsRequest::BatchDeleteServerNicsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteServerNicsRequest::~BatchDeleteServerNicsRequest() = default;

void BatchDeleteServerNicsRequest::validate()
{
}

web::json::value BatchDeleteServerNicsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchDeleteServerNicsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteServerNicsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchDeleteServerNicsRequest::getServerId() const
{
    return serverId_;
}

void BatchDeleteServerNicsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool BatchDeleteServerNicsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void BatchDeleteServerNicsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

BatchDeleteServerNicsRequestBody BatchDeleteServerNicsRequest::getBody() const
{
    return body_;
}

void BatchDeleteServerNicsRequest::setBody(const BatchDeleteServerNicsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteServerNicsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteServerNicsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


