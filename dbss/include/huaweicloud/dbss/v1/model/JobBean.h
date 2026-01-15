
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_JobBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_JobBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  JobBean
    : public ModelBase
{
public:
    JobBean();
    virtual ~JobBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobBean members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务状态 - SUCCESS：成功 - RUNNING：运行中 - FAIL：失败 - INIT：初始化 - READY：就绪
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 类型[废弃，未使用]
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 虚拟机ID
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 虚拟机名称
    /// </summary>

    std::string getServerName() const;
    bool serverNameIsSet() const;
    void unsetserverName();
    void setServerName(const std::string& value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(int64_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 计费模式 - Period：包周期计费 - Demand：按需计费
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// 防护实例ID,该字段已废弃
    /// </summary>

    std::string getHaId() const;
    bool haIdIsSet() const;
    void unsethaId();
    void setHaId(const std::string& value);

    /// <summary>
    /// 防护实例名称，该字段已废弃
    /// </summary>

    std::string getHaName() const;
    bool haNameIsSet() const;
    void unsethaName();
    void setHaName(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    std::string serverName_;
    bool serverNameIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    int64_t beginTime_;
    bool beginTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    std::string haId_;
    bool haIdIsSet_;
    std::string haName_;
    bool haNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_JobBean_H_
