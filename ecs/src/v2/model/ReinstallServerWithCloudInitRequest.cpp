

#include "huaweicloud/ecs/v2/model/ReinstallServerWithCloudInitRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallServerWithCloudInitRequest::ReinstallServerWithCloudInitRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ReinstallServerWithCloudInitRequest::~ReinstallServerWithCloudInitRequest() = default;

void ReinstallServerWithCloudInitRequest::validate()
{
}

web::json::value ReinstallServerWithCloudInitRequest::toJson() const
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

bool ReinstallServerWithCloudInitRequest::fromJson(const web::json::value& val)
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
            ReinstallServerWithCloudInitRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ReinstallServerWithCloudInitRequest::getServerId() const
{
    return serverId_;
}

void ReinstallServerWithCloudInitRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ReinstallServerWithCloudInitRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ReinstallServerWithCloudInitRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ReinstallServerWithCloudInitRequestBody ReinstallServerWithCloudInitRequest::getBody() const
{
    return body_;
}

void ReinstallServerWithCloudInitRequest::setBody(const ReinstallServerWithCloudInitRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ReinstallServerWithCloudInitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ReinstallServerWithCloudInitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


