

#include "huaweicloud/gaussdbforopengauss/v3/model/ListWdrSnapshotsCollectResultsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListWdrSnapshotsCollectResultsResponse::ListWdrSnapshotsCollectResultsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    wdrSnapshotsIsSet_ = false;
}

ListWdrSnapshotsCollectResultsResponse::~ListWdrSnapshotsCollectResultsResponse() = default;

void ListWdrSnapshotsCollectResultsResponse::validate()
{
}

web::json::value ListWdrSnapshotsCollectResultsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(wdrSnapshotsIsSet_) {
        val[utility::conversions::to_string_t("wdr_snapshots")] = ModelBase::toJson(wdrSnapshots_);
    }

    return val;
}
bool ListWdrSnapshotsCollectResultsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wdr_snapshots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wdr_snapshots"));
        if(!fieldValue.is_null())
        {
            std::vector<CollectedWdrSnapshotInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWdrSnapshots(refVal);
        }
    }
    return ok;
}


int32_t ListWdrSnapshotsCollectResultsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListWdrSnapshotsCollectResultsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListWdrSnapshotsCollectResultsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListWdrSnapshotsCollectResultsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<CollectedWdrSnapshotInfoResult>& ListWdrSnapshotsCollectResultsResponse::getWdrSnapshots()
{
    return wdrSnapshots_;
}

void ListWdrSnapshotsCollectResultsResponse::setWdrSnapshots(const std::vector<CollectedWdrSnapshotInfoResult>& value)
{
    wdrSnapshots_ = value;
    wdrSnapshotsIsSet_ = true;
}

bool ListWdrSnapshotsCollectResultsResponse::wdrSnapshotsIsSet() const
{
    return wdrSnapshotsIsSet_;
}

void ListWdrSnapshotsCollectResultsResponse::unsetwdrSnapshots()
{
    wdrSnapshotsIsSet_ = false;
}

}
}
}
}
}


