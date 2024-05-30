
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyVersionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyVersionResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowProxyVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProxyVersionResponse();
    virtual ~ShowProxyVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProxyVersionResponse members

    /// <summary>
    /// 当前代理版本
    /// </summary>

    std::string getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetcurrentVersion();
    void setCurrentVersion(const std::string& value);

    /// <summary>
    /// 最新代理版本
    /// </summary>

    std::string getLatestVersion() const;
    bool latestVersionIsSet() const;
    void unsetlatestVersion();
    void setLatestVersion(const std::string& value);

    /// <summary>
    /// 是否能升级
    /// </summary>

    bool isCanUpgrade() const;
    bool canUpgradeIsSet() const;
    void unsetcanUpgrade();
    void setCanUpgrade(bool value);


protected:
    std::string currentVersion_;
    bool currentVersionIsSet_;
    std::string latestVersion_;
    bool latestVersionIsSet_;
    bool canUpgrade_;
    bool canUpgradeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyVersionResponse_H_
