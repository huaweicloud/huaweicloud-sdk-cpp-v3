
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Job_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Job_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/JobMetadata.h>
#include <huaweicloud/modelarts/v1/model/JobAlgorithm.h>
#include <huaweicloud/modelarts/v1/model/Spec.h>
#include <huaweicloud/modelarts/v1/model/Task.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/MasJobConfig.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/JobEndpointsReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建训练作业的作业请求体和相应体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Job
    : public ModelBase
{
public:
    Job();
    virtual ~Job();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Job members

    /// <summary>
    /// **参数解释**：训练作业类型。 **约束限制**：不涉及。 **取值范围**： - job：普通作业 - federated_pool_job：资源池联邦作业 - edge_job：边缘作业 - hetero_job：异构作业 - mrs_job：MRS作业 - autosearch_job：自动化搜索作业 - diag_job：诊断作业 - visualization_job：可视化作业  **默认取值**：job。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const JobMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    JobAlgorithm getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const JobAlgorithm& value);

    /// <summary>
    /// **参数解释**：任务列表。该功能暂未实现。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Task>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<Task>& value);

    /// <summary>
    /// 
    /// </summary>

    Spec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const Spec& value);

    /// <summary>
    /// 
    /// </summary>

    JobEndpointsReq getEndpoints() const;
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const JobEndpointsReq& value);

    /// <summary>
    /// **参数解释**：类型。 **约束限制**：不涉及。 **取值范围**：SFT（全量微调）、PRETRAIN（预训练）、LORA（lora微调）、DPO（dpo强化学习）、RFT（rft强化学习）
    /// </summary>

    std::string getTrainType() const;
    bool trainTypeIsSet() const;
    void unsettrainType();
    void setTrainType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MasJobConfig getFtjobConfig() const;
    bool ftjobConfigIsSet() const;
    void unsetftjobConfig();
    void setFtjobConfig(const MasJobConfig& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    JobMetadata metadata_;
    bool metadataIsSet_;
    JobAlgorithm algorithm_;
    bool algorithmIsSet_;
    std::vector<Task> tasks_;
    bool tasksIsSet_;
    Spec spec_;
    bool specIsSet_;
    JobEndpointsReq endpoints_;
    bool endpointsIsSet_;
    std::string trainType_;
    bool trainTypeIsSet_;
    MasJobConfig ftjobConfig_;
    bool ftjobConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Job_H_
