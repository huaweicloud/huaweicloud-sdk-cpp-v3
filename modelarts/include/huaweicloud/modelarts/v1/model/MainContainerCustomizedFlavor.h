
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MainContainerCustomizedFlavor_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MainContainerCustomizedFlavor_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配置训练作业自定义规格。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  MainContainerCustomizedFlavor
    : public ModelBase
{
public:
    MainContainerCustomizedFlavor();
    virtual ~MainContainerCustomizedFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MainContainerCustomizedFlavor members

    /// <summary>
    /// **参数解释**：cpu核数。 **取值范围**：大于零。
    /// </summary>

    float getCpuCoreNum() const;
    bool cpuCoreNumIsSet() const;
    void unsetcpuCoreNum();
    void setCpuCoreNum(float value);

    /// <summary>
    /// **参数解释**：内存大小。 **取值范围**：大于零。
    /// </summary>

    float getMemSize() const;
    bool memSizeIsSet() const;
    void unsetmemSize();
    void setMemSize(float value);

    /// <summary>
    /// **参数解释**：加速卡卡数。 **取值范围**：大于等于零。
    /// </summary>

    float getAcceleratorNum() const;
    bool acceleratorNumIsSet() const;
    void unsetacceleratorNum();
    void setAcceleratorNum(float value);


protected:
    float cpuCoreNum_;
    bool cpuCoreNumIsSet_;
    float memSize_;
    bool memSizeIsSet_;
    float acceleratorNum_;
    bool acceleratorNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MainContainerCustomizedFlavor_H_
