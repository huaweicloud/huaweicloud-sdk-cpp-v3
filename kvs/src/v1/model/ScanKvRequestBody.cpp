

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
    hintIndexName_ = "";
    hintIndexNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startKeyIsSet_ = false;
    endKeyIsSet_ = false;
    filterExpressionIsSet_ = false;
    projectionFieldsIsSet_ = false;
    sampleSegmentsCount_ = 0;
    sampleSegmentsCountIsSet_ = false;
    returnCountOnly_ = false;
    returnCountOnlyIsSet_ = false;
}

ScanKvRequestBody::~ScanKvRequestBody() = default;

void ScanKvRequestBody::validate()
{
}

bool ScanKvRequestBody::toBson(Builder &builder) const
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
    if (startKeyIsSet_ && !bson_append(builder, "start_key", startKey_)) {
        return false;
    }
    if (endKeyIsSet_ && !bson_append(builder, "end_key", endKey_)) {
        return false;
    }
    if (filterExpressionIsSet_ && !bson_append(builder, "filter_expression", filterExpression_)) {
        return false;
    }
    if (projectionFieldsIsSet_ && !bson_append(builder, "projection_fields", projectionFields_)) {
        return false;
    }
    if (sampleSegmentsCountIsSet_ && !bson_append(builder, "sample_segments_count", sampleSegmentsCount_)) {
        return false;
    }
    if (returnCountOnlyIsSet_ && !bson_append(builder, "return_count_only", returnCountOnly_)) {
        return false;
    }

    return true;
}

bool ScanKvRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "start_key") {
            if (!bson_get(it, startKey_)) {
                return false;
            }
            startKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "end_key") {
            if (!bson_get(it, endKey_)) {
                return false;
            }
            endKeyIsSet_ = true;
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
        
        if (key == "projection_fields") {
            if (!bson_get(it, projectionFields_)) {
                return false;
            }
            projectionFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "sample_segments_count") {
            if (!bson_get(it, sampleSegmentsCount_)) {
                return false;
            }
            sampleSegmentsCountIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "return_count_only") {
            if (!bson_get(it, returnCountOnly_)) {
                return false;
            }
            returnCountOnlyIsSet_ = true;
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

std::string ScanKvRequestBody::getHintIndexName() const
{
    return hintIndexName_;
}

void ScanKvRequestBody::setHintIndexName(const std::string& value)
{
    hintIndexName_ = value;
    hintIndexNameIsSet_ = true;
}

bool ScanKvRequestBody::hintIndexNameIsSet() const
{
    return hintIndexNameIsSet_;
}

void ScanKvRequestBody::unsethintIndexName()
{
    hintIndexNameIsSet_ = false;
}

int32_t ScanKvRequestBody::getLimit() const
{
    return limit_;
}

void ScanKvRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ScanKvRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ScanKvRequestBody::unsetlimit()
{
    limitIsSet_ = false;
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

Condition_expression ScanKvRequestBody::getFilterExpression() const
{
    return filterExpression_;
}

void ScanKvRequestBody::setFilterExpression(const Condition_expression& value)
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

int32_t ScanKvRequestBody::getSampleSegmentsCount() const
{
    return sampleSegmentsCount_;
}

void ScanKvRequestBody::setSampleSegmentsCount(int32_t value)
{
    sampleSegmentsCount_ = value;
    sampleSegmentsCountIsSet_ = true;
}

bool ScanKvRequestBody::sampleSegmentsCountIsSet() const
{
    return sampleSegmentsCountIsSet_;
}

void ScanKvRequestBody::unsetsampleSegmentsCount()
{
    sampleSegmentsCountIsSet_ = false;
}

bool ScanKvRequestBody::isReturnCountOnly() const
{
    return returnCountOnly_;
}

void ScanKvRequestBody::setReturnCountOnly(bool value)
{
    returnCountOnly_ = value;
    returnCountOnlyIsSet_ = true;
}

bool ScanKvRequestBody::returnCountOnlyIsSet() const
{
    return returnCountOnlyIsSet_;
}

void ScanKvRequestBody::unsetreturnCountOnly()
{
    returnCountOnlyIsSet_ = false;
}

}
}
}
}
}


