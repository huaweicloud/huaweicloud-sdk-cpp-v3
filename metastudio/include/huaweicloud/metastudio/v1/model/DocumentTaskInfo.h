
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DocumentTaskInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DocumentTaskInfo_H_


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
/// 文档分段任务信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  DocumentTaskInfo
    : public ModelBase
{
public:
    DocumentTaskInfo();
    virtual ~DocumentTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DocumentTaskInfo members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);

    /// <summary>
    /// 任务进度
    /// </summary>

    std::string getTaskProcess() const;
    bool taskProcessIsSet() const;
    void unsettaskProcess();
    void setTaskProcess(const std::string& value);

    /// <summary>
    /// 任务结果
    /// </summary>

    std::string getTaskResult() const;
    bool taskResultIsSet() const;
    void unsettaskResult();
    void setTaskResult(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// 任务创建时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务开始时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 任务结束时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 任务更新时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;
    std::string taskProcess_;
    bool taskProcessIsSet_;
    std::string taskResult_;
    bool taskResultIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DocumentTaskInfo_H_
