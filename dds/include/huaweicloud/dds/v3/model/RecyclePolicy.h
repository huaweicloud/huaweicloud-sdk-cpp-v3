
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RecyclePolicy_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RecyclePolicy_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  RecyclePolicy
    : public ModelBase
{
public:
    RecyclePolicy();
    virtual ~RecyclePolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecyclePolicy members

    /// <summary>
    /// **参数解释：** 打开回收策略。 **约束限制：** 不可关闭。 **取值范围：** true。 **默认取值：** true。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释：** 策略保持时长（1-7天），天数为正整数，不填默认保留7天。 **约束限制：** 正整数。 **取值范围：** 1-7。 **默认取值：** 7。
    /// </summary>

    int32_t getRetentionPeriodInDays() const;
    bool retentionPeriodInDaysIsSet() const;
    void unsetretentionPeriodInDays();
    void setRetentionPeriodInDays(int32_t value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    int32_t retentionPeriodInDays_;
    bool retentionPeriodInDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RecyclePolicy_H_
