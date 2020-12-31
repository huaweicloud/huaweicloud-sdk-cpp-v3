

#include "huaweicloud/ecs/model/DeleteServerMetadataRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteServerMetadataRequest::DeleteServerMetadataRequest()
{
    key_ = "";
    keyIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
}

DeleteServerMetadataRequest::~DeleteServerMetadataRequest() = default;

void DeleteServerMetadataRequest::validate()
{
}

web::json::value DeleteServerMetadataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool DeleteServerMetadataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}


std::string DeleteServerMetadataRequest::getKey() const
{
    return key_;
}

void DeleteServerMetadataRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteServerMetadataRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteServerMetadataRequest::unsetkey()
{
    keyIsSet_ = false;
}

std::string DeleteServerMetadataRequest::getServerId() const
{
    return serverId_;
}

void DeleteServerMetadataRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool DeleteServerMetadataRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void DeleteServerMetadataRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


