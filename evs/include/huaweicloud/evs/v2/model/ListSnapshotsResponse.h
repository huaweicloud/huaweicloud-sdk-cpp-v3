
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotsResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotsResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/SnapshotList.h>
#include <huaweicloud/evs/v2/model/Link.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  ListSnapshotsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSnapshotsResponse();
    virtual ~ListSnapshotsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotsResponse members

    /// <summary>
    /// 快照的总数量，不受limi参数的影响。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 快照信息。
    /// </summary>

    std::vector<SnapshotList>& getSnapshots();
    bool snapshotsIsSet() const;
    void unsetsnapshots();
    void setSnapshots(const std::vector<SnapshotList>& value);

    /// <summary>
    /// 云硬盘快照列表查询位置标记。当查询时指定limit时会返回该字段，返回该字段表示本次查询只查出了部分云硬盘快照信息。
    /// </summary>

    std::vector<Link>& getSnapshotsLinks();
    bool snapshotsLinksIsSet() const;
    void unsetsnapshotsLinks();
    void setSnapshotsLinks(const std::vector<Link>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<SnapshotList> snapshots_;
    bool snapshotsIsSet_;
    std::vector<Link> snapshotsLinks_;
    bool snapshotsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotsResponse_H_
