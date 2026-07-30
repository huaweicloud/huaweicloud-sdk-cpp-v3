
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/JobMetadataResponse.h>
#include <huaweicloud/modelarts/v1/model/JobEndpointsResp.h>
#include <huaweicloud/modelarts/v1/model/MasJobConfig.h>
#include <huaweicloud/modelarts/v1/model/SpecResponse.h>
#include <huaweicloud/modelarts/v1/model/Status.h>
#include <huaweicloud/modelarts/v1/model/TaskResponse.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/JobAlgorithmResponse.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobResponse
    : public ModelBase
{
public:
    JobResponse();
    virtual ~JobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobResponse members

    /// <summary>
    /// **参数解释**：训练作业类型。 **取值范围**： - job：普通作业 - federated_pool_job：资源池联邦作业 - edge_job：边缘作业 - hetero_job：异构作业 - mrs_job：MRS作业 - autosearch_job：自动化搜索作业 - diag_job：诊断作业 - visualization_job：可视化作业
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobMetadataResponse getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const JobMetadataResponse& value);

    /// <summary>
    /// 
    /// </summary>

    Status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const Status& value);

    /// <summary>
    /// 
    /// </summary>

    JobAlgorithmResponse getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const JobAlgorithmResponse& value);

    /// <summary>
    /// **参数解释**：异构训练作业的任务列表。
    /// </summary>

    std::vector<TaskResponse>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<TaskResponse>& value);

    /// <summary>
    /// 
    /// </summary>

    SpecResponse getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const SpecResponse& value);

    /// <summary>
    /// 
    /// </summary>

    JobEndpointsResp getEndpoints() const;
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const JobEndpointsResp& value);

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
    JobMetadataResponse metadata_;
    bool metadataIsSet_;
    Status status_;
    bool statusIsSet_;
    JobAlgorithmResponse algorithm_;
    bool algorithmIsSet_;
    std::vector<TaskResponse> tasks_;
    bool tasksIsSet_;
    SpecResponse spec_;
    bool specIsSet_;
    JobEndpointsResp endpoints_;
    bool endpointsIsSet_;
    MasJobConfig ftjobConfig_;
    bool ftjobConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobResponse_H_
