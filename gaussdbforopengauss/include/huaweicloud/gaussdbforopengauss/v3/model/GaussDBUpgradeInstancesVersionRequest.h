
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBUpgradeInstancesVersionRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBUpgradeInstancesVersionRequest_H_


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
/// GaussDB批量实例版本升级接口传参参数。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBUpgradeInstancesVersionRequest
    : public ModelBase
{
public:
    GaussDBUpgradeInstancesVersionRequest();
    virtual ~GaussDBUpgradeInstancesVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GaussDBUpgradeInstancesVersionRequest members

    /// <summary>
    /// 批量实例ID。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 实例升级类型，包括就地升级，灰度升级、热补丁升级三种。
    /// </summary>

    std::string getUpgradeType() const;
    bool upgradeTypeIsSet() const;
    void unsetupgradeType();
    void setUpgradeType(const std::string& value);

    /// <summary>
    /// 实例升级操作，就地升级无需传值。灰度升级包括升级自动提交，升级待观察，提交升级，升级回退四种。
    /// </summary>

    std::string getUpgradeAction() const;
    bool upgradeActionIsSet() const;
    void unsetupgradeAction();
    void setUpgradeAction(const std::string& value);

    /// <summary>
    /// 批量实例升级目标版本，非必填。如果未传值灰度升级和就地升级默认升级到当前实例的优选版本，热补丁升级无需传该值，默认升级实例所有可升级热补丁。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBUpgradeInstancesVersionRequest_H_
