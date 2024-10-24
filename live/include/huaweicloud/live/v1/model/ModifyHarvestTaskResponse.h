
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyHarvestTaskResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyHarvestTaskResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/VodPackageInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyHarvestTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ModifyHarvestTaskResponse();
    virtual ~ModifyHarvestTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyHarvestTaskResponse members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 频道推流域名
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
    /// 频道ID。频道唯一标识，为必填项。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 开始时间。Unix时间错，单位为秒
    /// </summary>

    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int32_t value);

    /// <summary>
    /// 结束时间。Unix时间错，单位为秒
    /// </summary>

    int32_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int32_t value);

    /// <summary>
    /// 任务创建时间。Unix时间错，单位为秒
    /// </summary>

    int32_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int32_t value);

    /// <summary>
    /// 事件名称
    /// </summary>

    std::string getEventName() const;
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::string& value);

    /// <summary>
    /// 任务描述
    /// </summary>

    std::string getTaskDesc() const;
    bool taskDescIsSet() const;
    void unsettaskDesc();
    void setTaskDesc(const std::string& value);

    /// <summary>
    /// 任务状态，取值为 [ UNSTART、IN_PROGRESS、SUCCEEDED、FAILED ]
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务状态为FAILED时，最大允许重试的次数
    /// </summary>

    int32_t getMaxRetryCnt() const;
    bool maxRetryCntIsSet() const;
    void unsetmaxRetryCnt();
    void setMaxRetryCnt(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    VodPackageInfo getPackageInfo() const;
    bool packageInfoIsSet() const;
    void unsetpackageInfo();
    void setPackageInfo(const VodPackageInfo& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t startTime_;
    bool startTimeIsSet_;
    int32_t endTime_;
    bool endTimeIsSet_;
    int32_t createTime_;
    bool createTimeIsSet_;
    std::string eventName_;
    bool eventNameIsSet_;
    std::string taskDesc_;
    bool taskDescIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t maxRetryCnt_;
    bool maxRetryCntIsSet_;
    VodPackageInfo packageInfo_;
    bool packageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyHarvestTaskResponse_H_
