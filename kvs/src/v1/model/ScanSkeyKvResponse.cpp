

#include "huaweicloud/kvs/v1/model/ScanSkeyKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ScanSkeyKvResponse::ScanSkeyKvResponse()
{
    returnedCount_ = 0L;
    returnedCountIsSet_ = false;
    filteredCount_ = 0;
    filteredCountIsSet_ = false;
    cursorSortKeyIsSet_ = false;
    returnedKvItemsIsSet_ = false;
}

ScanSkeyKvResponse::~ScanSkeyKvResponse() = default;

void ScanSkeyKvResponse::validate()
{
}

bool ScanSkeyKvResponse::toBson(Builder &builder) const
{

    if (returnedCountIsSet_ && !bson_append(builder, "returned_count", returnedCount_)) {
        return false;
    }
    if (filteredCountIsSet_ && !bson_append(builder, "filtered_count", filteredCount_)) {
        return false;
    }
    if (cursorSortKeyIsSet_ && !bson_append(builder, "cursor_sort_key", cursorSortKey_)) {
        return false;
    }
    if (returnedKvItemsIsSet_ && !bson_append(builder, "returned_kv_items", returnedKvItems_)) {
        return false;
    }

    return true;
}

bool ScanSkeyKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "returned_count") {
            if (!bson_get(it, returnedCount_)) {
                return false;
            }
            returnedCountIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "filtered_count") {
            if (!bson_get(it, filteredCount_)) {
                return false;
            }
            filteredCountIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "cursor_sort_key") {
            if (!bson_get(it, cursorSortKey_)) {
                return false;
            }
            cursorSortKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "returned_kv_items") {
            if (!bson_get(it, returnedKvItems_)) {
                return false;
            }
            returnedKvItemsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

int64_t ScanSkeyKvResponse::getReturnedCount() const
{
    return returnedCount_;
}

void ScanSkeyKvResponse::setReturnedCount(int64_t value)
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

std::vector<Returned_kv_item>& ScanSkeyKvResponse::getReturnedKvItems()
{
    return returnedKvItems_;
}

void ScanSkeyKvResponse::setReturnedKvItems(const std::vector<Returned_kv_item>& value)
{
    returnedKvItems_ = value;
    returnedKvItemsIsSet_ = true;
}

bool ScanSkeyKvResponse::returnedKvItemsIsSet() const
{
    return returnedKvItemsIsSet_;
}

void ScanSkeyKvResponse::unsetreturnedKvItems()
{
    returnedKvItemsIsSet_ = false;
}

}
}
}
}
}


