
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MainContainerAllocatedResources_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MainContainerAllocatedResources_H_


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
/// 训练作业的训练容器实际到手的资源规格。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  MainContainerAllocatedResources
    : public ModelBase
{
public:
    MainContainerAllocatedResources();
    virtual ~MainContainerAllocatedResources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MainContainerAllocatedResources members

    /// <summary>
    /// **参数解释**： cpu架构。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCpuArch() const;
    bool cpuArchIsSet() const;
    void unsetcpuArch();
    void setCpuArch(const std::string& value);

    /// <summary>
    /// **参数解释**： 核数。 **取值范围**： 不涉及。
    /// </summary>

    float getCpuCoreNum() const;
    bool cpuCoreNumIsSet() const;
    void unsetcpuCoreNum();
    void setCpuCoreNum(float value);

    /// <summary>
    /// **参数解释**： 内存信息。 **取值范围**： 不涉及。
    /// </summary>

    float getMemSize() const;
    bool memSizeIsSet() const;
    void unsetmemSize();
    void setMemSize(float value);

    /// <summary>
    /// **参数解释**： 加速卡卡数。 **取值范围**： 不涉及。
    /// </summary>

    float getAcceleratorNum() const;
    bool acceleratorNumIsSet() const;
    void unsetacceleratorNum();
    void setAcceleratorNum(float value);

    /// <summary>
    /// **参数解释**： 加速卡类型。如：ascend-Snt9b，ascend-snt9c等 **取值范围**： 不涉及。
    /// </summary>

    std::string getAcceleratorType() const;
    bool acceleratorTypeIsSet() const;
    void unsetacceleratorType();
    void setAcceleratorType(const std::string& value);


protected:
    std::string cpuArch_;
    bool cpuArchIsSet_;
    float cpuCoreNum_;
    bool cpuCoreNumIsSet_;
    float memSize_;
    bool memSizeIsSet_;
    float acceleratorNum_;
    bool acceleratorNumIsSet_;
    std::string acceleratorType_;
    bool acceleratorTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MainContainerAllocatedResources_H_
