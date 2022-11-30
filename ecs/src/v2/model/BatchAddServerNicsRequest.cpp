

#include "huaweicloud/ecs/v2/model/BatchAddServerNicsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAddServerNicsRequest::BatchAddServerNicsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddServerNicsRequest::~BatchAddServerNicsRequest() = default;

void BatchAddServerNicsRequest::validate()
{
}

web::json::value BatchAddServerNicsRequest::toJson() const
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

bool BatchAddServerNicsRequest::fromJson(const web::json::value& val)
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
            BatchAddServerNicsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddServerNicsRequest::getServerId() const
{
    return serverId_;
}

void BatchAddServerNicsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool BatchAddServerNicsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void BatchAddServerNicsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

BatchAddServerNicsRequestBody BatchAddServerNicsRequest::getBody() const
{
    return body_;
}

void BatchAddServerNicsRequest::setBody(const BatchAddServerNicsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddServerNicsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddServerNicsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


