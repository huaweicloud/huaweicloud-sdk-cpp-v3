

#include "huaweicloud/kvs/v1/model/ExceptItem.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ExceptItem::ExceptItem()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    unprocessedOpersIsSet_ = false;
    failedOpersIsSet_ = false;
}

ExceptItem::~ExceptItem() = default;

void ExceptItem::validate()
{
}

bool ExceptItem::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (unprocessedOpersIsSet_ && !bson_append(builder, "UnprocessedOpers", unprocessedOpers_)) {
        return false;
    }
    if (failedOpersIsSet_ && !bson_append(builder, "FailedOpers", failedOpers_)) {
        return false;
    }

    return true;
}

bool ExceptItem::fromBson(const Viewer &viewer)
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
        
        if (key == "UnprocessedOpers") {
            if (!bson_get(it, unprocessedOpers_)) {
                return false;
            }
            unprocessedOpersIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "FailedOpers") {
            if (!bson_get(it, failedOpers_)) {
                return false;
            }
            failedOpersIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string ExceptItem::getTableName() const
{
    return tableName_;
}

void ExceptItem::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ExceptItem::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ExceptItem::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<int32_t>& ExceptItem::getUnprocessedOpers()
{
    return unprocessedOpers_;
}

void ExceptItem::setUnprocessedOpers(std::vector<int32_t> value)
{
    unprocessedOpers_ = value;
    unprocessedOpersIsSet_ = true;
}

bool ExceptItem::unprocessedOpersIsSet() const
{
    return unprocessedOpersIsSet_;
}

void ExceptItem::unsetunprocessedOpers()
{
    unprocessedOpersIsSet_ = false;
}

std::vector<Fail>& ExceptItem::getFailedOpers()
{
    return failedOpers_;
}

void ExceptItem::setFailedOpers(const std::vector<Fail>& value)
{
    failedOpers_ = value;
    failedOpersIsSet_ = true;
}

bool ExceptItem::failedOpersIsSet() const
{
    return failedOpersIsSet_;
}

void ExceptItem::unsetfailedOpers()
{
    failedOpersIsSet_ = false;
}

}
}
}
}
}


