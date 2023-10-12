

#include "huaweicloud/kvs/v1/model/ScanSkeyKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ScanSkeyKvResponse::ScanSkeyKvResponse()
{
    returnedCount_ = 0;
    returnedCountIsSet_ = false;
    filteredCount_ = 0;
    filteredCountIsSet_ = false;
    cursorSortKeyIsSet_ = false;
    kvArrayIsSet_ = false;
}

ScanSkeyKvResponse::~ScanSkeyKvResponse() = default;

void ScanSkeyKvResponse::validate()
{
}

bool ScanSkeyKvResponse::toBson(Builder &builder) const
{

    if (returnedCountIsSet_ && !bson_append(builder, "ReturnedCount", returnedCount_)) {
        return false;
    }
    if (filteredCountIsSet_ && !bson_append(builder, "FilteredCount", filteredCount_)) {
        return false;
    }
    if (cursorSortKeyIsSet_ && !bson_append(builder, "CursorSortKey", cursorSortKey_)) {
        return false;
    }
    if (kvArrayIsSet_ && !bson_append(builder, "KvArray", kvArray_)) {
        return false;
    }

    return true;
}

bool ScanSkeyKvResponse::fromBson(const Viewer &viewer)
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
        
        if (key == "CursorSortKey") {
            if (!bson_get(it, cursorSortKey_)) {
                return false;
            }
            cursorSortKeyIsSet_ = true;
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

int32_t ScanSkeyKvResponse::getReturnedCount() const
{
    return returnedCount_;
}

void ScanSkeyKvResponse::setReturnedCount(int32_t value)
{
    returnedCount_ = value;
    returnedCountIsSet_ = true;
}

bool ScanSkeyKvResponse::returnedCountIsSet() const
{
    return returnedCountIsSet_;
}

void ScanSkeyKvResponse::unsetreturnedCount()
{
    returnedCountIsSet_ = false;
}

int32_t ScanSkeyKvResponse::getFilteredCount() const
{
    return filteredCount_;
}

void ScanSkeyKvResponse::setFilteredCount(int32_t value)
{
    filteredCount_ = value;
    filteredCountIsSet_ = true;
}

bool ScanSkeyKvResponse::filteredCountIsSet() const
{
    return filteredCountIsSet_;
}

void ScanSkeyKvResponse::unsetfilteredCount()
{
    filteredCountIsSet_ = false;
}

Document ScanSkeyKvResponse::getCursorSortKey() const
{
    return cursorSortKey_;
}

void ScanSkeyKvResponse::setCursorSortKey(const Document& value)
{
    cursorSortKey_ = value;
    cursorSortKeyIsSet_ = true;
}

bool ScanSkeyKvResponse::cursorSortKeyIsSet() const
{
    return cursorSortKeyIsSet_;
}

void ScanSkeyKvResponse::unsetcursorSortKey()
{
    cursorSortKeyIsSet_ = false;
}

std::vector<KvItem>& ScanSkeyKvResponse::getKvArray()
{
    return kvArray_;
}

void ScanSkeyKvResponse::setKvArray(const std::vector<KvItem>& value)
{
    kvArray_ = value;
    kvArrayIsSet_ = true;
}

bool ScanSkeyKvResponse::kvArrayIsSet() const
{
    return kvArrayIsSet_;
}

void ScanSkeyKvResponse::unsetkvArray()
{
    kvArrayIsSet_ = false;
}

}
}
}
}
}


