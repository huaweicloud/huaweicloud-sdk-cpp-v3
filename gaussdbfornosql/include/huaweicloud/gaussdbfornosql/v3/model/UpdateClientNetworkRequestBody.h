
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateClientNetworkRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateClientNetworkRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  UpdateClientNetworkRequestBody
    : public ModelBase
{
public:
    UpdateClientNetworkRequestBody();
    virtual ~UpdateClientNetworkRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateClientNetworkRequestBody members

    /// <summary>
    /// 客户端所在网段。  - 跨网段访问配置只有在客户端与副本集实例部署在不同网段的情况下才需要配置，例如访问副本集的客户端所在网段为192.168.0.0/16，副本集所在的网段为172.16.0.0/24，则需要添加跨网段配置192.168.0.0/16才能正常访问。  - 例如配置的源端网段为192.168.0.0/xx，则xx的输入值必须在8到32之间。  - 源端ECS连接实例的前提是与实例节点网络通信正常，如果网络不通，可以参考对等连接进行相关配置。
    /// </summary>

    std::vector<std::string>& getClientNetworkRanges();
    bool clientNetworkRangesIsSet() const;
    void unsetclientNetworkRanges();
    void setClientNetworkRanges(const std::vector<std::string>& value);


protected:
    std::vector<std::string> clientNetworkRanges_;
    bool clientNetworkRangesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateClientNetworkRequestBody_H_
