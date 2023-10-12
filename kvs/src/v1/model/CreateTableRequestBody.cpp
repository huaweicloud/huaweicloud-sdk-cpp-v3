

#include "huaweicloud/kvs/v1/model/CreateTableRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




CreateTableRequestBody::CreateTableRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    temporary_ = false;
    temporaryIsSet_ = false;
    primaryKeySchemaIsSet_ = false;
    local2ndIndexSchemaIsSet_ = false;
    global2ndIndexSchemaIsSet_ = false;
    preSplitKeyOptionsIsSet_ = false;
}

CreateTableRequestBody::~CreateTableRequestBody() = default;

void CreateTableRequestBody::validate()
{
}

bool CreateTableRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (temporaryIsSet_ && !bson_append(builder, "Temporary", temporary_)) {
        return false;
    }
    if (primaryKeySchemaIsSet_ && !bson_append(builder, "PrimaryKeySchema", primaryKeySchema_)) {
        return false;
    }
    if (local2ndIndexSchemaIsSet_ && !bson_append(builder, "Local2ndIndexSchema", local2ndIndexSchema_)) {
        return false;
    }
    if (global2ndIndexSchemaIsSet_ && !bson_append(builder, "Global2ndIndexSchema", global2ndIndexSchema_)) {
        return false;
    }
    if (preSplitKeyOptionsIsSet_ && !bson_append(builder, "PreSplitKeyOptions", preSplitKeyOptions_)) {
        return false;
    }

    return true;
}

bool CreateTableRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "Temporary") {
            if (!bson_get(it, temporary_)) {
                return false;
            }
            temporaryIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "PrimaryKeySchema") {
            if (!bson_get(it, primaryKeySchema_)) {
                return false;
            }
            primaryKeySchemaIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Local2ndIndexSchema") {
            if (!bson_get(it, local2ndIndexSchema_)) {
                return false;
            }
            local2ndIndexSchemaIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Global2ndIndexSchema") {
            if (!bson_get(it, global2ndIndexSchema_)) {
                return false;
            }
            global2ndIndexSchemaIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "PreSplitKeyOptions") {
            if (!bson_get(it, preSplitKeyOptions_)) {
                return false;
            }
            preSplitKeyOptionsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string CreateTableRequestBody::getTableName() const
{
    return tableName_;
}

void CreateTableRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool CreateTableRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void CreateTableRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

bool CreateTableRequestBody::isTemporary() const
{
    return temporary_;
}

void CreateTableRequestBody::setTemporary(bool value)
{
    temporary_ = value;
    temporaryIsSet_ = true;
}

bool CreateTableRequestBody::temporaryIsSet() const
{
    return temporaryIsSet_;
}

void CreateTableRequestBody::unsettemporary()
{
    temporaryIsSet_ = false;
}

PrimaryKeySchema CreateTableRequestBody::getPrimaryKeySchema() const
{
    return primaryKeySchema_;
}

void CreateTableRequestBody::setPrimaryKeySchema(const PrimaryKeySchema& value)
{
    primaryKeySchema_ = value;
    primaryKeySchemaIsSet_ = true;
}

bool CreateTableRequestBody::primaryKeySchemaIsSet() const
{
    return primaryKeySchemaIsSet_;
}

void CreateTableRequestBody::unsetprimaryKeySchema()
{
    primaryKeySchemaIsSet_ = false;
}

std::vector<LsiIndex>& CreateTableRequestBody::getLocal2ndIndexSchema()
{
    return local2ndIndexSchema_;
}

void CreateTableRequestBody::setLocal2ndIndexSchema(const std::vector<LsiIndex>& value)
{
    local2ndIndexSchema_ = value;
    local2ndIndexSchemaIsSet_ = true;
}

bool CreateTableRequestBody::local2ndIndexSchemaIsSet() const
{
    return local2ndIndexSchemaIsSet_;
}

void CreateTableRequestBody::unsetlocal2ndIndexSchema()
{
    local2ndIndexSchemaIsSet_ = false;
}

std::vector<GsiIndex>& CreateTableRequestBody::getGlobal2ndIndexSchema()
{
    return global2ndIndexSchema_;
}

void CreateTableRequestBody::setGlobal2ndIndexSchema(const std::vector<GsiIndex>& value)
{
    global2ndIndexSchema_ = value;
    global2ndIndexSchemaIsSet_ = true;
}

bool CreateTableRequestBody::global2ndIndexSchemaIsSet() const
{
    return global2ndIndexSchemaIsSet_;
}

void CreateTableRequestBody::unsetglobal2ndIndexSchema()
{
    global2ndIndexSchemaIsSet_ = false;
}

PreSplitKeyOptions CreateTableRequestBody::getPreSplitKeyOptions() const
{
    return preSplitKeyOptions_;
}

void CreateTableRequestBody::setPreSplitKeyOptions(const PreSplitKeyOptions& value)
{
    preSplitKeyOptions_ = value;
    preSplitKeyOptionsIsSet_ = true;
}

bool CreateTableRequestBody::preSplitKeyOptionsIsSet() const
{
    return preSplitKeyOptionsIsSet_;
}

void CreateTableRequestBody::unsetpreSplitKeyOptions()
{
    preSplitKeyOptionsIsSet_ = false;
}

}
}
}
}
}


