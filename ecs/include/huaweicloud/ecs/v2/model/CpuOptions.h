
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CpuOptions_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CpuOptions_H_


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
/// 自定义CPU选项。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  CpuOptions
    : public ModelBase
{
public:
    CpuOptions();
    virtual ~CpuOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CpuOptions members

    /// <summary>
    /// CPU超线程数， 决定CPU是否开启超线程。取值范围：1，2。  - 1: 关闭超线程。 - 2: 打开超线程。  取值不能大于flavor中的   hw:cpu_threads，并且目标flavor配置需满足 \&quot;hw:cpu_policy\&quot;: \&quot;dedicated\&quot;,\&quot;hw:cpu_threads\&quot;: \&quot;2\&quot;需要同时满足如下条件，才能设置为“关闭超线程”  - 只能在实例创建或者resize时指定。 - 只有目标flavor的extra_specs参数： - 存在“hw:cpu_policy”并取值为“dedicated”。 - 存在“hw:cpu_threads”并取值为“2”。
    /// </summary>

    int32_t getHwcpuThreads() const;
    bool hwcpuThreadsIsSet() const;
    void unsethwcpuThreads();
    void setHwcpuThreads(int32_t value);


protected:
    int32_t hwcpuThreads_;
    bool hwcpuThreadsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CpuOptions_H_
