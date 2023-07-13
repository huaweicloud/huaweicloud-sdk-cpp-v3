
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_TasksObject_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_TasksObject_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  TasksObject
    : public ModelBase
{
public:
    TasksObject();
    virtual ~TasksObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TasksObject members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务的类型， 其值可以为refresh或preheating。
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 刷新结果。task_done表示刷新成功  ，task_inprocess表示刷新中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 处理中的url个数。
    /// </summary>

    int32_t getProcessing() const;
    bool processingIsSet() const;
    void unsetprocessing();
    void setProcessing(int32_t value);

    /// <summary>
    /// 成功处理的url个数。
    /// </summary>

    int32_t getSucceed() const;
    bool succeedIsSet() const;
    void unsetsucceed();
    void setSucceed(int32_t value);

    /// <summary>
    /// 处理失败的url个数。
    /// </summary>

    int32_t getFailed() const;
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(int32_t value);

    /// <summary>
    /// url总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 任务的创建时间，相对于UTC 1970-01-01到当前时间相隔的毫秒数。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 默认是文件file。file：文件,directory：目录。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t processing_;
    bool processingIsSet_;
    int32_t succeed_;
    bool succeedIsSet_;
    int32_t failed_;
    bool failedIsSet_;
    int32_t total_;
    bool totalIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_TasksObject_H_
