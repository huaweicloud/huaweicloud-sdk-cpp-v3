
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_JobEntities_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_JobEntities_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/SubJob.h>
#include <string>
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
class HUAWEICLOUD_ECS_V2_EXPORT  JobEntities
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
    /// 云服务器相关操作显示server_id。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 网卡相关操作显示nic_id。
    /// </summary>

    std::string getNicId() const;
    bool nicIdIsSet() const;
    void unsetnicId();
    void setNicId(const std::string& value);

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
    std::string serverId_;
    bool serverIdIsSet_;
    std::string nicId_;
    bool nicIdIsSet_;
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
