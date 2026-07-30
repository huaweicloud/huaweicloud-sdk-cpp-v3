
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FlavorInfoResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FlavorInfoResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Memory.h>
#include <huaweicloud/modelarts/v1/model/Npu.h>
#include <huaweicloud/modelarts/v1/model/DiskResponse.h>
#include <huaweicloud/modelarts/v1/model/Cpu.h>
#include <huaweicloud/modelarts/v1/model/Gpu.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源规格详细信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  FlavorInfoResponse
    : public ModelBase
{
public:
    FlavorInfoResponse();
    virtual ~FlavorInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlavorInfoResponse members

    /// <summary>
    /// 可以选择的最大节点数量（max_num，为1代表不支持分布式）。
    /// </summary>

    int32_t getMaxNum() const;
    bool maxNumIsSet() const;
    void unsetmaxNum();
    void setMaxNum(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Cpu getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const Cpu& value);

    /// <summary>
    /// 
    /// </summary>

    Gpu getGpu() const;
    bool gpuIsSet() const;
    void unsetgpu();
    void setGpu(const Gpu& value);

    /// <summary>
    /// 
    /// </summary>

    Npu getNpu() const;
    bool npuIsSet() const;
    void unsetnpu();
    void setNpu(const Npu& value);

    /// <summary>
    /// 
    /// </summary>

    Memory getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(const Memory& value);

    /// <summary>
    /// 
    /// </summary>

    DiskResponse getDisk() const;
    bool diskIsSet() const;
    void unsetdisk();
    void setDisk(const DiskResponse& value);


protected:
    int32_t maxNum_;
    bool maxNumIsSet_;
    Cpu cpu_;
    bool cpuIsSet_;
    Gpu gpu_;
    bool gpuIsSet_;
    Npu npu_;
    bool npuIsSet_;
    Memory memory_;
    bool memoryIsSet_;
    DiskResponse disk_;
    bool diskIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FlavorInfoResponse_H_
