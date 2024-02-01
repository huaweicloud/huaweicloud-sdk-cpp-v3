
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/ProxyInfo_flavor_info.h>
#include <vector>
#include <huaweicloud/rds/v3/model/ProxyInfo_nodes.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库代理信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ProxyInfo
    : public ModelBase
{
public:
    ProxyInfo();
    virtual ~ProxyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyInfo members

    /// <summary>
    /// 数据库代理实例ID。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// 数据库代理状态。  取值: NORMAL：表示数据库代理正常。 ENABLING：表示数据库代理正在开启。 DISABLING：表示数据库代理正在关闭。 CHANGING_NODE_NUM：表示数据库代理正在调整节点数量。 SCALING: 表示数据库代理正在规格变更。 UPGRADING: 表示数据库代理正在升级内核版本。 IPMODIFYING: 表示数据库代理正在修改读写分离地址。 RESTARTING: 表示数据库代理正在重启进程。 TRANSACTION_SPLITTING: 表示数据库代理正在变更事务拆分功能状态。 CONNECTION_POOL_SWITCH_OPERATING: 表示数据库代理正在变更会话连接池类型。 PORT_MODIFYING: 表示数据库代理正在修改端口。 PROXY_SSL_SWITCHING: 表示数据库代理正在变更SSL状态。 ALT_SWITCH_OPERATING: 表示数据库代理正在变更ALT状态。 CHANGING_RESOURCES: 表示数据库代理正在进行资源变更。 NORMAL: 表示数据库代理正常。 ABNORMAL: 表示数据库代理异常。 FAILED: 表示数据库代理创建失败。 FROZEN: 表示数据库代理已冻结。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 读写分离地址。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 端口号。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 延时阈值，单位：秒。
    /// </summary>

    int32_t getDelayThresholdInSeconds() const;
    bool delayThresholdInSecondsIsSet() const;
    void unsetdelayThresholdInSeconds();
    void setDelayThresholdInSeconds(int32_t value);

    /// <summary>
    /// 数据库代理规格的CPU大小。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// 数据库代理规格的内存大小。
    /// </summary>

    std::string getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(const std::string& value);

    /// <summary>
    /// 数据库代理节点个数。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// 数据库代理节点信息列表。
    /// </summary>

    std::vector<ProxyInfo_nodes>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<ProxyInfo_nodes>& value);

    /// <summary>
    /// 数据库代理集群模式。 取值：     Cluster：集群模式     Ha：主备模式
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProxyInfo_flavor_info getFlavorInfo() const;
    bool flavorInfoIsSet() const;
    void unsetflavorInfo();
    void setFlavorInfo(const ProxyInfo_flavor_info& value);

    /// <summary>
    /// 数据库代理事务拆分开关状态。  true：开启。  false：关闭。
    /// </summary>

    std::string getTransactionSplit() const;
    bool transactionSplitIsSet() const;
    void unsettransactionSplit();
    void setTransactionSplit(const std::string& value);

    /// <summary>
    /// 连接池类型。  取值范围:  CLOSED: 关闭连接池。  SESSION: 开启会话级连接池。
    /// </summary>

    std::string getConnectionPoolType() const;
    bool connectionPoolTypeIsSet() const;
    void unsetconnectionPoolType();
    void setConnectionPoolType(const std::string& value);

    /// <summary>
    /// 数据库代理计费模式。  取值范围： 0:按需计费 1:包周期计费
    /// </summary>

    std::string getPayMode() const;
    bool payModeIsSet() const;
    void unsetpayMode();
    void setPayMode(const std::string& value);

    /// <summary>
    /// 数据库代理名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库代理读写模式。 取值范围：     readwrite 读写模式     readonly 只读模式
    /// </summary>

    std::string getProxyMode() const;
    bool proxyModeIsSet() const;
    void unsetproxyMode();
    void setProxyMode(const std::string& value);

    /// <summary>
    /// 数据库代理读写分离地址内网域名。 该字段为空表示未申请读写内网域名。
    /// </summary>

    std::string getDnsName() const;
    bool dnsNameIsSet() const;
    void unsetdnsName();
    void setDnsName(const std::string& value);

    /// <summary>
    /// 数据库代理实例所属子网ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 数据库代理秒级监控状态。
    /// </summary>

    std::string getSecondsLevelMonitorFunStatus() const;
    bool secondsLevelMonitorFunStatusIsSet() const;
    void unsetsecondsLevelMonitorFunStatus();
    void setSecondsLevelMonitorFunStatus(const std::string& value);

    /// <summary>
    /// ALT开关状态。
    /// </summary>

    bool isAltFlag() const;
    bool altFlagIsSet() const;
    void unsetaltFlag();
    void setAltFlag(bool value);

    /// <summary>
    /// 是否强制读路由到只读。
    /// </summary>

    bool isForceReadOnly() const;
    bool forceReadOnlyIsSet() const;
    void unsetforceReadOnly();
    void setForceReadOnly(bool value);

    /// <summary>
    /// 数据库代理路由模式。 取值范围:     0：表示权重负载模式。     1：表示负载均衡模式（数据库主实例不接受读请求）。     2：表示负载均衡模式（数据库主实例接受读请求）。
    /// </summary>

    int32_t getRouteMode() const;
    bool routeModeIsSet() const;
    void unsetrouteMode();
    void setRouteMode(int32_t value);

    /// <summary>
    /// ssl开关状态。
    /// </summary>

    bool isSslOption() const;
    bool sslOptionIsSet() const;
    void unsetsslOption();
    void setSslOption(bool value);

    /// <summary>
    /// 数据库代理是否支持开启负载均衡路由模式。
    /// </summary>

    bool isSupportBalanceRouteMode() const;
    bool supportBalanceRouteModeIsSet() const;
    void unsetsupportBalanceRouteMode();
    void setSupportBalanceRouteMode(bool value);

    /// <summary>
    /// 数据库代理是否支持开启ssl功能。
    /// </summary>

    bool isSupportProxySsl() const;
    bool supportProxySslIsSet() const;
    void unsetsupportProxySsl();
    void setSupportProxySsl(bool value);

    /// <summary>
    /// 数据库代理是否支持切换会话连接池类型。
    /// </summary>

    bool isSupportSwitchConnectionPoolType() const;
    bool supportSwitchConnectionPoolTypeIsSet() const;
    void unsetsupportSwitchConnectionPoolType();
    void setSupportSwitchConnectionPoolType(bool value);

    /// <summary>
    /// 数据库代理是否支持开启事务拆分。
    /// </summary>

    bool isSupportTransactionSplit() const;
    bool supportTransactionSplitIsSet() const;
    void unsetsupportTransactionSplit();
    void setSupportTransactionSplit(bool value);


protected:
    std::string poolId_;
    bool poolIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string address_;
    bool addressIsSet_;
    int32_t port_;
    bool portIsSet_;
    int32_t delayThresholdInSeconds_;
    bool delayThresholdInSecondsIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string mem_;
    bool memIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    std::vector<ProxyInfo_nodes> nodes_;
    bool nodesIsSet_;
    std::string mode_;
    bool modeIsSet_;
    ProxyInfo_flavor_info flavorInfo_;
    bool flavorInfoIsSet_;
    std::string transactionSplit_;
    bool transactionSplitIsSet_;
    std::string connectionPoolType_;
    bool connectionPoolTypeIsSet_;
    std::string payMode_;
    bool payModeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string proxyMode_;
    bool proxyModeIsSet_;
    std::string dnsName_;
    bool dnsNameIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string secondsLevelMonitorFunStatus_;
    bool secondsLevelMonitorFunStatusIsSet_;
    bool altFlag_;
    bool altFlagIsSet_;
    bool forceReadOnly_;
    bool forceReadOnlyIsSet_;
    int32_t routeMode_;
    bool routeModeIsSet_;
    bool sslOption_;
    bool sslOptionIsSet_;
    bool supportBalanceRouteMode_;
    bool supportBalanceRouteModeIsSet_;
    bool supportProxySsl_;
    bool supportProxySslIsSet_;
    bool supportSwitchConnectionPoolType_;
    bool supportSwitchConnectionPoolTypeIsSet_;
    bool supportTransactionSplit_;
    bool supportTransactionSplitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyInfo_H_
