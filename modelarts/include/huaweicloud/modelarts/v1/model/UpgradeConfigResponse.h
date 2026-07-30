
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpgradeConfigResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpgradeConfigResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/RollingUpdateResponse.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 在线服务升级配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpgradeConfigResponse
    : public ModelBase
{
public:
    UpgradeConfigResponse();
    virtual ~UpgradeConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeConfigResponse members

    /// <summary>
    /// **参数解释：** 升级类型。 **取值范围：** - ROLLING：滚动升级，默认值。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RollingUpdateResponse getRollingUpdate() const;
    bool rollingUpdateIsSet() const;
    void unsetrollingUpdate();
    void setRollingUpdate(const RollingUpdateResponse& value);


protected:
    std::string type_;
    bool typeIsSet_;
    RollingUpdateResponse rollingUpdate_;
    bool rollingUpdateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpgradeConfigResponse_H_
