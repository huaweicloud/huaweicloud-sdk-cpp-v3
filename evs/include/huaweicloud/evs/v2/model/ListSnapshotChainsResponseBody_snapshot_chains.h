
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotChainsResponseBody_snapshot_chains_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotChainsResponseBody_snapshot_chains_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ListSnapshotChainsResponseBody_snapshot_chains
    : public ModelBase
{
public:
    ListSnapshotChainsResponseBody_snapshot_chains();
    virtual ~ListSnapshotChainsResponseBody_snapshot_chains();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotChainsResponseBody_snapshot_chains members

    /// <summary>
    /// **参数解释** 快照链ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释** 快照链所属云硬盘的可用区。 **取值范围** 不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释** 快照链上的快照个数。 **取值范围** 大于等于0。
    /// </summary>

    int32_t getSnapshotCount() const;
    bool snapshotCountIsSet() const;
    void unsetsnapshotCount();
    void setSnapshotCount(int32_t value);

    /// <summary>
    /// **参数解释** 快照链的大小。 **取值范围** 大于等于0。
    /// </summary>

    float getCapacity() const;
    bool capacityIsSet() const;
    void unsetcapacity();
    void setCapacity(float value);

    /// <summary>
    /// **参数解释** 项目ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释** 快照链所属的云硬盘ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// **参数解释** 快照链的类型。 **取值范围** 当前快照链支持\&quot;standard\&quot;、\&quot;standard_copy\&quot;两种类型。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释** 创建时间。 **取值范围** 不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释** 更新时间。 **取值范围** 不涉及。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    int32_t snapshotCount_;
    bool snapshotCountIsSet_;
    float capacity_;
    bool capacityIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotChainsResponseBody_snapshot_chains_H_
