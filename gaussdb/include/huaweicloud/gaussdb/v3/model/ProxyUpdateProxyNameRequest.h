
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpdateProxyNameRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpdateProxyNameRequest_H_


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
/// 修改代理实例名称的请求体对象。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyUpdateProxyNameRequest
    : public ModelBase
{
public:
    ProxyUpdateProxyNameRequest();
    virtual ~ProxyUpdateProxyNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyUpdateProxyNameRequest members

    /// <summary>
    /// 修改代理实例的新名称
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpdateProxyNameRequest_H_
