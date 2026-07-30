
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadNodeVO_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadNodeVO_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ResourceRequirementVO.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkloadNodeVO
    : public ModelBase
{
public:
    WorkloadNodeVO();
    virtual ~WorkloadNodeVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkloadNodeVO members

    /// <summary>
    /// **参数解释**：作业运行节点的IP地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getHostIp() const;
    bool hostIpIsSet() const;
    void unsethostIp();
    void setHostIp(const std::string& value);

    /// <summary>
    /// **参数解释**：NPU卡的资源使用拓扑信息，长度为16的二进制编码，右起第一位编码代表卡1。其中，1表示占用，0表示空闲。例如，16卡的机型中卡1和卡15被占用，值为0100000000000001；8卡的机型中卡1和卡7被占用，返回值为0000000001000001。 **取值范围**：不涉及。
    /// </summary>

    std::string getNpuTopologyPlacement() const;
    bool npuTopologyPlacementIsSet() const;
    void unsetnpuTopologyPlacement();
    void setNpuTopologyPlacement(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceRequirementVO getResourceRequirement() const;
    bool resourceRequirementIsSet() const;
    void unsetresourceRequirement();
    void setResourceRequirement(const ResourceRequirementVO& value);


protected:
    std::string hostIp_;
    bool hostIpIsSet_;
    std::string npuTopologyPlacement_;
    bool npuTopologyPlacementIsSet_;
    ResourceRequirementVO resourceRequirement_;
    bool resourceRequirementIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadNodeVO_H_
