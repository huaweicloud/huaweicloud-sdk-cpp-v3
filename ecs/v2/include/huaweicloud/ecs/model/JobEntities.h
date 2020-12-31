
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_JobEntities_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_JobEntities_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/SubJob.h"
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  JobEntities
    : public ModelBase
{
public:
    JobEntities();
    virtual ~JobEntities();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// JobEntities members

    /// <summary>
    /// 每个子任务的执行信息。
    /// </summary>

    std::vector<SubJob>& getSubJobs();
    bool subJobsIsSet() const;
    void unsetsubJobs();
    void setSubJobs(const std::vector<SubJob>& value);

    /// <summary>
    /// 子任务数量。
    /// </summary>

    int32_t getSubJobsTotal() const;
    bool subJobsTotalIsSet() const;
    void unsetsubJobsTotal();
    void setSubJobsTotal(int32_t value);


protected:
    std::vector<SubJob> subJobs_;
    bool subJobsIsSet_;
    int32_t subJobsTotal_;
    bool subJobsTotalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_JobEntities_H_
