

#include "huaweicloud/kvs/v1/model/ScanKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ScanKvRequestBody::ScanKvRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    strongConsistent_ = false;
    strongConsistentIsSet_ = false;
    hintIndex_ = "";
    hintIndexIsSet_ = false;
    limitNum_ = 0;
    limitNumIsSet_ = false;
    startKeyIsSet_ = false;
    endKeyIsSet_ = false;
    filterExpressionIsSet_ = false;
    filterVarDefineIsSet_ = false;
    projectionFieldsIsSet_ = false;
    returnPartialBlobIsSet_ = false;
}

ScanKvRequestBody::~ScanKvRequestBody() = default;

void ScanKvRequestBody::validate()
{
}

bool ScanKvRequestBody::toBson(Builder &builder) const
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
    if (startKeyIsSet_ && !bson_append(builder, "StartKey", startKey_)) {
        return false;
    }
    if (endKeyIsSet_ && !bson_append(builder, "EndKey", endKey_)) {
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

bool ScanKvRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "StartKey") {
            if (!bson_get(it, startKey_)) {
                return false;
            }
            startKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "EndKey") {
            if (!bson_get(it, endKey_)) {
                return false;
            }
            endKeyIsSet_ = true;
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

std::string ScanKvRequestBody::getTableName() const
{
    return tableName_;
}

void ScanKvRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ScanKvRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ScanKvRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

bool ScanKvRequestBody::isStrongConsistent() const
{
    return strongConsistent_;
}

void ScanKvRequestBody::setStrongConsistent(bool value)
{
    strongConsistent_ = value;
    strongConsistentIsSet_ = true;
}

bool ScanKvRequestBody::strongConsistentIsSet() const
{
    return strongConsistentIsSet_;
}

void ScanKvRequestBody::unsetstrongConsistent()
{
    strongConsistentIsSet_ = false;
}

std::string ScanKvRequestBody::getHintIndex() const
{
    return hintIndex_;
}

void ScanKvRequestBody::setHintIndex(const std::string& value)
{
    hintIndex_ = value;
    hintIndexIsSet_ = true;
}

bool ScanKvRequestBody::hintIndexIsSet() const
{
    return hintIndexIsSet_;
}

void ScanKvRequestBody::unsethintIndex()
{
    hintIndexIsSet_ = false;
}

int32_t ScanKvRequestBody::getLimitNum() const
{
    return limitNum_;
}

void ScanKvRequestBody::setLimitNum(int32_t value)
{
    limitNum_ = value;
    limitNumIsSet_ = true;
}

bool ScanKvRequestBody::limitNumIsSet() const
{
    return limitNumIsSet_;
}

void ScanKvRequestBody::unsetlimitNum()
{
    limitNumIsSet_ = false;
}

Document ScanKvRequestBody::getStartKey() const
{
    return startKey_;
}

void ScanKvRequestBody::setStartKey(const Document& value)
{
    startKey_ = value;
    startKeyIsSet_ = true;
}

bool ScanKvRequestBody::startKeyIsSet() const
{
    return startKeyIsSet_;
}

void ScanKvRequestBody::unsetstartKey()
{
    startKeyIsSet_ = false;
}

Document ScanKvRequestBody::getEndKey() const
{
    return endKey_;
}

void ScanKvRequestBody::setEndKey(const Document& value)
{
    endKey_ = value;
    endKeyIsSet_ = true;
}

bool ScanKvRequestBody::endKeyIsSet() const
{
    return endKeyIsSet_;
}

void ScanKvRequestBody::unsetendKey()
{
    endKeyIsSet_ = false;
}

ConditionExpression ScanKvRequestBody::getFilterExpression() const
{
    return filterExpression_;
}

void ScanKvRequestBody::setFilterExpression(const ConditionExpression& value)
{
    filterExpression_ = value;
    filterExpressionIsSet_ = true;
}

bool ScanKvRequestBody::filterExpressionIsSet() const
{
    return filterExpressionIsSet_;
}

void ScanKvRequestBody::unsetfilterExpression()
{
    filterExpressionIsSet_ = false;
}

Document ScanKvRequestBody::getFilterVarDefine() const
{
    return filterVarDefine_;
}

void ScanKvRequestBody::setFilterVarDefine(const Document& value)
{
    filterVarDefine_ = value;
    filterVarDefineIsSet_ = true;
}

bool ScanKvRequestBody::filterVarDefineIsSet() const
{
    return filterVarDefineIsSet_;
}

void ScanKvRequestBody::unsetfilterVarDefine()
{
    filterVarDefineIsSet_ = false;
}

std::vector<std::string>& ScanKvRequestBody::getProjectionFields()
{
    return projectionFields_;
}

void ScanKvRequestBody::setProjectionFields(const std::vector<std::string>& value)
{
    projectionFields_ = value;
    projectionFieldsIsSet_ = true;
}

bool ScanKvRequestBody::projectionFieldsIsSet() const
{
    return projectionFieldsIsSet_;
}

void ScanKvRequestBody::unsetprojectionFields()
{
    projectionFieldsIsSet_ = false;
}

ReturnPartialBlob ScanKvRequestBody::getReturnPartialBlob() const
{
    return returnPartialBlob_;
}

void ScanKvRequestBody::setReturnPartialBlob(const ReturnPartialBlob& value)
{
    returnPartialBlob_ = value;
    returnPartialBlobIsSet_ = true;
}

bool ScanKvRequestBody::returnPartialBlobIsSet() const
{
    return returnPartialBlobIsSet_;
}

void ScanKvRequestBody::unsetreturnPartialBlob()
{
    returnPartialBlobIsSet_ = false;
}

}
}
}
}
}


