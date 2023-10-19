

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
    tableNameListIsSet_ = false;
}

ListTableResponse::~ListTableResponse() = default;

void ListTableResponse::validate()
{
}

bool ListTableResponse::toBson(Builder &builder) const
{

    if (cursorNameIsSet_ && !bson_append(builder, "CursorName", cursorName_)) {
        return false;
    }
    if (tableNameListIsSet_ && !bson_append(builder, "TableNameList", tableNameList_)) {
        return false;
    }

    return true;
}

bool ListTableResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "CursorName") {
            if (!bson_get(it, cursorName_)) {
                return false;
            }
            cursorNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "TableNameList") {
            if (!bson_get(it, tableNameList_)) {
                return false;
            }
            tableNameListIsSet_ = true;
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

std::vector<std::string>& ListTableResponse::getTableNameList()
{
    return tableNameList_;
}

void ListTableResponse::setTableNameList(const std::vector<std::string>& value)
{
    tableNameList_ = value;
    tableNameListIsSet_ = true;
}

bool ListTableResponse::tableNameListIsSet() const
{
    return tableNameListIsSet_;
}

void ListTableResponse::unsettableNameList()
{
    tableNameListIsSet_ = false;
}

}
}
}
}
}


