
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CheckTaskSpec
    : public ModelBase
{
public:
    CheckTaskSpec();
    virtual ~CheckTaskSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckTaskSpec members

    /// <summary>
    /// **参数解释：** 插件升级目标版本 **取值范围：** 不涉及 
    /// </summary>

    std::string getAddonTargetVersion() const;
    bool addonTargetVersionIsSet() const;
    void unsetaddonTargetVersion();
    void setAddonTargetVersion(const std::string& value);


protected:
    std::string addonTargetVersion_;
    bool addonTargetVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskSpec_H_
