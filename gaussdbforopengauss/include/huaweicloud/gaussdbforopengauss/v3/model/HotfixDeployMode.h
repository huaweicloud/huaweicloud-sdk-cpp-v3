
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HotfixDeployMode_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HotfixDeployMode_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  HotfixDeployMode
    : public ModelBase
{
public:
    HotfixDeployMode();
    virtual ~HotfixDeployMode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HotfixDeployMode members

    /// <summary>
    /// **参数解释**： 补丁默认升级策略。 **取值范围**： - true：无需选择，默认升级该版本。 - false：用户可选，选择后升级该版本。
    /// </summary>

    bool isDefaultUpgrade() const;
    bool defaultUpgradeIsSet() const;
    void unsetdefaultUpgrade();
    void setDefaultUpgrade(bool value);

    /// <summary>
    /// **参数解释**： 热补丁升级策略的修改时间，UNIX时间戳格式，单位是毫秒。 **取值范围**： 不涉及。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// **参数解释**： 可升级该补丁的实例部署形态。 **取值范围**： - distributed：包括独立部署，基础版混合部署。 - centralization_standard：包括主备版。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    bool defaultUpgrade_;
    bool defaultUpgradeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HotfixDeployMode_H_
