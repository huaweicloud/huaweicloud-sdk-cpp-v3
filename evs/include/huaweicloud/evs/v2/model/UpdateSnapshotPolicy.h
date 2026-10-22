
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotPolicy_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotPolicy_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新自动快照策略模型。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  UpdateSnapshotPolicy
    : public ModelBase
{
public:
    UpdateSnapshotPolicy();
    virtual ~UpdateSnapshotPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSnapshotPolicy members

    /// <summary>
    /// 自动快照策略名称。最大支持255个字节。  最小长度：0  最大长度：255
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 自动快照的重复日期，单位为天，周期为星期。取值范围为 1~7，如 1 表示周一。  当一星期内需要创建多次自动快照时，可以传入多个时间点：  最多传入 7 个时间点。 多个时间点用一个格式类似\&quot;1\&quot;, \&quot;2\&quot;, … \&quot;7\&quot;的 JSON 数组表示，时间点之间用半角逗号（,）隔开。
    /// </summary>

    std::vector<std::string>& getRepeatWeekdays();
    bool repeatWeekdaysIsSet() const;
    void unsetrepeatWeekdays();
    void setRepeatWeekdays(const std::vector<std::string>& value);

    /// <summary>
    /// 自动快照的间隔日期，单位为天，取值范围为 1~30,如1表示每天。
    /// </summary>

    int32_t getRepeatIntervalDays() const;
    bool repeatIntervalDaysIsSet() const;
    void unsetrepeatIntervalDays();
    void setRepeatIntervalDays(int32_t value);

    /// <summary>
    /// 自动快照的创建时间点。使用 UTC +8 时间，单位为小时。取值范围为 0~23，代表 00:00 至 23:00 共 24 个时间点，如 1 表示 01:00。  当一天内需要创建多次自动快照时，可以传入多个时间点：  最多传入 24 个时间点。 多个时间点用一个格式类似\&quot;0\&quot;, \&quot;1\&quot;, … \&quot;23\&quot;的 JSON 数组表示，时间点之间用半角逗号（,）隔开。
    /// </summary>

    std::vector<std::string>& getTimePoints();
    bool timePointsIsSet() const;
    void unsettimePoints();
    void setTimePoints(const std::vector<std::string>& value);

    /// <summary>
    /// 设置快照的保留时间，单位为天。保留时间到期后快照会被自动释放，取值范围：1~65536。 缺省值：-1，表示快照持续保留。
    /// </summary>

    int32_t getRetentionDays() const;
    bool retentionDaysIsSet() const;
    void unsetretentionDays();
    void setRetentionDays(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> repeatWeekdays_;
    bool repeatWeekdaysIsSet_;
    int32_t repeatIntervalDays_;
    bool repeatIntervalDaysIsSet_;
    std::vector<std::string> timePoints_;
    bool timePointsIsSet_;
    int32_t retentionDays_;
    bool retentionDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotPolicy_H_
