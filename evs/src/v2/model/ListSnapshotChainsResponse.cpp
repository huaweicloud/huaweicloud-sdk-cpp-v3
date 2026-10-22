

#include "huaweicloud/evs/v2/model/ListSnapshotChainsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotChainsResponse::ListSnapshotChainsResponse()
{
    snapshotChainsIsSet_ = false;
}

ListSnapshotChainsResponse::~ListSnapshotChainsResponse() = default;

void ListSnapshotChainsResponse::validate()
{
}

web::json::value ListSnapshotChainsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotChainsIsSet_) {
        val[utility::conversions::to_string_t("snapshot_chains")] = ModelBase::toJson(snapshotChains_);
    }

    return val;
}
bool ListSnapshotChainsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_chains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_chains"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSnapshotChainsResponseBody_snapshot_chains> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotChains(refVal);
        }
    }
    return ok;
}


std::vector<ListSnapshotChainsResponseBody_snapshot_chains>& ListSnapshotChainsResponse::getSnapshotChains()
{
    return snapshotChains_;
}

void ListSnapshotChainsResponse::setSnapshotChains(const std::vector<ListSnapshotChainsResponseBody_snapshot_chains>& value)
{
    snapshotChains_ = value;
    snapshotChainsIsSet_ = true;
}

bool ListSnapshotChainsResponse::snapshotChainsIsSet() const
{
    return snapshotChainsIsSet_;
}

void ListSnapshotChainsResponse::unsetsnapshotChains()
{
    snapshotChainsIsSet_ = false;
}

}
}
}
}
}


