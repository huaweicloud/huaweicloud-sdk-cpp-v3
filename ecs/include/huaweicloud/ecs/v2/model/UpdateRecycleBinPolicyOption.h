
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinPolicyOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinPolicyOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateRecycleBinPolicyOption
    : public ModelBase
{
public:
    UpdateRecycleBinPolicyOption();
    virtual ~UpdateRecycleBinPolicyOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRecycleBinPolicyOption members

    /// <summary>
    /// 虚拟机进入回收站后多久删除
    /// </summary>

    int32_t getRetentionHour() const;
    bool retentionHourIsSet() const;
    void unsetretentionHour();
    void setRetentionHour(int32_t value);

    /// <summary>
    /// 创建多久的虚拟机可以进入回收站
    /// </summary>

    int32_t getRecycleThresholdDay() const;
    bool recycleThresholdDayIsSet() const;
    void unsetrecycleThresholdDay();
    void setRecycleThresholdDay(int32_t value);


protected:
    int32_t retentionHour_;
    bool retentionHourIsSet_;
    int32_t recycleThresholdDay_;
    bool recycleThresholdDayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinPolicyOption_H_
