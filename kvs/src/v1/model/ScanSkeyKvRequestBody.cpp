

#include "huaweicloud/kvs/v1/model/ScanSkeyKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ScanSkeyKvRequestBody::ScanSkeyKvRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    hintIndexName_ = "";
    hintIndexNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    shardKeyIsSet_ = false;
    startSortKeyIsSet_ = false;
    endSortKeyIsSet_ = false;
    filterExpressionIsSet_ = false;
}

ScanSkeyKvRequestBody::~ScanSkeyKvRequestBody() = default;

void ScanSkeyKvRequestBody::validate()
{
}

bool ScanSkeyKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (hintIndexNameIsSet_ && !bson_append(builder, "hint_index_name", hintIndexName_)) {
        return false;
    }
    if (limitIsSet_ && !bson_append(builder, "limit", limit_)) {
        return false;
    }
    if (shardKeyIsSet_ && !bson_append(builder, "shard_key", shardKey_)) {
        return false;
    }
    if (startSortKeyIsSet_ && !bson_append(builder, "start_sort_key", startSortKey_)) {
        return false;
    }
    if (endSortKeyIsSet_ && !bson_append(builder, "end_sort_key", endSortKey_)) {
        return false;
    }
    if (filterExpressionIsSet_ && !bson_append(builder, "filter_expression", filterExpression_)) {
        return false;
    }

    return true;
}

bool ScanSkeyKvRequestBody::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "table_name") {
            if (!bson_get(it, tableName_)) {
                return false;
            }
            tableNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "hint_index_name") {
            if (!bson_get(it, hintIndexName_)) {
                return false;
            }
            hintIndexNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "limit") {
            if (!bson_get(it, limit_)) {
                return false;
            }
            limitIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "shard_key") {
            if (!bson_get(it, shardKey_)) {
                return false;
            }
            shardKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "start_sort_key") {
            if (!bson_get(it, startSortKey_)) {
                return false;
            }
            startSortKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "end_sort_key") {
            if (!bson_get(it, endSortKey_)) {
                return false;
            }
            endSortKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "filter_expression") {
            if (!bson_get(it, filterExpression_)) {
                return false;
            }
            filterExpressionIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string ScanSkeyKvRequestBody::getTableName() const
{
    return tableName_;
}

void ScanSkeyKvRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ScanSkeyKvRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ScanSkeyKvRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ScanSkeyKvRequestBody::getHintIndexName() const
{
    return hintIndexName_;
}

void ScanSkeyKvRequestBody::setHintIndexName(const std::string& value)
{
    hintIndexName_ = value;
    hintIndexNameIsSet_ = true;
}

bool ScanSkeyKvRequestBody::hintIndexNameIsSet() const
{
    return hintIndexNameIsSet_;
}

void ScanSkeyKvRequestBody::unsethintIndexName()
{
    hintIndexNameIsSet_ = false;
}

int32_t ScanSkeyKvRequestBody::getLimit() const
{
    return limit_;
}

void ScanSkeyKvRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ScanSkeyKvRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ScanSkeyKvRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

Document ScanSkeyKvRequestBody::getShardKey() const
{
    return shardKey_;
}

void ScanSkeyKvRequestBody::setShardKey(const Document& value)
{
    shardKey_ = value;
    shardKeyIsSet_ = true;
}

bool ScanSkeyKvRequestBody::shardKeyIsSet() const
{
    return shardKeyIsSet_;
}

void ScanSkeyKvRequestBody::unsetshardKey()
{
    shardKeyIsSet_ = false;
}

Document ScanSkeyKvRequestBody::getStartSortKey() const
{
    return startSortKey_;
}

void ScanSkeyKvRequestBody::setStartSortKey(const Document& value)
{
    startSortKey_ = value;
    startSortKeyIsSet_ = true;
}

bool ScanSkeyKvRequestBody::startSortKeyIsSet() const
{
    return startSortKeyIsSet_;
}

void ScanSkeyKvRequestBody::unsetstartSortKey()
{
    startSortKeyIsSet_ = false;
}

Document ScanSkeyKvRequestBody::getEndSortKey() const
{
    return endSortKey_;
}

void ScanSkeyKvRequestBody::setEndSortKey(const Document& value)
{
    endSortKey_ = value;
    endSortKeyIsSet_ = true;
}

bool ScanSkeyKvRequestBody::endSortKeyIsSet() const
{
    return endSortKeyIsSet_;
}

void ScanSkeyKvRequestBody::unsetendSortKey()
{
    endSortKeyIsSet_ = false;
}

Condition_expression ScanSkeyKvRequestBody::getFilterExpression() const
{
    return filterExpression_;
}

void ScanSkeyKvRequestBody::setFilterExpression(const Condition_expression& value)
{
    filterExpression_ = value;
    filterExpressionIsSet_ = true;
}

bool ScanSkeyKvRequestBody::filterExpressionIsSet() const
{
    return filterExpressionIsSet_;
}

void ScanSkeyKvRequestBody::unsetfilterExpression()
{
    filterExpressionIsSet_ = false;
}

}
}
}
}
}


