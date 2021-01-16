
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_QuotaDetailSnapshotsSAS_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_QuotaDetailSnapshotsSAS_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/QuotaDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// SAS类型云硬盘预留快照个数，键值对，包含：reserved（预留）、allocated（预留）、limit（最大）和in_use（已使用）。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  QuotaDetailSnapshotsSAS
    : public ModelBase
{
public:
    QuotaDetailSnapshotsSAS();
    virtual ~QuotaDetailSnapshotsSAS();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QuotaDetailSnapshotsSAS members

    /// <summary>
    /// 已使用的数量。
    /// </summary>

    int32_t getInUse() const;
    bool inUseIsSet() const;
    void unsetinUse();
    void setInUse(int32_t value);

    /// <summary>
    /// 最大的数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    int32_t getReserved() const;
    bool reservedIsSet() const;
    void unsetreserved();
    void setReserved(int32_t value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getAllocated() const;
    bool allocatedIsSet() const;
    void unsetallocated();
    void setAllocated(const std::string& value);


protected:
    int32_t inUse_;
    bool inUseIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t reserved_;
    bool reservedIsSet_;
    std::string allocated_;
    bool allocatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_QuotaDetailSnapshotsSAS_H_
