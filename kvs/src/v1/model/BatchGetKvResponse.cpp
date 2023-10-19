

#include "huaweicloud/kvs/v1/model/BatchGetKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




BatchGetKvResponse::BatchGetKvResponse()
{
    exceptionsIsSet_ = false;
    tableKvArrayIsSet_ = false;
}

BatchGetKvResponse::~BatchGetKvResponse() = default;

void BatchGetKvResponse::validate()
{
}

bool BatchGetKvResponse::toBson(Builder &builder) const
{

    if (exceptionsIsSet_ && !bson_append(builder, "Exceptions", exceptions_)) {
        return false;
    }
    if (tableKvArrayIsSet_ && !bson_append(builder, "TableKvArray", tableKvArray_)) {
        return false;
    }

    return true;
}

bool BatchGetKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "Exceptions") {
            if (!bson_get(it, exceptions_)) {
                return false;
            }
            exceptionsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "TableKvArray") {
            if (!bson_get(it, tableKvArray_)) {
                return false;
            }
            tableKvArrayIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::vector<ExceptItem>& BatchGetKvResponse::getExceptions()
{
    return exceptions_;
}

void BatchGetKvResponse::setExceptions(const std::vector<ExceptItem>& value)
{
    exceptions_ = value;
    exceptionsIsSet_ = true;
}

bool BatchGetKvResponse::exceptionsIsSet() const
{
    return exceptionsIsSet_;
}

void BatchGetKvResponse::unsetexceptions()
{
    exceptionsIsSet_ = false;
}

std::vector<TableBatchItem>& BatchGetKvResponse::getTableKvArray()
{
    return tableKvArray_;
}

void BatchGetKvResponse::setTableKvArray(const std::vector<TableBatchItem>& value)
{
    tableKvArray_ = value;
    tableKvArrayIsSet_ = true;
}

bool BatchGetKvResponse::tableKvArrayIsSet() const
{
    return tableKvArrayIsSet_;
}

void BatchGetKvResponse::unsettableKvArray()
{
    tableKvArrayIsSet_ = false;
}

}
}
}
}
}


