
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpdateProxyConnectionPoolTypeRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpdateProxyConnectionPoolTypeRequest_H_


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
/// proxy更新连接池请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyUpdateProxyConnectionPoolTypeRequest
    : public ModelBase
{
public:
    ProxyUpdateProxyConnectionPoolTypeRequest();
    virtual ~ProxyUpdateProxyConnectionPoolTypeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyUpdateProxyConnectionPoolTypeRequest members

    /// <summary>
    /// 连接池类型。 - CLOSED：关闭连接池。 - SESSION：开启会话级连接池
    /// </summary>

    std::string getConnectionPoolType() const;
    bool connectionPoolTypeIsSet() const;
    void unsetconnectionPoolType();
    void setConnectionPoolType(const std::string& value);


protected:
    std::string connectionPoolType_;
    bool connectionPoolTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpdateProxyConnectionPoolTypeRequest_H_
