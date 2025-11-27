
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowRecyclePolicyResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowRecyclePolicyResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_EVS_V2_EXPORT  ShowRecyclePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRecyclePolicyResponse();
    virtual ~ShowRecyclePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRecyclePolicyResponse members

    /// <summary>
    /// **参数解释** 回收站开关。 **取值范围** - true：表示回收站已打开。 - false：表示回收站已关闭。
    /// </summary>

    bool isSwitch() const;
    bool switchIsSet() const;
    void unsetswitch();
    void setSwitch(bool value);

    /// <summary>
    /// **参数解释** 回收站的门槛时间，云硬盘创建多少天后删除才会放入回收站。 **取值范围** 1-1000
    /// </summary>

    int32_t getThresholdTime() const;
    bool thresholdTimeIsSet() const;
    void unsetthresholdTime();
    void setThresholdTime(int32_t value);

    /// <summary>
    /// **参数解释** 回收站的云硬盘保存期限（天），云硬盘进入回收站后多少天才会被彻底删除。 **取值范围** 1-365
    /// </summary>

    int32_t getKeepTime() const;
    bool keepTimeIsSet() const;
    void unsetkeepTime();
    void setKeepTime(int32_t value);


protected:
    bool switch_;
    bool switchIsSet_;
    int32_t thresholdTime_;
    bool thresholdTimeIsSet_;
    int32_t keepTime_;
    bool keepTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowRecyclePolicyResponse_H_
