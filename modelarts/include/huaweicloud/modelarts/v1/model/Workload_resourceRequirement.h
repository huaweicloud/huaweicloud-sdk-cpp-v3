
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Workload_resourceRequirement_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Workload_resourceRequirement_H_


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
/// **参数解释**：作业运行请求的资源量。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Workload_resourceRequirement
    : public ModelBase
{
public:
    Workload_resourceRequirement();
    virtual ~Workload_resourceRequirement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Workload_resourceRequirement members

    /// <summary>
    /// **参数解释**：作业的运行使用的CPU资源量。 **取值范围**：不涉及。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的运行使用的内存资源量。 **取值范围**：不涉及。
    /// </summary>

    std::string getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的运行使用的GPU资源量。 **取值范围**：不涉及。
    /// </summary>

    std::string getNvidiaComGpu() const;
    bool nvidiaComGpuIsSet() const;
    void unsetnvidiaComGpu();
    void setNvidiaComGpu(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的运行使用的snt3类型NPU资源量。 **取值范围**：不涉及
    /// </summary>

    std::string getHuaweiComAscend310() const;
    bool huaweiComAscend310IsSet() const;
    void unsethuaweiComAscend310();
    void setHuaweiComAscend310(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的运行使用的snt9类型NPU资源量。 **取值范围**：不涉及。
    /// </summary>

    std::string getHuaweiComAscend1980() const;
    bool huaweiComAscend1980IsSet() const;
    void unsethuaweiComAscend1980();
    void setHuaweiComAscend1980(const std::string& value);


protected:
    std::string cpu_;
    bool cpuIsSet_;
    std::string memory_;
    bool memoryIsSet_;
    std::string nvidiaComGpu_;
    bool nvidiaComGpuIsSet_;
    std::string huaweiComAscend310_;
    bool huaweiComAscend310IsSet_;
    std::string huaweiComAscend1980_;
    bool huaweiComAscend1980IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Workload_resourceRequirement_H_
