

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
    limitNum_ = 0;
    limitNumIsSet_ = false;
}

ListTableRequestBody::~ListTableRequestBody() = default;

void ListTableRequestBody::validate()
{
}

bool ListTableRequestBody::toBson(Builder &builder) const
{

    if (cursorNameIsSet_ && !bson_append(builder, "CursorName", cursorName_)) {
        return false;
    }
    if (limitNumIsSet_ && !bson_append(builder, "LimitNum", limitNum_)) {
        return false;
    }

    return true;
}

bool ListTableRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "LimitNum") {
            if (!bson_get(it, limitNum_)) {
                return false;
            }
            limitNumIsSet_ = true;
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

int32_t ListTableRequestBody::getLimitNum() const
{
    return limitNum_;
}

void ListTableRequestBody::setLimitNum(int32_t value)
{
    limitNum_ = value;
    limitNumIsSet_ = true;
}

bool ListTableRequestBody::limitNumIsSet() const
{
    return limitNumIsSet_;
}

void ListTableRequestBody::unsetlimitNum()
{
    limitNumIsSet_ = false;
}

}
}
}
}
}


