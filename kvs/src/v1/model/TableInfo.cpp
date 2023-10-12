

#include "huaweicloud/kvs/v1/model/TableInfo.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TableInfo::TableInfo()
{
    tableStatus_ = "";
    tableStatusIsSet_ = false;
}

TableInfo::~TableInfo() = default;

void TableInfo::validate()
{
}

bool TableInfo::toBson(Builder &builder) const
{

    if (tableStatusIsSet_ && !bson_append(builder, "TableStatus", tableStatus_)) {
        return false;
    }

    return true;
}

bool TableInfo::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "TableStatus") {
            if (!bson_get(it, tableStatus_)) {
                return false;
            }
            tableStatusIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string TableInfo::getTableStatus() const
{
    return tableStatus_;
}

void TableInfo::setTableStatus(const std::string& value)
{
    tableStatus_ = value;
    tableStatusIsSet_ = true;
}

bool TableInfo::tableStatusIsSet() const
{
    return tableStatusIsSet_;
}

void TableInfo::unsettableStatus()
{
    tableStatusIsSet_ = false;
}

}
}
}
}
}


