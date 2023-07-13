

#include "huaweicloud/ecs/v2/model/ChangeServerOsWithoutCloudInitRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerOsWithoutCloudInitRequest::ChangeServerOsWithoutCloudInitRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeServerOsWithoutCloudInitRequest::~ChangeServerOsWithoutCloudInitRequest() = default;

void ChangeServerOsWithoutCloudInitRequest::validate()
{
}

web::json::value ChangeServerOsWithoutCloudInitRequest::toJson() const
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

bool ChangeServerOsWithoutCloudInitRequest::fromJson(const web::json::value& val)
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
            ChangeServerOsWithoutCloudInitRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ChangeServerOsWithoutCloudInitRequest::getServerId() const
{
    return serverId_;
}

void ChangeServerOsWithoutCloudInitRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ChangeServerOsWithoutCloudInitRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ChangeServerOsWithoutCloudInitRequestBody ChangeServerOsWithoutCloudInitRequest::getBody() const
{
    return body_;
}

void ChangeServerOsWithoutCloudInitRequest::setBody(const ChangeServerOsWithoutCloudInitRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeServerOsWithoutCloudInitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


