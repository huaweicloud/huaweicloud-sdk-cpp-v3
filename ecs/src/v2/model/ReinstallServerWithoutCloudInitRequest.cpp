

#include "huaweicloud/ecs/v2/model/ReinstallServerWithoutCloudInitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallServerWithoutCloudInitRequest::ReinstallServerWithoutCloudInitRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ReinstallServerWithoutCloudInitRequest::~ReinstallServerWithoutCloudInitRequest() = default;

void ReinstallServerWithoutCloudInitRequest::validate()
{
}

web::json::value ReinstallServerWithoutCloudInitRequest::toJson() const
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
bool ReinstallServerWithoutCloudInitRequest::fromJson(const web::json::value& val)
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
            ReinstallServerWithoutCloudInitRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ReinstallServerWithoutCloudInitRequest::getServerId() const
{
    return serverId_;
}

void ReinstallServerWithoutCloudInitRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ReinstallServerWithoutCloudInitRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ReinstallServerWithoutCloudInitRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ReinstallServerWithoutCloudInitRequestBody ReinstallServerWithoutCloudInitRequest::getBody() const
{
    return body_;
}

void ReinstallServerWithoutCloudInitRequest::setBody(const ReinstallServerWithoutCloudInitRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ReinstallServerWithoutCloudInitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ReinstallServerWithoutCloudInitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


