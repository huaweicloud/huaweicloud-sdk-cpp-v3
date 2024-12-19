

#include "huaweicloud/gaussdbforopengauss/v3/model/SyncLimitDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SyncLimitDataResponse::SyncLimitDataResponse()
{
    result_ = "";
    resultIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

SyncLimitDataResponse::~SyncLimitDataResponse() = default;

void SyncLimitDataResponse::validate()
{
}

web::json::value SyncLimitDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool SyncLimitDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::string SyncLimitDataResponse::getResult() const
{
    return result_;
}

void SyncLimitDataResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SyncLimitDataResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SyncLimitDataResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string SyncLimitDataResponse::getInstanceId() const
{
    return instanceId_;
}

void SyncLimitDataResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SyncLimitDataResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SyncLimitDataResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SyncLimitDataResponse::getNodeId() const
{
    return nodeId_;
}

void SyncLimitDataResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SyncLimitDataResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SyncLimitDataResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t SyncLimitDataResponse::getTotalCount() const
{
    return totalCount_;
}

void SyncLimitDataResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool SyncLimitDataResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void SyncLimitDataResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


