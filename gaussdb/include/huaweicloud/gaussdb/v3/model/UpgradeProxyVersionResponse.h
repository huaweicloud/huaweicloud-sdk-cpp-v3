
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeProxyVersionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeProxyVersionResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ProxyUpgradeVersionDetail.h>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradeProxyVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    UpgradeProxyVersionResponse();
    virtual ~UpgradeProxyVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeProxyVersionResponse members

    /// <summary>
    /// 数据库代理升级信息列表。
    /// </summary>

    std::vector<ProxyUpgradeVersionDetail>& getUpdateResult();
    bool updateResultIsSet() const;
    void unsetupdateResult();
    void setUpdateResult(const std::vector<ProxyUpgradeVersionDetail>& value);


protected:
    std::vector<ProxyUpgradeVersionDetail> updateResult_;
    bool updateResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeProxyVersionResponse_H_
