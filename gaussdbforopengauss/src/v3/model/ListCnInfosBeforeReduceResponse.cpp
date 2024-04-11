

#include "huaweicloud/gaussdbforopengauss/v3/model/ListCnInfosBeforeReduceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListCnInfosBeforeReduceResponse::ListCnInfosBeforeReduceResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    maxReductionNum_ = 0;
    maxReductionNumIsSet_ = false;
    nodesIsSet_ = false;
}

ListCnInfosBeforeReduceResponse::~ListCnInfosBeforeReduceResponse() = default;

void ListCnInfosBeforeReduceResponse::validate()
{
}

web::json::value ListCnInfosBeforeReduceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(maxReductionNumIsSet_) {
        val[utility::conversions::to_string_t("max_reduction_num")] = ModelBase::toJson(maxReductionNum_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool ListCnInfosBeforeReduceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_reduction_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_reduction_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxReductionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<CnInfoBeforeReduce> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}


std::string ListCnInfosBeforeReduceResponse::getInstanceId() const
{
    return instanceId_;
}

void ListCnInfosBeforeReduceResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListCnInfosBeforeReduceResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListCnInfosBeforeReduceResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListCnInfosBeforeReduceResponse::getMaxReductionNum() const
{
    return maxReductionNum_;
}

void ListCnInfosBeforeReduceResponse::setMaxReductionNum(int32_t value)
{
    maxReductionNum_ = value;
    maxReductionNumIsSet_ = true;
}

bool ListCnInfosBeforeReduceResponse::maxReductionNumIsSet() const
{
    return maxReductionNumIsSet_;
}

void ListCnInfosBeforeReduceResponse::unsetmaxReductionNum()
{
    maxReductionNumIsSet_ = false;
}

std::vector<CnInfoBeforeReduce>& ListCnInfosBeforeReduceResponse::getNodes()
{
    return nodes_;
}

void ListCnInfosBeforeReduceResponse::setNodes(const std::vector<CnInfoBeforeReduce>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ListCnInfosBeforeReduceResponse::nodesIsSet() const
{
    return nodesIsSet_;
}

void ListCnInfosBeforeReduceResponse::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


