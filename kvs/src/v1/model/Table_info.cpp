

#include "huaweicloud/kvs/v1/model/Table_info.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Table_info::Table_info()
{
    tableStatus_ = "";
    tableStatusIsSet_ = false;
}

Table_info::~Table_info() = default;

void Table_info::validate()
{
}

bool Table_info::toBson(Builder &builder) const
{

    if (tableStatusIsSet_ && !bson_append(builder, "table_status", tableStatus_)) {
        return false;
    }

    return true;
}

bool Table_info::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "table_status") {
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

std::string Table_info::getTableStatus() const
{
    return tableStatus_;
}

void Table_info::setTableStatus(const std::string& value)
{
    tableStatus_ = value;
    tableStatusIsSet_ = true;
}

bool Table_info::tableStatusIsSet() const
{
    return tableStatusIsSet_;
}

void Table_info::unsettableStatus()
{
    tableStatusIsSet_ = false;
}

}
}
}
}
}


