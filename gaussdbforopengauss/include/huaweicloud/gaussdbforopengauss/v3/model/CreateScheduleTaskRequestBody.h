
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateScheduleTaskRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateScheduleTaskRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CreateScheduleTaskRequestBody
    : public ModelBase
{
public:
    CreateScheduleTaskRequestBody();
    virtual ~CreateScheduleTaskRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateScheduleTaskRequestBody members

    /// <summary>
    /// 实例ID列表。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 任务开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 实例升级类型。
    /// </summary>

    std::string getUpgradeType() const;
    bool upgradeTypeIsSet() const;
    void unsetupgradeType();
    void setUpgradeType(const std::string& value);

    /// <summary>
    /// 实例升级操作。
    /// </summary>

    std::string getUpgradeAction() const;
    bool upgradeActionIsSet() const;
    void unsetupgradeAction();
    void setUpgradeAction(const std::string& value);

    /// <summary>
    /// 实例升级目标版本。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string upgradeType_;
    bool upgradeTypeIsSet_;
    std::string upgradeAction_;
    bool upgradeActionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateScheduleTaskRequestBody_H_
