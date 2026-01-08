

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTransactionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTransactionRequestBody::ListTransactionRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    transactionQueryInfoIsSet_ = false;
}

ListTransactionRequestBody::~ListTransactionRequestBody() = default;

void ListTransactionRequestBody::validate()
{
}

web::json::value ListTransactionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(transactionQueryInfoIsSet_) {
        val[utility::conversions::to_string_t("transaction_query_info")] = ModelBase::toJson(transactionQueryInfo_);
    }

    return val;
}
bool ListTransactionRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transaction_query_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_query_info"));
        if(!fieldValue.is_null())
        {
            ListTransactionRequestBody_transaction_query_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionQueryInfo(refVal);
        }
    }
    return ok;
}


std::string ListTransactionRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListTransactionRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListTransactionRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListTransactionRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListTransactionRequestBody::getComponentId() const
{
    return componentId_;
}

void ListTransactionRequestBody::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ListTransactionRequestBody::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ListTransactionRequestBody::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

int32_t ListTransactionRequestBody::getLimit() const
{
    return limit_;
}

void ListTransactionRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTransactionRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListTransactionRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTransactionRequestBody::getOffset() const
{
    return offset_;
}

void ListTransactionRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTransactionRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTransactionRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

ListTransactionRequestBody_transaction_query_info ListTransactionRequestBody::getTransactionQueryInfo() const
{
    return transactionQueryInfo_;
}

void ListTransactionRequestBody::setTransactionQueryInfo(const ListTransactionRequestBody_transaction_query_info& value)
{
    transactionQueryInfo_ = value;
    transactionQueryInfoIsSet_ = true;
}

bool ListTransactionRequestBody::transactionQueryInfoIsSet() const
{
    return transactionQueryInfoIsSet_;
}

void ListTransactionRequestBody::unsettransactionQueryInfo()
{
    transactionQueryInfoIsSet_ = false;
}

}
}
}
}
}


