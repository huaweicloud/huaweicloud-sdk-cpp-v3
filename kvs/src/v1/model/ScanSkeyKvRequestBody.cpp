

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
    strongConsistent_ = false;
    strongConsistentIsSet_ = false;
    hintIndex_ = "";
    hintIndexIsSet_ = false;
    limitNum_ = 0;
    limitNumIsSet_ = false;
    shardKeyIsSet_ = false;
    startSortKeyIsSet_ = false;
    endSortKeyIsSet_ = false;
    filterExpressionIsSet_ = false;
    filterVarDefineIsSet_ = false;
    projectionFieldsIsSet_ = false;
    returnPartialBlobIsSet_ = false;
}

ScanSkeyKvRequestBody::~ScanSkeyKvRequestBody() = default;

void ScanSkeyKvRequestBody::validate()
{
}

bool ScanSkeyKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (strongConsistentIsSet_ && !bson_append(builder, "StrongConsistent", strongConsistent_)) {
        return false;
    }
    if (hintIndexIsSet_ && !bson_append(builder, "HintIndex", hintIndex_)) {
        return false;
    }
    if (limitNumIsSet_ && !bson_append(builder, "LimitNum", limitNum_)) {
        return false;
    }
    if (shardKeyIsSet_ && !bson_append(builder, "ShardKey", shardKey_)) {
        return false;
    }
    if (startSortKeyIsSet_ && !bson_append(builder, "StartSortKey", startSortKey_)) {
        return false;
    }
    if (endSortKeyIsSet_ && !bson_append(builder, "EndSortKey", endSortKey_)) {
        return false;
    }
    if (filterExpressionIsSet_ && !bson_append(builder, "FilterExpression", filterExpression_)) {
        return false;
    }
    if (filterVarDefineIsSet_ && !bson_append(builder, "FilterVarDefine", filterVarDefine_)) {
        return false;
    }
    if (projectionFieldsIsSet_ && !bson_append(builder, "ProjectionFields", projectionFields_)) {
        return false;
    }
    if (returnPartialBlobIsSet_ && !bson_append(builder, "ReturnPartialBlob", returnPartialBlob_)) {
        return false;
    }

    return true;
}

bool ScanSkeyKvRequestBody::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "TableName") {
            if (!bson_get(it, tableName_)) {
                return false;
            }
            tableNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "StrongConsistent") {
            if (!bson_get(it, strongConsistent_)) {
                return false;
            }
            strongConsistentIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "HintIndex") {
            if (!bson_get(it, hintIndex_)) {
                return false;
            }
            hintIndexIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "LimitNum") {
            if (!bson_get(it, limitNum_)) {
                return false;
            }
            limitNumIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ShardKey") {
            if (!bson_get(it, shardKey_)) {
                return false;
            }
            shardKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "StartSortKey") {
            if (!bson_get(it, startSortKey_)) {
                return false;
            }
            startSortKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "EndSortKey") {
            if (!bson_get(it, endSortKey_)) {
                return false;
            }
            endSortKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "FilterExpression") {
            if (!bson_get(it, filterExpression_)) {
                return false;
            }
            filterExpressionIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "FilterVarDefine") {
            if (!bson_get(it, filterVarDefine_)) {
                return false;
            }
            filterVarDefineIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ProjectionFields") {
            if (!bson_get(it, projectionFields_)) {
                return false;
            }
            projectionFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ReturnPartialBlob") {
            if (!bson_get(it, returnPartialBlob_)) {
                return false;
            }
            returnPartialBlobIsSet_ = true;
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

bool ScanSkeyKvRequestBody::isStrongConsistent() const
{
    return strongConsistent_;
}

void ScanSkeyKvRequestBody::setStrongConsistent(bool value)
{
    strongConsistent_ = value;
    strongConsistentIsSet_ = true;
}

bool ScanSkeyKvRequestBody::strongConsistentIsSet() const
{
    return strongConsistentIsSet_;
}

void ScanSkeyKvRequestBody::unsetstrongConsistent()
{
    strongConsistentIsSet_ = false;
}

std::string ScanSkeyKvRequestBody::getHintIndex() const
{
    return hintIndex_;
}

void ScanSkeyKvRequestBody::setHintIndex(const std::string& value)
{
    hintIndex_ = value;
    hintIndexIsSet_ = true;
}

bool ScanSkeyKvRequestBody::hintIndexIsSet() const
{
    return hintIndexIsSet_;
}

void ScanSkeyKvRequestBody::unsethintIndex()
{
    hintIndexIsSet_ = false;
}

int32_t ScanSkeyKvRequestBody::getLimitNum() const
{
    return limitNum_;
}

void ScanSkeyKvRequestBody::setLimitNum(int32_t value)
{
    limitNum_ = value;
    limitNumIsSet_ = true;
}

bool ScanSkeyKvRequestBody::limitNumIsSet() const
{
    return limitNumIsSet_;
}

void ScanSkeyKvRequestBody::unsetlimitNum()
{
    limitNumIsSet_ = false;
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

ConditionExpression ScanSkeyKvRequestBody::getFilterExpression() const
{
    return filterExpression_;
}

void ScanSkeyKvRequestBody::setFilterExpression(const ConditionExpression& value)
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

Document ScanSkeyKvRequestBody::getFilterVarDefine() const
{
    return filterVarDefine_;
}

void ScanSkeyKvRequestBody::setFilterVarDefine(const Document& value)
{
    filterVarDefine_ = value;
    filterVarDefineIsSet_ = true;
}

bool ScanSkeyKvRequestBody::filterVarDefineIsSet() const
{
    return filterVarDefineIsSet_;
}

void ScanSkeyKvRequestBody::unsetfilterVarDefine()
{
    filterVarDefineIsSet_ = false;
}

std::vector<std::string>& ScanSkeyKvRequestBody::getProjectionFields()
{
    return projectionFields_;
}

void ScanSkeyKvRequestBody::setProjectionFields(const std::vector<std::string>& value)
{
    projectionFields_ = value;
    projectionFieldsIsSet_ = true;
}

bool ScanSkeyKvRequestBody::projectionFieldsIsSet() const
{
    return projectionFieldsIsSet_;
}

void ScanSkeyKvRequestBody::unsetprojectionFields()
{
    projectionFieldsIsSet_ = false;
}

ReturnPartialBlob ScanSkeyKvRequestBody::getReturnPartialBlob() const
{
    return returnPartialBlob_;
}

void ScanSkeyKvRequestBody::setReturnPartialBlob(const ReturnPartialBlob& value)
{
    returnPartialBlob_ = value;
    returnPartialBlobIsSet_ = true;
}

bool ScanSkeyKvRequestBody::returnPartialBlobIsSet() const
{
    return returnPartialBlobIsSet_;
}

void ScanSkeyKvRequestBody::unsetreturnPartialBlob()
{
    returnPartialBlobIsSet_ = false;
}

}
}
}
}
}


