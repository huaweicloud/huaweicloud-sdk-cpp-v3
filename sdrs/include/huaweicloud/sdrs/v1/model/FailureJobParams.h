
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_FailureJobParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_FailureJobParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 失败任务数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  FailureJobParams
    : public ModelBase
{
public:
    FailureJobParams();
    virtual ~FailureJobParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailureJobParams members

    /// <summary>
    /// 任务名称。
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 任务状态。当前仅支持“FAIL”。FAIL：表示任务失败。
    /// </summary>

    std::string getJobStatus() const;
    bool jobStatusIsSet() const;
    void unsetjobStatus();
    void setJobStatus(const std::string& value);

    /// <summary>
    /// 任务操作时间。默认格式为：\&quot;yyyy-MM-ddTHH:mm:ss.SSSZ\&quot;，例：\&quot;2019-04-01T12:00:00.000Z\&quot;。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 任务id。执行异步API命令下发成功的返回参数。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 失败任务状态。createFail：表示创建失败。deleteFail：表示删除失败。attachFail：表示挂载失败。detachFail：表示卸载失败。expandFail：表示扩容失败。resizeFail：表示变更规格失败。startFail：表示开启保护失败。stopFail：表示停止保护失败。reverseFail：表示切换失败。failoverFail：表示故障切换失败。reprotectFail : 表示重保护失败。
    /// </summary>

    std::string getFailureStatus() const;
    bool failureStatusIsSet() const;
    void unsetfailureStatus();
    void setFailureStatus(const std::string& value);

    /// <summary>
    /// 资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 任务失败错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 任务失败原因。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// 资源类型。 server_groups：表示保护组。 protected_instances：表示保护实例。 replications：表示复制对。 disaster_recovery_drills：表示容灾演练。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);


protected:
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string jobStatus_;
    bool jobStatusIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string failureStatus_;
    bool failureStatusIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_FailureJobParams_H_
