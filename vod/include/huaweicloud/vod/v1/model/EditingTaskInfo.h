
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_EditingTaskInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_EditingTaskInfo_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  EditingTaskInfo
    : public ModelBase
{
public:
    EditingTaskInfo();
    virtual ~EditingTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EditingTaskInfo members

    /// <summary>
    /// 编辑任务ID 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 输出的媒资ID 
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 任务状态 - WAITING 等待中 - PROCESSING 处理中； - SUCCEED 成功； - FAILED 失败； - CANCEL 已取消； 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 进度，取值0-100 
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 任务创建时间，格式按照RFC3339，UTC时间，如2020-09-01T18:50:20Z 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务结束时间，格式按照RFC3339，UTC时间，如2020-09-01T18:50:20Z，当任务结束时才有值 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_EditingTaskInfo_H_
