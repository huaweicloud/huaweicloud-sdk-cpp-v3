
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeActionInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeActionInfo_H_


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
/// 升级操作信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpgradeActionInfo
    : public ModelBase
{
public:
    UpgradeActionInfo();
    virtual ~UpgradeActionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeActionInfo members

    /// <summary>
    /// 升级操作,upgrade&#x3D;升级,upgradeAutoCommit&#x3D;升级自动提交,commit&#x3D;提交,rollback&#x3D;回滚。
    /// </summary>

    std::string getUpgradeAction() const;
    bool upgradeActionIsSet() const;
    void unsetupgradeAction();
    void setUpgradeAction(const std::string& value);

    /// <summary>
    /// 可用，不可用。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);


protected:
    std::string upgradeAction_;
    bool upgradeActionIsSet_;
    bool enable_;
    bool enableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeActionInfo_H_
