
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyDbAgentJobResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyDbAgentJobResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyDbAgentJobResponse
    : public ModelBase, public HttpResponse
{
public:
    ModifyDbAgentJobResponse();
    virtual ~ModifyDbAgentJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyDbAgentJobResponse members

    /// <summary>
    /// 作业id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 作业名。
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 是否可用。  true：可用。 false：不可用。
    /// </summary>

    bool isIsEnabled() const;
    bool isEnabledIsSet() const;
    void unsetisEnabled();
    void setIsEnabled(bool value);

    /// <summary>
    /// 最新执行时间。格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getRunTime() const;
    bool runTimeIsSet() const;
    void unsetrunTime();
    void setRunTime(const std::string& value);

    /// <summary>
    /// 作业执行状态。取值如下:  0:失败。 1:成功。 2:重试中。 3:已取消。 4:正在运行。
    /// </summary>

    std::string getRunStatus() const;
    bool runStatusIsSet() const;
    void unsetrunStatus();
    void setRunStatus(const std::string& value);

    /// <summary>
    /// 最近失败时间。格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getLastFailureTime() const;
    bool lastFailureTimeIsSet() const;
    void unsetlastFailureTime();
    void setLastFailureTime(const std::string& value);

    /// <summary>
    /// 历史失败次数。
    /// </summary>

    int32_t getFailureCount() const;
    bool failureCountIsSet() const;
    void unsetfailureCount();
    void setFailureCount(int32_t value);

    /// <summary>
    /// 作业代理的类型。  snapshot：快照代理 log_reader：日志读取器代理 distribution：分发代理 merge:合并代理 queue_reader：队列读取器代理。
    /// </summary>

    std::string getAgentType() const;
    bool agentTypeIsSet() const;
    void unsetagentType();
    void setAgentType(const std::string& value);

    /// <summary>
    /// 配置文件id。
    /// </summary>

    std::string getProfileId() const;
    bool profileIdIsSet() const;
    void unsetprofileId();
    void setProfileId(const std::string& value);

    /// <summary>
    /// 配置文件名。
    /// </summary>

    std::string getProfileName() const;
    bool profileNameIsSet() const;
    void unsetprofileName();
    void setProfileName(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    bool isEnabled_;
    bool isEnabledIsSet_;
    std::string runTime_;
    bool runTimeIsSet_;
    std::string runStatus_;
    bool runStatusIsSet_;
    std::string lastFailureTime_;
    bool lastFailureTimeIsSet_;
    int32_t failureCount_;
    bool failureCountIsSet_;
    std::string agentType_;
    bool agentTypeIsSet_;
    std::string profileId_;
    bool profileIdIsSet_;
    std::string profileName_;
    bool profileNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyDbAgentJobResponse_H_
