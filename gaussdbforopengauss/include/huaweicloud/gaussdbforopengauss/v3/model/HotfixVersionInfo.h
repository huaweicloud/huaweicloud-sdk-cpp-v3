
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HotfixVersionInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HotfixVersionInfo_H_


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
/// 热补丁信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  HotfixVersionInfo
    : public ModelBase
{
public:
    HotfixVersionInfo();
    virtual ~HotfixVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HotfixVersionInfo members

    /// <summary>
    /// 热补丁版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 热补丁升级完成时间列表。  热补丁升级完成时间，格式为“yyyy-mm-dd hh:mm:ss timezone”。  其中timezone是指时区。
    /// </summary>

    std::string getUpgradeFinishedTime() const;
    bool upgradeFinishedTimeIsSet() const;
    void unsetupgradeFinishedTime();
    void setUpgradeFinishedTime(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string upgradeFinishedTime_;
    bool upgradeFinishedTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HotfixVersionInfo_H_
