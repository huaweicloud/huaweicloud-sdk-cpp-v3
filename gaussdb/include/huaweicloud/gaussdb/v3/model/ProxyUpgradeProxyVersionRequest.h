
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpgradeProxyVersionRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpgradeProxyVersionRequest_H_


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
/// proxy升级内核版本请求体对象。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyUpgradeProxyVersionRequest
    : public ModelBase
{
public:
    ProxyUpgradeProxyVersionRequest();
    virtual ~ProxyUpgradeProxyVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyUpgradeProxyVersionRequest members

    /// <summary>
    /// 升级前源内核版本号
    /// </summary>

    std::string getSourceVersion() const;
    bool sourceVersionIsSet() const;
    void unsetsourceVersion();
    void setSourceVersion(const std::string& value);

    /// <summary>
    /// 目标升级内核版本号
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);


protected:
    std::string sourceVersion_;
    bool sourceVersionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpgradeProxyVersionRequest_H_
