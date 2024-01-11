

#include "huaweicloud/kvs/v1/model/Exception_opers_of_table.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Exception_opers_of_table::Exception_opers_of_table()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    unprocessedOpersIsSet_ = false;
    failedOpersIsSet_ = false;
}

Exception_opers_of_table::~Exception_opers_of_table() = default;

void Exception_opers_of_table::validate()
{
}

bool Exception_opers_of_table::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (unprocessedOpersIsSet_ && !bson_append(builder, "unprocessed_opers", unprocessedOpers_)) {
        return false;
    }
    if (failedOpersIsSet_ && !bson_append(builder, "failed_opers", failedOpers_)) {
        return false;
    }

    return true;
}

bool Exception_opers_of_table::fromBson(const Viewer &viewer)
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
        
        if (key == "unprocessed_opers") {
            if (!bson_get(it, unprocessedOpers_)) {
                return false;
            }
            unprocessedOpersIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "failed_opers") {
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

std::string Exception_opers_of_table::getTableName() const
{
    return tableName_;
}

void Exception_opers_of_table::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool Exception_opers_of_table::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void Exception_opers_of_table::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<int32_t>& Exception_opers_of_table::getUnprocessedOpers()
{
    return unprocessedOpers_;
}

void Exception_opers_of_table::setUnprocessedOpers(std::vector<int32_t> value)
{
    unprocessedOpers_ = value;
    unprocessedOpersIsSet_ = true;
}

bool Exception_opers_of_table::unprocessedOpersIsSet() const
{
    return unprocessedOpersIsSet_;
}

void Exception_opers_of_table::unsetunprocessedOpers()
{
    unprocessedOpersIsSet_ = false;
}

std::vector<Fail>& Exception_opers_of_table::getFailedOpers()
{
    return failedOpers_;
}

void Exception_opers_of_table::setFailedOpers(const std::vector<Fail>& value)
{
    failedOpers_ = value;
    failedOpersIsSet_ = true;
}

bool Exception_opers_of_table::failedOpersIsSet() const
{
    return failedOpersIsSet_;
}

void Exception_opers_of_table::unsetfailedOpers()
{
    failedOpersIsSet_ = false;
}

}
}
}
}
}


