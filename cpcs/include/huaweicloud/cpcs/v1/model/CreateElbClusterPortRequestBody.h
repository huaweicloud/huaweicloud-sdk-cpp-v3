
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateElbClusterPortRequestBody_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateElbClusterPortRequestBody_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  CreateElbClusterPortRequestBody
    : public ModelBase
{
public:
    CreateElbClusterPortRequestBody();
    virtual ~CreateElbClusterPortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateElbClusterPortRequestBody members

    /// <summary>
    /// 集群id
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// elb id。端口映射将会在该elb中创建
    /// </summary>

    std::string getElbId() const;
    bool elbIdIsSet() const;
    void unsetelbId();
    void setElbId(const std::string& value);

    /// <summary>
    /// 新增的端口的模式。除了VPN外，其他类型的服务只支持 PROXY
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 将在elb中为代理通道创建的监听器的端口
    /// </summary>

    int32_t getLbListenerPort() const;
    bool lbListenerPortIsSet() const;
    void unsetlbListenerPort();
    void setLbListenerPort(int32_t value);

    /// <summary>
    /// 将在elb中为代理通道创建的后端服务组中后端服务器的端口。无默认值。
    /// </summary>

    int32_t getServerPort() const;
    bool serverPortIsSet() const;
    void unsetserverPort();
    void setServerPort(int32_t value);

    /// <summary>
    /// 将在elb中给VPN隧道创建的监听器的端口。当mode&#x3D;TUNNEL时，必填
    /// </summary>

    int32_t getTunnelLbListenerPort() const;
    bool tunnelLbListenerPortIsSet() const;
    void unsettunnelLbListenerPort();
    void setTunnelLbListenerPort(int32_t value);

    /// <summary>
    /// 将在elb中给VPN隧道创建的后端服务组中后端服务器的端口。 当mode&#x3D;TUNNEL时，必填，有默认值:20706。
    /// </summary>

    int32_t getTunnelServerPort() const;
    bool tunnelServerPortIsSet() const;
    void unsettunnelServerPort();
    void setTunnelServerPort(int32_t value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string elbId_;
    bool elbIdIsSet_;
    std::string mode_;
    bool modeIsSet_;
    int32_t lbListenerPort_;
    bool lbListenerPortIsSet_;
    int32_t serverPort_;
    bool serverPortIsSet_;
    int32_t tunnelLbListenerPort_;
    bool tunnelLbListenerPortIsSet_;
    int32_t tunnelServerPort_;
    bool tunnelServerPortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateElbClusterPortRequestBody_H_
