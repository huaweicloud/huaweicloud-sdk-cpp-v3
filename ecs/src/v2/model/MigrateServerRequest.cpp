

#include "huaweicloud/ecs/v2/model/MigrateServerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




MigrateServerRequest::MigrateServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

MigrateServerRequest::~MigrateServerRequest() = default;

void MigrateServerRequest::validate()
{
}

web::json::value MigrateServerRequest::toJson() const
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

bool MigrateServerRequest::fromJson(const web::json::value& val)
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
            MigrateServerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string MigrateServerRequest::getServerId() const
{
    return serverId_;
}

void MigrateServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool MigrateServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void MigrateServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

MigrateServerRequestBody MigrateServerRequest::getBody() const
{
    return body_;
}

void MigrateServerRequest::setBody(const MigrateServerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MigrateServerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MigrateServerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


