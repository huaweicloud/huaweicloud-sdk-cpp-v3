
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeTypeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeTypeInfo_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeActionInfo.h>
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
/// 升级类型信息
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpgradeTypeInfo
    : public ModelBase
{
public:
    UpgradeTypeInfo();
    virtual ~UpgradeTypeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeTypeInfo members

    /// <summary>
    /// 升级类型,grey&#x3D;灰度升级,inplace&#x3D;就地升级,hotfix&#x3D;热补丁升级
    /// </summary>

    std::string getUpgradeType() const;
    bool upgradeTypeIsSet() const;
    void unsetupgradeType();
    void setUpgradeType(const std::string& value);

    /// <summary>
    /// 可用，不可用
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 升级操作列表
    /// </summary>

    std::vector<UpgradeActionInfo>& getUpgradeActionList();
    bool upgradeActionListIsSet() const;
    void unsetupgradeActionList();
    void setUpgradeActionList(const std::vector<UpgradeActionInfo>& value);

    /// <summary>
    /// 是否正在进行AZ内并行升级。 -true：当前实例处于灰度升级的升级待观察升级方式中，已选择了AZ内并行升级方式，后续无法更改。 -false：当前实例处于升级流程中，未选择AZ内并行升级的方式，后续无法更改。null：当前实例尚未处于升级流程中。
    /// </summary>

    bool isIsParallelUpgrade() const;
    bool isParallelUpgradeIsSet() const;
    void unsetisParallelUpgrade();
    void setIsParallelUpgrade(bool value);


protected:
    std::string upgradeType_;
    bool upgradeTypeIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::vector<UpgradeActionInfo> upgradeActionList_;
    bool upgradeActionListIsSet_;
    bool isParallelUpgrade_;
    bool isParallelUpgradeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeTypeInfo_H_
