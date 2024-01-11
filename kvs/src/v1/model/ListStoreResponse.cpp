

#include "huaweicloud/kvs/v1/model/ListStoreResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ListStoreResponse::ListStoreResponse()
{
    cursorName_ = "";
    cursorNameIsSet_ = false;
    storesIsSet_ = false;
}

ListStoreResponse::~ListStoreResponse() = default;

void ListStoreResponse::validate()
{
}

bool ListStoreResponse::toBson(Builder &builder) const
{

    if (cursorNameIsSet_ && !bson_append(builder, "cursor_name", cursorName_)) {
        return false;
    }
    if (storesIsSet_ && !bson_append(builder, "stores", stores_)) {
        return false;
    }

    return true;
}

bool ListStoreResponse::fromBson(const Viewer &viewer)
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
        
        if (key == "stores") {
            if (!bson_get(it, stores_)) {
                return false;
            }
            storesIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string ListStoreResponse::getCursorName() const
{
    return cursorName_;
}

void ListStoreResponse::setCursorName(const std::string& value)
{
    cursorName_ = value;
    cursorNameIsSet_ = true;
}

bool ListStoreResponse::cursorNameIsSet() const
{
    return cursorNameIsSet_;
}

void ListStoreResponse::unsetcursorName()
{
    cursorNameIsSet_ = false;
}

std::vector<std::string>& ListStoreResponse::getStores()
{
    return stores_;
}

void ListStoreResponse::setStores(const std::vector<std::string>& value)
{
    stores_ = value;
    storesIsSet_ = true;
}

bool ListStoreResponse::storesIsSet() const
{
    return storesIsSet_;
}

void ListStoreResponse::unsetstores()
{
    storesIsSet_ = false;
}

}
}
}
}
}


