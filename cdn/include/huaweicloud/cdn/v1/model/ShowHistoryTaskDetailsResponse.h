
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowHistoryTaskDetailsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowHistoryTaskDetailsResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/UrlObject.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowHistoryTaskDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHistoryTaskDetailsResponse();
    virtual ~ShowHistoryTaskDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHistoryTaskDetailsResponse members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务类型，refresh：刷新任务；preheating：预热任务。
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 任务执行结果,task_done:成功，task_inprocess:处理中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 本次提交的url列表。
    /// </summary>

    std::vector<UrlObject>& getUrls();
    bool urlsIsSet() const;
    void unseturls();
    void setUrls(const std::vector<UrlObject>& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

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
    /// 历史任务的url个数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 文件类型，file：文件；directory：目录，默认是文件file,
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
    std::vector<UrlObject> urls_;
    bool urlsIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int32_t processing_;
    bool processingIsSet_;
    int32_t succeed_;
    bool succeedIsSet_;
    int32_t failed_;
    bool failedIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowHistoryTaskDetailsResponse_H_
