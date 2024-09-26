
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListHarvestTaskRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListHarvestTaskRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListHarvestTaskRequest
    : public ModelBase
{
public:
    ListHarvestTaskRequest();
    virtual ~ListHarvestTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHarvestTaskRequest members

    /// <summary>
    /// 服务鉴权Token，服务开启鉴权，必须携带Access-Control-Allow-Internal访问服务。
    /// </summary>

    std::string getAccessControlAllowInternal() const;
    bool accessControlAllowInternalIsSet() const;
    void unsetaccessControlAllowInternal();
    void setAccessControlAllowInternal(const std::string& value);

    /// <summary>
    /// 服务鉴权Token，服务开启鉴权，必须携带Access-Control-Allow-External访问服务。
    /// </summary>

    std::string getAccessControlAllowExternal() const;
    bool accessControlAllowExternalIsSet() const;
    void unsetaccessControlAllowExternal();
    void setAccessControlAllowExternal(const std::string& value);

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 组名或应用名
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 频道ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 开始时间，Unix时间戳：单位是秒
    /// </summary>

    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int32_t value);

    /// <summary>
    /// 结束，Unix时间戳：单位是秒
    /// </summary>

    int32_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int32_t value);

    /// <summary>
    /// 事件名称
    /// </summary>

    std::string getEventName() const;
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::string& value);

    /// <summary>
    /// 每页记录数，取值范围[1,100]，默认值10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量。表示从此偏移量开始查询，offset大于等于0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string accessControlAllowInternal_;
    bool accessControlAllowInternalIsSet_;
    std::string accessControlAllowExternal_;
    bool accessControlAllowExternalIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t startTime_;
    bool startTimeIsSet_;
    int32_t endTime_;
    bool endTimeIsSet_;
    std::string eventName_;
    bool eventNameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListHarvestTaskRequest& dereference_from_shared_ptr(std::shared_ptr<ListHarvestTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListHarvestTaskRequest_H_
