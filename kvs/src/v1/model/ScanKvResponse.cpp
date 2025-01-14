

#include "huaweicloud/kvs/v1/model/ScanKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ScanKvResponse::ScanKvResponse()
{
    returnedCount_ = 0L;
    returnedCountIsSet_ = false;
    filteredCount_ = 0;
    filteredCountIsSet_ = false;
    cursorKeyIsSet_ = false;
    returnedKvItemsIsSet_ = false;
    returnedSegmentItemsIsSet_ = false;
}

ScanKvResponse::~ScanKvResponse() = default;

void ScanKvResponse::validate()
{
}

bool ScanKvResponse::toBson(Builder &builder) const
{

    if (returnedCountIsSet_ && !bson_append(builder, "returned_count", returnedCount_)) {
        return false;
    }
    if (filteredCountIsSet_ && !bson_append(builder, "filtered_count", filteredCount_)) {
        return false;
    }
    if (cursorKeyIsSet_ && !bson_append(builder, "cursor_key", cursorKey_)) {
        return false;
    }
    if (returnedKvItemsIsSet_ && !bson_append(builder, "returned_kv_items", returnedKvItems_)) {
        return false;
    }
    if (returnedSegmentItemsIsSet_ && !bson_append(builder, "returned_segment_items", returnedSegmentItems_)) {
        return false;
    }

    return true;
}

bool ScanKvResponse::fromBson(const Viewer &viewer)
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
        
        if (key == "cursor_key") {
            if (!bson_get(it, cursorKey_)) {
                return false;
            }
            cursorKeyIsSet_ = true;
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
        
        if (key == "returned_segment_items") {
            if (!bson_get(it, returnedSegmentItems_)) {
                return false;
            }
            returnedSegmentItemsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

int64_t ScanKvResponse::getReturnedCount() const
{
    return returnedCount_;
}

void ScanKvResponse::setReturnedCount(int64_t value)
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

std::vector<Returned_kv_item>& ScanKvResponse::getReturnedKvItems()
{
    return returnedKvItems_;
}

void ScanKvResponse::setReturnedKvItems(const std::vector<Returned_kv_item>& value)
{
    returnedKvItems_ = value;
    returnedKvItemsIsSet_ = true;
}

bool ScanKvResponse::returnedKvItemsIsSet() const
{
    return returnedKvItemsIsSet_;
}

void ScanKvResponse::unsetreturnedKvItems()
{
    returnedKvItemsIsSet_ = false;
}

std::vector<Returned_segment_item>& ScanKvResponse::getReturnedSegmentItems()
{
    return returnedSegmentItems_;
}

void ScanKvResponse::setReturnedSegmentItems(const std::vector<Returned_segment_item>& value)
{
    returnedSegmentItems_ = value;
    returnedSegmentItemsIsSet_ = true;
}

bool ScanKvResponse::returnedSegmentItemsIsSet() const
{
    return returnedSegmentItemsIsSet_;
}

void ScanKvResponse::unsetreturnedSegmentItems()
{
    returnedSegmentItemsIsSet_ = false;
}

}
}
}
}
}


