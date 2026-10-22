
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotChainsResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotChainsResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/ListSnapshotChainsResponseBody_snapshot_chains.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ListSnapshotChainsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSnapshotChainsResponse();
    virtual ~ListSnapshotChainsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotChainsResponse members

    /// <summary>
    /// **参数解释** 快照链列表。 **取值范围** 不涉及
    /// </summary>

    std::vector<ListSnapshotChainsResponseBody_snapshot_chains>& getSnapshotChains();
    bool snapshotChainsIsSet() const;
    void unsetsnapshotChains();
    void setSnapshotChains(const std::vector<ListSnapshotChainsResponseBody_snapshot_chains>& value);


protected:
    std::vector<ListSnapshotChainsResponseBody_snapshot_chains> snapshotChains_;
    bool snapshotChainsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotChainsResponse_H_
