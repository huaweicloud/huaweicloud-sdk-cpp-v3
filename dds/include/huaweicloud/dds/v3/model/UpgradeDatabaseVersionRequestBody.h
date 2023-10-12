
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
    /// 升级模式。  取值为“minimized_interrupt_time”为中断时间最短优先模式：升级过程对业务影响相对较小的升级方式  取值为“minimized_upgrade_time”为升级时长最短优先模式：升级过程时长相对较快的升级方式。  默认取值为“minimized_interrupt_time”。
    /// </summary>

    std::string getUpgradeMode() const;
    bool upgradeModeIsSet() const;
    void unsetupgradeMode();
    void setUpgradeMode(const std::string& value);


protected:
    std::string upgradeMode_;
    bool upgradeModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpgradeDatabaseVersionRequestBody_H_
