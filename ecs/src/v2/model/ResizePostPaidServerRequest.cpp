

#include "huaweicloud/ecs/v2/model/ResizePostPaidServerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizePostPaidServerRequest::ResizePostPaidServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResizePostPaidServerRequest::~ResizePostPaidServerRequest() = default;

void ResizePostPaidServerRequest::validate()
{
}

web::json::value ResizePostPaidServerRequest::toJson() const
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

bool ResizePostPaidServerRequest::fromJson(const web::json::value& val)
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
            ResizePostPaidServerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResizePostPaidServerRequest::getServerId() const
{
    return serverId_;
}

void ResizePostPaidServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ResizePostPaidServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ResizePostPaidServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ResizePostPaidServerRequestBody ResizePostPaidServerRequest::getBody() const
{
    return body_;
}

void ResizePostPaidServerRequest::setBody(const ResizePostPaidServerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizePostPaidServerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizePostPaidServerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


