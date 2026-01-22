
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpgradeDatabaseVersionRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpgradeDatabaseVersionRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  UpgradeDatabaseVersionRequestBody
    : public ModelBase
{
public:
    UpgradeDatabaseVersionRequestBody();
    virtual ~UpgradeDatabaseVersionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeDatabaseVersionRequestBody members

    /// <summary>
    /// **参数解释：** 升级模式。 **约束限制：** 不涉及。 **取值范围：** - minimized_interrupt_time：表示中断时间最短优先模式：升级过程对业务影响相对较小的升级方式。 - minimized_upgrade_time：表示升级时长最短优先模式：升级过程时长相对较快的升级方式。 **默认取值：** minimized_interrupt_time。
    /// </summary>

    std::string getUpgradeMode() const;
    bool upgradeModeIsSet() const;
    void unsetupgradeMode();
    void setUpgradeMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例是否在可维护时间窗内自动升级。 **约束限制：** 不涉及。 **取值范围：** - true：表示延迟升级，实例将在可维护时间窗内自动升级。 - false：表示立即升级。 **默认取值：** false。
    /// </summary>

    bool isIsDelayed() const;
    bool isDelayedIsSet() const;
    void unsetisDelayed();
    void setIsDelayed(bool value);


protected:
    std::string upgradeMode_;
    bool upgradeModeIsSet_;
    bool isDelayed_;
    bool isDelayedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpgradeDatabaseVersionRequestBody_H_
