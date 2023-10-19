

#include "huaweicloud/kvs/v1/model/TableBatchGet.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TableBatchGet::TableBatchGet()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    consistency_ = false;
    consistencyIsSet_ = false;
    kvOpersIsSet_ = false;
    projectionFieldsIsSet_ = false;
    returnPartialBlobIsSet_ = false;
}

TableBatchGet::~TableBatchGet() = default;

void TableBatchGet::validate()
{
}

bool TableBatchGet::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (consistencyIsSet_ && !bson_append(builder, "Consistency", consistency_)) {
        return false;
    }
    if (kvOpersIsSet_ && !bson_append(builder, "KvOpers", kvOpers_)) {
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

bool TableBatchGet::fromBson(const Viewer &viewer)
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
        
        if (key == "Consistency") {
            if (!bson_get(it, consistency_)) {
                return false;
            }
            consistencyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "KvOpers") {
            if (!bson_get(it, kvOpers_)) {
                return false;
            }
            kvOpersIsSet_ = true;
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

std::string TableBatchGet::getTableName() const
{
    return tableName_;
}

void TableBatchGet::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool TableBatchGet::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void TableBatchGet::unsettableName()
{
    tableNameIsSet_ = false;
}

bool TableBatchGet::isConsistency() const
{
    return consistency_;
}

void TableBatchGet::setConsistency(bool value)
{
    consistency_ = value;
    consistencyIsSet_ = true;
}

bool TableBatchGet::consistencyIsSet() const
{
    return consistencyIsSet_;
}

void TableBatchGet::unsetconsistency()
{
    consistencyIsSet_ = false;
}

std::vector<OperItem>& TableBatchGet::getKvOpers()
{
    return kvOpers_;
}

void TableBatchGet::setKvOpers(const std::vector<OperItem>& value)
{
    kvOpers_ = value;
    kvOpersIsSet_ = true;
}

bool TableBatchGet::kvOpersIsSet() const
{
    return kvOpersIsSet_;
}

void TableBatchGet::unsetkvOpers()
{
    kvOpersIsSet_ = false;
}

std::vector<std::string>& TableBatchGet::getProjectionFields()
{
    return projectionFields_;
}

void TableBatchGet::setProjectionFields(const std::vector<std::string>& value)
{
    projectionFields_ = value;
    projectionFieldsIsSet_ = true;
}

bool TableBatchGet::projectionFieldsIsSet() const
{
    return projectionFieldsIsSet_;
}

void TableBatchGet::unsetprojectionFields()
{
    projectionFieldsIsSet_ = false;
}

ReturnPartialBlob TableBatchGet::getReturnPartialBlob() const
{
    return returnPartialBlob_;
}

void TableBatchGet::setReturnPartialBlob(const ReturnPartialBlob& value)
{
    returnPartialBlob_ = value;
    returnPartialBlobIsSet_ = true;
}

bool TableBatchGet::returnPartialBlobIsSet() const
{
    return returnPartialBlobIsSet_;
}

void TableBatchGet::unsetreturnPartialBlob()
{
    returnPartialBlobIsSet_ = false;
}

}
}
}
}
}


