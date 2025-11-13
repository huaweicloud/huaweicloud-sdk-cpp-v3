

#include "huaweicloud/ecs/v2/model/BatchAddServerGroupMemberResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAddServerGroupMemberResponse::BatchAddServerGroupMemberResponse()
{
    status_ = "";
    statusIsSet_ = false;
    serversIsSet_ = false;
}

BatchAddServerGroupMemberResponse::~BatchAddServerGroupMemberResponse() = default;

void BatchAddServerGroupMemberResponse::validate()
{
}

web::json::value BatchAddServerGroupMemberResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }

    return val;
}
bool BatchAddServerGroupMemberResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchOperateResultResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    return ok;
}


std::string BatchAddServerGroupMemberResponse::getStatus() const
{
    return status_;
}

void BatchAddServerGroupMemberResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchAddServerGroupMemberResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchAddServerGroupMemberResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<BatchOperateResultResponse>& BatchAddServerGroupMemberResponse::getServers()
{
    return servers_;
}

void BatchAddServerGroupMemberResponse::setServers(const std::vector<BatchOperateResultResponse>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool BatchAddServerGroupMemberResponse::serversIsSet() const
{
    return serversIsSet_;
}

void BatchAddServerGroupMemberResponse::unsetservers()
{
    serversIsSet_ = false;
}

}
}
}
}
}


