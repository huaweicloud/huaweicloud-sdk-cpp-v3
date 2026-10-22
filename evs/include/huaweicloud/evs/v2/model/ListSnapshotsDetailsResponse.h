
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotsDetailsResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotsDetailsResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/SnapshotDetailV5.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  ListSnapshotsDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSnapshotsDetailsResponse();
    virtual ~ListSnapshotsDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotsDetailsResponse members

    /// <summary>
    /// **参数解释** 快照信息。 **取值范围** 不涉及。
    /// </summary>

    std::vector<SnapshotDetailV5>& getSnapshots();
    bool snapshotsIsSet() const;
    void unsetsnapshots();
    void setSnapshots(const std::vector<SnapshotDetailV5>& value);


protected:
    std::vector<SnapshotDetailV5> snapshots_;
    bool snapshotsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotsDetailsResponse_H_
