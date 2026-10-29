
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamParams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamParams_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/lts/v2/model/TagsBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateLogStreamParams
    : public ModelBase
{
public:
    UpdateLogStreamParams();
    virtual ~UpdateLogStreamParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLogStreamParams members

    /// <summary>
    /// 日志存储时间（天）。
    /// </summary>

    int32_t getTtlInDays() const;
    bool ttlInDaysIsSet() const;
    void unsetttlInDays();
    void setTtlInDays(int32_t value);

    /// <summary>
    /// 标签字段信息
    /// </summary>

    std::vector<TagsBody>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsBody>& value);

    /// <summary>
    /// 日志是否存储
    /// </summary>

    bool isWhetherLogStorage() const;
    bool whetherLogStorageIsSet() const;
    void unsetwhetherLogStorage();
    void setWhetherLogStorage(bool value);

    /// <summary>
    /// **参数解释：** 是否开启智能冷存储。 **约束限制：** 开启智能冷存储需要日志存储时间大于7天。开启智能冷存储后，需要设置标准存储层数据的保存时间。标准存储至少需保存7天才能转换为智能冷存储层数据。当日志保存时间大于标准存储层数据保存时间，且小于日志存储时间时，日志数据将自动转换为智能冷存储层数据存储。 **取值范围：** - true：开启智能冷存储。 - false：关闭智能冷存储。 **默认取值：** false
    /// </summary>

    bool isHotColdSeparation() const;
    bool hotColdSeparationIsSet() const;
    void unsethotColdSeparation();
    void setHotColdSeparation(bool value);

    /// <summary>
    /// **参数解释：** 日志流标准存储时间（单位：天），即日志上报到LTS后日志标准存储的时间。 **约束限制：** 开启智能冷存储需要日志总存储时间大于7天。 **取值范围：** 最小值：7天 最大值：365天 **默认取值：** 不涉及。
    /// </summary>

    int32_t getHotStorageDays() const;
    bool hotStorageDaysIsSet() const;
    void unsethotStorageDays();
    void setHotStorageDays(int32_t value);


protected:
    int32_t ttlInDays_;
    bool ttlInDaysIsSet_;
    std::vector<TagsBody> tags_;
    bool tagsIsSet_;
    bool whetherLogStorage_;
    bool whetherLogStorageIsSet_;
    bool hotColdSeparation_;
    bool hotColdSeparationIsSet_;
    int32_t hotStorageDays_;
    bool hotStorageDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamParams_H_
