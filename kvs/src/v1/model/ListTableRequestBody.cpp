

#include "huaweicloud/kvs/v1/model/ListTableRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ListTableRequestBody::ListTableRequestBody()
{
    cursorName_ = "";
    cursorNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTableRequestBody::~ListTableRequestBody() = default;

void ListTableRequestBody::validate()
{
}

bool ListTableRequestBody::toBson(Builder &builder) const
{

    if (cursorNameIsSet_ && !bson_append(builder, "cursor_name", cursorName_)) {
        return false;
    }
    if (limitIsSet_ && !bson_append(builder, "limit", limit_)) {
        return false;
    }

    return true;
}

bool ListTableRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "limit") {
            if (!bson_get(it, limit_)) {
                return false;
            }
            limitIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string ListTableRequestBody::getCursorName() const
{
    return cursorName_;
}

void ListTableRequestBody::setCursorName(const std::string& value)
{
    cursorName_ = value;
    cursorNameIsSet_ = true;
}

bool ListTableRequestBody::cursorNameIsSet() const
{
    return cursorNameIsSet_;
}

void ListTableRequestBody::unsetcursorName()
{
    cursorNameIsSet_ = false;
}

int32_t ListTableRequestBody::getLimit() const
{
    return limit_;
}

void ListTableRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTableRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListTableRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


