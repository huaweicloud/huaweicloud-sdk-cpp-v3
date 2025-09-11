
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditUpgradeStatus_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditUpgradeStatus_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/AuditUpgradeStep.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditUpgradeStatus
    : public ModelBase
{
public:
    AuditUpgradeStatus();
    virtual ~AuditUpgradeStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditUpgradeStatus members

    /// <summary>
    /// 当前版本
    /// </summary>

    std::string getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetcurrentVersion();
    void setCurrentVersion(const std::string& value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 状态  - 0：正在升级  - 1：满足条件未升级  - 2：不满足升级条件
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 升级步骤
    /// </summary>

    std::vector<AuditUpgradeStep>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<AuditUpgradeStep>& value);

    /// <summary>
    /// 总量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 升级版本
    /// </summary>

    std::string getUpgradeVersion() const;
    bool upgradeVersionIsSet() const;
    void unsetupgradeVersion();
    void setUpgradeVersion(const std::string& value);


protected:
    std::string currentVersion_;
    bool currentVersionIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::vector<AuditUpgradeStep> steps_;
    bool stepsIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::string upgradeVersion_;
    bool upgradeVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditUpgradeStatus_H_
