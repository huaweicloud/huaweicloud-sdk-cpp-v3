
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetTaskDetailListRsp_jobs_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetTaskDetailListRsp_jobs_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/rds/v3/model/GetTaskDetailListRsp_jobs_instance.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetTaskDetailListRsp_jobs
    : public ModelBase
{
public:
    GetTaskDetailListRsp_jobs();
    virtual ~GetTaskDetailListRsp_jobs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetTaskDetailListRsp_jobs members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务执行状态。  取值： - 值为“Running”，表示任务正在执行。 - 值为“Completed”，表示任务执行成功。 - 值为“Failed”，表示任务执行失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getEnded() const;
    bool endedIsSet() const;
    void unsetended();
    void setEnded(const std::string& value);

    /// <summary>
    /// 任务执行进度。执行中状态才返回执行进度，例如60%，否则返回“”。
    /// </summary>

    std::string getProcess() const;
    bool processIsSet() const;
    void unsetprocess();
    void setProcess(const std::string& value);

    /// <summary>
    /// 任务执行的具体的参数信息，为空则不返回该字段。
    /// </summary>

    std::string getTaskDetail() const;
    bool taskDetailIsSet() const;
    void unsettaskDetail();
    void setTaskDetail(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GetTaskDetailListRsp_jobs_instance getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const GetTaskDetailListRsp_jobs_instance& value);

    /// <summary>
    /// 根据不同的任务，显示不同的内容。
    /// </summary>

    Object getEntities() const;
    bool entitiesIsSet() const;
    void unsetentities();
    void setEntities(const Object& value);

    /// <summary>
    /// 任务执行失败时的错误信息。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string ended_;
    bool endedIsSet_;
    std::string process_;
    bool processIsSet_;
    std::string taskDetail_;
    bool taskDetailIsSet_;
    GetTaskDetailListRsp_jobs_instance instance_;
    bool instanceIsSet_;
    Object entities_;
    bool entitiesIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetTaskDetailListRsp_jobs_H_
