
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WdrSnapshotGroupResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WdrSnapshotGroupResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/WdrSnapshotRecord.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**: 实例内核WDR快照分组详情。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  WdrSnapshotGroupResult
    : public ModelBase
{
public:
    WdrSnapshotGroupResult();
    virtual ~WdrSnapshotGroupResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WdrSnapshotGroupResult members

    /// <summary>
    /// **参数解释**: 快照总记录数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// **参数解释**: 分组开始时间。对应该分组下的第一个快照的开始时间。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(int64_t value);

    /// <summary>
    /// **参数解释**: 分组结束时间。对应该分组下的最后一个快照的结束时间。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**: 分组内快照列表。
    /// </summary>

    std::vector<WdrSnapshotRecord>& getSnapshots();
    bool snapshotsIsSet() const;
    void unsetsnapshots();
    void setSnapshots(const std::vector<WdrSnapshotRecord>& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    int64_t beginTime_;
    bool beginTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<WdrSnapshotRecord> snapshots_;
    bool snapshotsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WdrSnapshotGroupResult_H_
