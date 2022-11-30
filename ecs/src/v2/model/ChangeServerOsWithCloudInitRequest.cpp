

#include "huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerOsWithCloudInitRequest::ChangeServerOsWithCloudInitRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeServerOsWithCloudInitRequest::~ChangeServerOsWithCloudInitRequest() = default;

void ChangeServerOsWithCloudInitRequest::validate()
{
}

web::json::value ChangeServerOsWithCloudInitRequest::toJson() const
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

bool ChangeServerOsWithCloudInitRequest::fromJson(const web::json::value& val)
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
            ChangeServerOsWithCloudInitRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeServerOsWithCloudInitRequest::getServerId() const
{
    return serverId_;
}

void ChangeServerOsWithCloudInitRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ChangeServerOsWithCloudInitRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ChangeServerOsWithCloudInitRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ChangeServerOsWithCloudInitRequestBody ChangeServerOsWithCloudInitRequest::getBody() const
{
    return body_;
}

void ChangeServerOsWithCloudInitRequest::setBody(const ChangeServerOsWithCloudInitRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeServerOsWithCloudInitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeServerOsWithCloudInitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


