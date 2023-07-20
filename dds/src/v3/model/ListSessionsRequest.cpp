

#include "huaweicloud/dds/v3/model/ListSessionsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListSessionsRequest::ListSessionsRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    planSummary_ = "";
    planSummaryIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    costTime_ = 0;
    costTimeIsSet_ = false;
}

ListSessionsRequest::~ListSessionsRequest() = default;

void ListSessionsRequest::validate()
{
}

web::json::value ListSessionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(planSummaryIsSet_) {
        val[utility::conversions::to_string_t("plan_summary")] = ModelBase::toJson(planSummary_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(costTimeIsSet_) {
        val[utility::conversions::to_string_t("cost_time")] = ModelBase::toJson(costTime_);
    }

    return val;
}

bool ListSessionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_summary"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanSummary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cost_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCostTime(refVal);
        }
    }
    return ok;
}

std::string ListSessionsRequest::getNodeId() const
{
    return nodeId_;
}

void ListSessionsRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListSessionsRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListSessionsRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t ListSessionsRequest::getOffset() const
{
    return offset_;
}

void ListSessionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSessionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSessionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSessionsRequest::getLimit() const
{
    return limit_;
}

void ListSessionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSessionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSessionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSessionsRequest::getPlanSummary() const
{
    return planSummary_;
}

void ListSessionsRequest::setPlanSummary(const std::string& value)
{
    planSummary_ = value;
    planSummaryIsSet_ = true;
}

bool ListSessionsRequest::planSummaryIsSet() const
{
    return planSummaryIsSet_;
}

void ListSessionsRequest::unsetplanSummary()
{
    planSummaryIsSet_ = false;
}

std::string ListSessionsRequest::getType() const
{
    return type_;
}

void ListSessionsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListSessionsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListSessionsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListSessionsRequest::getNamespace() const
{
    return namespace_;
}

void ListSessionsRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ListSessionsRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ListSessionsRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

int32_t ListSessionsRequest::getCostTime() const
{
    return costTime_;
}

void ListSessionsRequest::setCostTime(int32_t value)
{
    costTime_ = value;
    costTimeIsSet_ = true;
}

bool ListSessionsRequest::costTimeIsSet() const
{
    return costTimeIsSet_;
}

void ListSessionsRequest::unsetcostTime()
{
    costTimeIsSet_ = false;
}

}
}
}
}
}


