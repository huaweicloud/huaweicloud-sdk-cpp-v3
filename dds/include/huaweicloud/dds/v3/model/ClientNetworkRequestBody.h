
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ClientNetworkRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ClientNetworkRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ClientNetworkRequestBody
    : public ModelBase
{
public:
    ClientNetworkRequestBody();
    virtual ~ClientNetworkRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClientNetworkRequestBody members

    /// <summary>
    /// 客户端所在网段。 跨网段访问配置只有在客户端与副本集实例部署在不同网段的情况下才需要配置，例如访问副本集的客户端所在网段为192.168.0.0/16，副本集所在的网段为172.16.0.0/24，则需要添加跨网段配置192.168.0.0/16才能正常访问。只有副本集有该功能。 注意：源端ECS连接实例的前提是与实例节点网络通信正常，如果网络不通，可以参考对等连接进行相关配置。
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ClientNetworkRequestBody_H_
