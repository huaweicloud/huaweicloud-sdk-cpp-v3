

#include "huaweicloud/kvs/v1/model/ListTableResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ListTableResponse::ListTableResponse()
{
    cursorName_ = "";
    cursorNameIsSet_ = false;
    tableNamesIsSet_ = false;
}

ListTableResponse::~ListTableResponse() = default;

void ListTableResponse::validate()
{
}

bool ListTableResponse::toBson(Builder &builder) const
{

    if (cursorNameIsSet_ && !bson_append(builder, "cursor_name", cursorName_)) {
        return false;
    }
    if (tableNamesIsSet_ && !bson_append(builder, "table_names", tableNames_)) {
        return false;
    }

    return true;
}

bool ListTableResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "cursor_name") {
            if (!bson_get(it, cursorName_)) {
                return false;
            }
            cursorNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "table_names") {
            if (!bson_get(it, tableNames_)) {
                return false;
            }
            tableNamesIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string ListTableResponse::getCursorName() const
{
    return cursorName_;
}

void ListTableResponse::setCursorName(const std::string& value)
{
    cursorName_ = value;
    cursorNameIsSet_ = true;
}

bool ListTableResponse::cursorNameIsSet() const
{
    return cursorNameIsSet_;
}

void ListTableResponse::unsetcursorName()
{
    cursorNameIsSet_ = false;
}

std::vector<std::string>& ListTableResponse::getTableNames()
{
    return tableNames_;
}

void ListTableResponse::setTableNames(const std::vector<std::string>& value)
{
    tableNames_ = value;
    tableNamesIsSet_ = true;
}

bool ListTableResponse::tableNamesIsSet() const
{
    return tableNamesIsSet_;
}

void ListTableResponse::unsettableNames()
{
    tableNamesIsSet_ = false;
}

}
}
}
}
}


