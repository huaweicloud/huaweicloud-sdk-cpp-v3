

#include "huaweicloud/ecs/v2/model/BatchCreateServerTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchCreateServerTagsRequest::BatchCreateServerTagsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateServerTagsRequest::~BatchCreateServerTagsRequest() = default;

void BatchCreateServerTagsRequest::validate()
{
}

web::json::value BatchCreateServerTagsRequest::toJson() const
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
bool BatchCreateServerTagsRequest::fromJson(const web::json::value& val)
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
            BatchCreateServerTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateServerTagsRequest::getServerId() const
{
    return serverId_;
}

void BatchCreateServerTagsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool BatchCreateServerTagsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void BatchCreateServerTagsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

BatchCreateServerTagsRequestBody BatchCreateServerTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateServerTagsRequest::setBody(const BatchCreateServerTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateServerTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateServerTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


