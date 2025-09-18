
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTaskDetailResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTaskDetailResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SubTaskInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowTaskDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskDetailResponse();
    virtual ~ShowTaskDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskDetailResponse members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 工作流ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 工作流名称。
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 工作流创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 工作流更新时间。
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// 工作流进度。
    /// </summary>

    std::string getProcess() const;
    bool processIsSet() const;
    void unsetprocess();
    void setProcess(const std::string& value);

    /// <summary>
    /// 工作流状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 子任务进度信息
    /// </summary>

    std::vector<SubTaskInfo>& getSubTaskList();
    bool subTaskListIsSet() const;
    void unsetsubTaskList();
    void setSubTaskList(const std::vector<SubTaskInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string process_;
    bool processIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<SubTaskInfo> subTaskList_;
    bool subTaskListIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTaskDetailResponse_H_
