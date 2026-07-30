
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CustomResourceSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CustomResourceSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 自定义规格配置。当需要使用自定义规格时需要填写此参数。 **约束限制：** 不涉及。 **参数示例：** \&quot;custom_spec\&quot;: {     \&quot;arch\&quot;: \&quot;x86\&quot;,     \&quot;cpu\&quot;: 0.51,     \&quot;memory\&quot;: 1024.0 }
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CustomResourceSpec
    : public ModelBase
{
public:
    CustomResourceSpec();
    virtual ~CustomResourceSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomResourceSpec members

    /// <summary>
    /// **参数解释：** GPU个数。 **约束限制：** 不涉及。 **取值范围：** 支持配置小数，输入值不能小于0（最多支持2位小数，小数点后第3位做四舍五入处理）。 **默认取值：** 不涉及。
    /// </summary>

    float getGpu() const;
    bool gpuIsSet() const;
    void unsetgpu();
    void setGpu(float value);

    /// <summary>
    /// **参数解释：** 内存，单位为MB。 **约束限制：** 不涉及。 **取值范围：** 仅支持整数。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(int32_t value);

    /// <summary>
    /// **参数解释：** CPU核数。 **约束限制：** 不涉及。 **取值范围：** 支持配置小数，输入值不能小于0.01（最多支持2位小数，小数点后第3位做四舍五入处理）。 **默认取值：** 不涉及。
    /// </summary>

    float getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(float value);

    /// <summary>
    /// **参数解释：** Ascend芯片个数。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getAscend() const;
    bool ascendIsSet() const;
    void unsetascend();
    void setAscend(int32_t value);

    /// <summary>
    /// **参数解释：** 架构类型。 **约束限制：** 不涉及。 **取值范围：** 枚举值：x86 | arm64。 **默认取值：** 不涉及。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);


protected:
    float gpu_;
    bool gpuIsSet_;
    int32_t memory_;
    bool memoryIsSet_;
    float cpu_;
    bool cpuIsSet_;
    int32_t ascend_;
    bool ascendIsSet_;
    std::string arch_;
    bool archIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CustomResourceSpec_H_
