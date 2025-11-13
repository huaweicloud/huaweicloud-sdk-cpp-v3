

#include "huaweicloud/ecs/v2/model/BatchDeleteServerGroupMemberResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDeleteServerGroupMemberResponse::BatchDeleteServerGroupMemberResponse()
{
    status_ = "";
    statusIsSet_ = false;
    serversIsSet_ = false;
}

BatchDeleteServerGroupMemberResponse::~BatchDeleteServerGroupMemberResponse() = default;

void BatchDeleteServerGroupMemberResponse::validate()
{
}

web::json::value BatchDeleteServerGroupMemberResponse::toJson() const
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
bool BatchDeleteServerGroupMemberResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteServerGroupMemberResponse::getStatus() const
{
    return status_;
}

void BatchDeleteServerGroupMemberResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteServerGroupMemberResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteServerGroupMemberResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<BatchOperateResultResponse>& BatchDeleteServerGroupMemberResponse::getServers()
{
    return servers_;
}

void BatchDeleteServerGroupMemberResponse::setServers(const std::vector<BatchOperateResultResponse>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool BatchDeleteServerGroupMemberResponse::serversIsSet() const
{
    return serversIsSet_;
}

void BatchDeleteServerGroupMemberResponse::unsetservers()
{
    serversIsSet_ = false;
}

}
}
}
}
}


