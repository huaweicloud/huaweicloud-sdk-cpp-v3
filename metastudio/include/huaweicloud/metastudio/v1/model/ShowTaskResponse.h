
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTaskResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTaskResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskResponse();
    virtual ~ShowTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskResponse members

    /// <summary>
    /// 资源
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 任务开始时间
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 任务结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 操作人
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// 导入总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 成功数
    /// </summary>

    int32_t getSuccessCount() const;
    bool successCountIsSet() const;
    void unsetsuccessCount();
    void setSuccessCount(int32_t value);

    /// <summary>
    /// 失败数
    /// </summary>

    int32_t getFailureCount() const;
    bool failureCountIsSet() const;
    void unsetfailureCount();
    void setFailureCount(int32_t value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 操作用户ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    std::string resource_;
    bool resourceIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t successCount_;
    bool successCountIsSet_;
    int32_t failureCount_;
    bool failureCountIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTaskResponse_H_
