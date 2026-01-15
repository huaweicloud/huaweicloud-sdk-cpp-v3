
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditTaskStatusResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditTaskStatusResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditTaskStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditTaskStatusResponse();
    virtual ~ShowAuditTaskStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditTaskStatusResponse members

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(int64_t value);

    /// <summary>
    /// 业务类型  - audit：审计  - risk：风险
    /// </summary>

    std::string getBusiType() const;
    bool busiTypeIsSet() const;
    void unsetbusiType();
    void setBusiType(const std::string& value);

    /// <summary>
    /// 已统计实例数
    /// </summary>

    int32_t getCompletedNum() const;
    bool completedNumIsSet() const;
    void unsetcompletedNum();
    void setCompletedNum(int32_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// Task任务ID
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 查询条件：开始时间
    /// </summary>

    int64_t getQueryBeginTime() const;
    bool queryBeginTimeIsSet() const;
    void unsetqueryBeginTime();
    void setQueryBeginTime(int64_t value);

    /// <summary>
    /// 查询条件：结束时间
    /// </summary>

    int64_t getQueryEndTime() const;
    bool queryEndTimeIsSet() const;
    void unsetqueryEndTime();
    void setQueryEndTime(int64_t value);

    /// <summary>
    /// 任务状态  - 0：已就绪  - 1：运行中  - 2：成功  - 3：失败
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);

    /// <summary>
    /// 任务开关
    /// </summary>

    std::string getTaskSwitch() const;
    bool taskSwitchIsSet() const;
    void unsettaskSwitch();
    void setTaskSwitch(const std::string& value);

    /// <summary>
    /// 总实例数
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);


protected:
    int64_t beginTime_;
    bool beginTimeIsSet_;
    std::string busiType_;
    bool busiTypeIsSet_;
    int32_t completedNum_;
    bool completedNumIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int64_t id_;
    bool idIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int64_t queryBeginTime_;
    bool queryBeginTimeIsSet_;
    int64_t queryEndTime_;
    bool queryEndTimeIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;
    std::string taskSwitch_;
    bool taskSwitchIsSet_;
    int32_t totalNum_;
    bool totalNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditTaskStatusResponse_H_
