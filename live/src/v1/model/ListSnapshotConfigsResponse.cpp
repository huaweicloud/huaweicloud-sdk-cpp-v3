

#include "huaweicloud/live/v1/model/ListSnapshotConfigsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListSnapshotConfigsResponse::ListSnapshotConfigsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    snapshotConfigListIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListSnapshotConfigsResponse::~ListSnapshotConfigsResponse() = default;

void ListSnapshotConfigsResponse::validate()
{
}

web::json::value ListSnapshotConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(snapshotConfigListIsSet_) {
        val[utility::conversions::to_string_t("snapshot_config_list")] = ModelBase::toJson(snapshotConfigList_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}

bool ListSnapshotConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<LiveSnapshotConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotConfigList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}

int32_t ListSnapshotConfigsResponse::getTotal() const
{
    return total_;
}

void ListSnapshotConfigsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSnapshotConfigsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSnapshotConfigsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<LiveSnapshotConfig>& ListSnapshotConfigsResponse::getSnapshotConfigList()
{
    return snapshotConfigList_;
}

void ListSnapshotConfigsResponse::setSnapshotConfigList(const std::vector<LiveSnapshotConfig>& value)
{
    snapshotConfigList_ = value;
    snapshotConfigListIsSet_ = true;
}

bool ListSnapshotConfigsResponse::snapshotConfigListIsSet() const
{
    return snapshotConfigListIsSet_;
}

void ListSnapshotConfigsResponse::unsetsnapshotConfigList()
{
    snapshotConfigListIsSet_ = false;
}

int32_t ListSnapshotConfigsResponse::getLimit() const
{
    return limit_;
}

void ListSnapshotConfigsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSnapshotConfigsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListSnapshotConfigsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSnapshotConfigsResponse::getOffset() const
{
    return offset_;
}

void ListSnapshotConfigsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSnapshotConfigsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSnapshotConfigsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


