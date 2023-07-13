
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_SubJobParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_SubJobParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/SubJobEntities.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  SubJobParams
    : public ModelBase
{
public:
    SubJobParams();
    virtual ~SubJobParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubJobParams members

    /// <summary>
    /// Job的状态。 SUCCESS：成功。 RUNNING：运行中。 FAIL：失败。 INIT：正在初始化。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SubJobEntities getEntities() const;
    bool entitiesIsSet() const;
    void unsetentities();
    void setEntities(const SubJobEntities& value);

    /// <summary>
    /// Job ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// Job的类型。createProtectionGroupNoCG：创建保护组。deleteProtectionGroupNoCG：删除保护组。startProtectionGroupNoCG ：保护组开始保护。reprotectProtectionGroupNoCG ：保护组重保护。stopProtectionGroupNoCG ：保护组停止保护。failoverProtectionGroupNoCG  ：保护组故障切换。reverseProtectionGroupNoCG：保护组切换。createProtectedInstanceNoCG：创建保护实例。deleteProtectedInstanceNoCG：删除保护实例。attachReplicationPairNew：保护实例挂载复制对。detachReplicationPairNew：保护实例卸载复制对。addNicNew：保护实例添加网卡。deleteNicNew：保护实例删除网卡。resizeProtectedInstanceNew：保护实例变更规格。createReplicationPairNoCG：创建复制对。deleteReplicationPairNoCG：删除复制对。expandReplicationPairNew：复制对扩容。createDisasterRecoveryDrill：创建容灾演练。deleteDisasterRecoveryDrill：删除容灾演练。
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 开始时间。默认格式为：\&quot;yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSSZ\&quot;，例：\&quot;2019-04-01T12:00:00.000Z\&quot;。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 结束时间。默认格式为：\&quot;yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSSZ\&quot;，例：\&quot;2019-04-01T12:00:00.000Z\&quot;。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// Job执行失败时的错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// Job执行失败时的错误原因。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    SubJobEntities entities_;
    bool entitiesIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_SubJobParams_H_
