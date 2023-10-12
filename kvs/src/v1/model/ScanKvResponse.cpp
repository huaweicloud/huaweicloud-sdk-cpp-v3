

#include "huaweicloud/kvs/v1/model/ScanKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ScanKvResponse::ScanKvResponse()
{
    returnedCount_ = 0;
    returnedCountIsSet_ = false;
    filteredCount_ = 0;
    filteredCountIsSet_ = false;
    cursorKeyIsSet_ = false;
    kvArrayIsSet_ = false;
}

ScanKvResponse::~ScanKvResponse() = default;

void ScanKvResponse::validate()
{
}

bool ScanKvResponse::toBson(Builder &builder) const
{

    if (returnedCountIsSet_ && !bson_append(builder, "ReturnedCount", returnedCount_)) {
        return false;
    }
    if (filteredCountIsSet_ && !bson_append(builder, "FilteredCount", filteredCount_)) {
        return false;
    }
    if (cursorKeyIsSet_ && !bson_append(builder, "CursorKey", cursorKey_)) {
        return false;
    }
    if (kvArrayIsSet_ && !bson_append(builder, "KvArray", kvArray_)) {
        return false;
    }

    return true;
}

bool ScanKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "ReturnedCount") {
            if (!bson_get(it, returnedCount_)) {
                return false;
            }
            returnedCountIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "FilteredCount") {
            if (!bson_get(it, filteredCount_)) {
                return false;
            }
            filteredCountIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "CursorKey") {
            if (!bson_get(it, cursorKey_)) {
                return false;
            }
            cursorKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "KvArray") {
            if (!bson_get(it, kvArray_)) {
                return false;
            }
            kvArrayIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

int32_t ScanKvResponse::getReturnedCount() const
{
    return returnedCount_;
}

void ScanKvResponse::setReturnedCount(int32_t value)
{
    returnedCount_ = value;
    returnedCountIsSet_ = true;
}

bool ScanKvResponse::returnedCountIsSet() const
{
    return returnedCountIsSet_;
}

void ScanKvResponse::unsetreturnedCount()
{
    returnedCountIsSet_ = false;
}

int32_t ScanKvResponse::getFilteredCount() const
{
    return filteredCount_;
}

void ScanKvResponse::setFilteredCount(int32_t value)
{
    filteredCount_ = value;
    filteredCountIsSet_ = true;
}

bool ScanKvResponse::filteredCountIsSet() const
{
    return filteredCountIsSet_;
}

void ScanKvResponse::unsetfilteredCount()
{
    filteredCountIsSet_ = false;
}

Document ScanKvResponse::getCursorKey() const
{
    return cursorKey_;
}

void ScanKvResponse::setCursorKey(const Document& value)
{
    cursorKey_ = value;
    cursorKeyIsSet_ = true;
}

bool ScanKvResponse::cursorKeyIsSet() const
{
    return cursorKeyIsSet_;
}

void ScanKvResponse::unsetcursorKey()
{
    cursorKeyIsSet_ = false;
}

std::vector<KvItem>& ScanKvResponse::getKvArray()
{
    return kvArray_;
}

void ScanKvResponse::setKvArray(const std::vector<KvItem>& value)
{
    kvArray_ = value;
    kvArrayIsSet_ = true;
}

bool ScanKvResponse::kvArrayIsSet() const
{
    return kvArrayIsSet_;
}

void ScanKvResponse::unsetkvArray()
{
    kvArrayIsSet_ = false;
}

}
}
}
}
}


