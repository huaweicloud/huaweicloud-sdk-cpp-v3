
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpgradeConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpgradeConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/RollingUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 在线服务升级配置。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpgradeConfig
    : public ModelBase
{
public:
    UpgradeConfig();
    virtual ~UpgradeConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeConfig members

    /// <summary>
    /// **参数解释：** 升级类型。 **约束限制：** 不涉及。 **取值范围：** - ROLLING：滚动升级，默认值。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RollingUpdate getRollingUpdate() const;
    bool rollingUpdateIsSet() const;
    void unsetrollingUpdate();
    void setRollingUpdate(const RollingUpdate& value);


protected:
    std::string type_;
    bool typeIsSet_;
    RollingUpdate rollingUpdate_;
    bool rollingUpdateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpgradeConfig_H_
