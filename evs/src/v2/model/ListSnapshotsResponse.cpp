

#include "huaweicloud/evs/v2/model/ListSnapshotsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotsResponse::ListSnapshotsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    snapshotsIsSet_ = false;
    snapshotsLinksIsSet_ = false;
}

ListSnapshotsResponse::~ListSnapshotsResponse() = default;

void ListSnapshotsResponse::validate()
{
}

web::json::value ListSnapshotsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(snapshotsIsSet_) {
        val[utility::conversions::to_string_t("snapshots")] = ModelBase::toJson(snapshots_);
    }
    if(snapshotsLinksIsSet_) {
        val[utility::conversions::to_string_t("snapshots_links")] = ModelBase::toJson(snapshotsLinks_);
    }

    return val;
}

bool ListSnapshotsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshots"));
        if(!fieldValue.is_null())
        {
            std::vector<SnapshotList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshots(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshots_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshots_links"));
        if(!fieldValue.is_null())
        {
            std::vector<Link> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotsLinks(refVal);
        }
    }
    return ok;
}

int32_t ListSnapshotsResponse::getCount() const
{
    return count_;
}

void ListSnapshotsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSnapshotsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSnapshotsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SnapshotList>& ListSnapshotsResponse::getSnapshots()
{
    return snapshots_;
}

void ListSnapshotsResponse::setSnapshots(const std::vector<SnapshotList>& value)
{
    snapshots_ = value;
    snapshotsIsSet_ = true;
}

bool ListSnapshotsResponse::snapshotsIsSet() const
{
    return snapshotsIsSet_;
}

void ListSnapshotsResponse::unsetsnapshots()
{
    snapshotsIsSet_ = false;
}

std::vector<Link>& ListSnapshotsResponse::getSnapshotsLinks()
{
    return snapshotsLinks_;
}

void ListSnapshotsResponse::setSnapshotsLinks(const std::vector<Link>& value)
{
    snapshotsLinks_ = value;
    snapshotsLinksIsSet_ = true;
}

bool ListSnapshotsResponse::snapshotsLinksIsSet() const
{
    return snapshotsLinksIsSet_;
}

void ListSnapshotsResponse::unsetsnapshotsLinks()
{
    snapshotsLinksIsSet_ = false;
}

}
}
}
}
}


