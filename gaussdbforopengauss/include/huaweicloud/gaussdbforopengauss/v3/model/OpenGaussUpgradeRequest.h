
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussUpgradeRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussUpgradeRequest_H_


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
/// GaussDB(for openGauss)实例版本升级接口传参参数。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  OpenGaussUpgradeRequest
    : public ModelBase
{
public:
    OpenGaussUpgradeRequest();
    virtual ~OpenGaussUpgradeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenGaussUpgradeRequest members

    /// <summary>
    /// 实例升级类型，包括就地升级，灰度升级，热补丁升级三种，三种升级方式的异同，详见接口描述。  inplace 就地升级  grey 灰度升级  hotfix 热补丁升级。
    /// </summary>

    std::string getUpgradeType() const;
    bool upgradeTypeIsSet() const;
    void unsetupgradeType();
    void setUpgradeType(const std::string& value);

    /// <summary>
    /// 实例升级操作，就地升级无需传值。灰度升级包括升级自动提交，升级待观察，提交升级，升级回退四种。热补丁升级包括升级自动提交，升级回退两种。详见接口描述。  upgradeAutoCommit 升级自动提交  upgrade 升级待观察  commit 提交升级  rollback 升级回退。
    /// </summary>

    std::string getUpgradeAction() const;
    bool upgradeActionIsSet() const;
    void unsetupgradeAction();
    void setUpgradeAction(const std::string& value);

    /// <summary>
    /// 实例升级目标版本，非必填。如果未传值则默认升级到当前实例的优选版本。仅热补丁升级方式下支持传入多个值，升级操作为升级自动提交，则实例版本从小到大批量升级，升级操作为升级回退，则实例版本从大到小批量回退。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 分布式实例灰度升级，滚动升级分片数。分布式实例灰度升级，升级待观察必填。该值不能大于实例未升级分片总数。
    /// </summary>

    int32_t getUpgradeShardNum() const;
    bool upgradeShardNumIsSet() const;
    void unsetupgradeShardNum();
    void setUpgradeShardNum(int32_t value);

    /// <summary>
    /// 主备版实例灰度升级，滚动升级az值，可以支持多az一起升级，az之间以’,’分割。集中式实例灰度升级，升级待观察必填。该值不能填入不属于该实例的az值。
    /// </summary>

    std::string getUpgradeAz() const;
    bool upgradeAzIsSet() const;
    void unsetupgradeAz();
    void setUpgradeAz(const std::string& value);


protected:
    std::string upgradeType_;
    bool upgradeTypeIsSet_;
    std::string upgradeAction_;
    bool upgradeActionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    int32_t upgradeShardNum_;
    bool upgradeShardNumIsSet_;
    std::string upgradeAz_;
    bool upgradeAzIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussUpgradeRequest_H_
