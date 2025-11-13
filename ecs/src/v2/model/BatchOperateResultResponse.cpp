

#include "huaweicloud/ecs/v2/model/BatchOperateResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchOperateResultResponse::BatchOperateResultResponse()
{
    status_ = "";
    statusIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

BatchOperateResultResponse::~BatchOperateResultResponse() = default;

void BatchOperateResultResponse::validate()
{
}

web::json::value BatchOperateResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }

    return val;
}
bool BatchOperateResultResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    return ok;
}


std::string BatchOperateResultResponse::getStatus() const
{
    return status_;
}

void BatchOperateResultResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchOperateResultResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchOperateResultResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchOperateResultResponse::getServerId() const
{
    return serverId_;
}

void BatchOperateResultResponse::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool BatchOperateResultResponse::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void BatchOperateResultResponse::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string BatchOperateResultResponse::getFailReason() const
{
    return failReason_;
}

void BatchOperateResultResponse::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool BatchOperateResultResponse::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void BatchOperateResultResponse::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}


