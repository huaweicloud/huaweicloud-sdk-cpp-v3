
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowUrlTaskInfoRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowUrlTaskInfoRequest_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowUrlTaskInfoRequest
    : public ModelBase
{
public:
    ShowUrlTaskInfoRequest();
    virtual ~ShowUrlTaskInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUrlTaskInfoRequest members

    /// <summary>
    /// 起始时间戳（毫秒），默认当天00:00。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 结束时间戳（毫秒），默认次日00:00。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 偏移量：特定数据字段与起始数据字段位置的距离。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 单次查询数据条数，上限为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 刷新预热url。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 任务类型，REFRESH：刷新任务；PREHEATING：预热任务。
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// url状态，状态类型：processing：处理中；succeed：完成；failed：失败；waiting：等待；refreshing：刷新中; preheating : 预热中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 文件类型，file:文件;directory:目录。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowUrlTaskInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowUrlTaskInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowUrlTaskInfoRequest_H_
