
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_HealthCompareJob_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_HealthCompareJob_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 健康对比任务。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  HealthCompareJob
    : public ModelBase
{
public:
    HealthCompareJob();
    virtual ~HealthCompareJob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HealthCompareJob members

    /// <summary>
    /// 对比任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 对比类型。 - object：对象对比 - lines：行对比 - contents：内容对比 - account：用户对比
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 状态。 - WAITING_FOR_RUNNING：等待启动中 - RUNNING：运行中 - SUCCESSFUL：完成 - FAILED：失败 - CANCELLED：已取消 - TIMEOUT_INTERRUPT：超时中断 - FULL_DOING：全量校验中 - INCRE_DOING：增量校验中
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 对比开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 对比结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 对比计算资源。
    /// </summary>

    std::string getComputeType() const;
    bool computeTypeIsSet() const;
    void unsetcomputeType();
    void setComputeType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string computeType_;
    bool computeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_HealthCompareJob_H_
