

#include "huaweicloud/ecs/model/SubJobEntities.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




SubJobEntities::SubJobEntities()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    nicId_ = "";
    nicIdIsSet_ = false;
    errorcodeMessage_ = "";
    errorcodeMessageIsSet_ = false;
}

SubJobEntities::~SubJobEntities() = default;

void SubJobEntities::validate()
{
}

web::json::value SubJobEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(nicIdIsSet_) {
        val[utility::conversions::to_string_t("nic_id")] = ModelBase::toJson(nicId_);
    }
    if(errorcodeMessageIsSet_) {
        val[utility::conversions::to_string_t("errorcode_message")] = ModelBase::toJson(errorcodeMessage_);
    }

    return val;
}

bool SubJobEntities::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errorcode_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorcode_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorcodeMessage(refVal);
        }
    }
    return ok;
}


std::string SubJobEntities::getServerId() const
{
    return serverId_;
}

void SubJobEntities::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool SubJobEntities::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void SubJobEntities::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string SubJobEntities::getNicId() const
{
    return nicId_;
}

void SubJobEntities::setNicId(const std::string& value)
{
    nicId_ = value;
    nicIdIsSet_ = true;
}

bool SubJobEntities::nicIdIsSet() const
{
    return nicIdIsSet_;
}

void SubJobEntities::unsetnicId()
{
    nicIdIsSet_ = false;
}

std::string SubJobEntities::getErrorcodeMessage() const
{
    return errorcodeMessage_;
}

void SubJobEntities::setErrorcodeMessage(const std::string& value)
{
    errorcodeMessage_ = value;
    errorcodeMessageIsSet_ = true;
}

bool SubJobEntities::errorcodeMessageIsSet() const
{
    return errorcodeMessageIsSet_;
}

void SubJobEntities::unseterrorcodeMessage()
{
    errorcodeMessageIsSet_ = false;
}

}
}
}
}
}


