
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlProxyV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlProxyV3_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/MysqlProxyNodes.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlProxyV3
    : public ModelBase
{
public:
    MysqlProxyV3();
    virtual ~MysqlProxyV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MysqlProxyV3 members

    /// <summary>
    /// Proxy实例ID。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// Proxy实例开启状态。  取值: - “ACTIVE”，表示数据库代理正常； - “FAILED”，表示数据库代理创建失败； - “DELETED”，表示数据库代理已删除； - “ABNORMAL”，表示数据库代理异常； - “ENABLING PROXY”，表示数据库代理正在开启； - “DISABLING PROXY”，表示数据库代理正在关闭； - “ADDING PROXY NODE”，表示数据库代理正在扩容； - “DELETING READ REPLICAS FROM PROXY”，表示数据库代理正在移除只读节点； - “ADDING READ REPLICAS TO PROXY”，表示数据库代理正在添加只读节点； - “CHANGING WEIGHTS”，表示数据库代理正在修改只读节点权重。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// Proxy读写分离地址。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// Proxy端口信息。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// Proxy实例状态。  取值范围： - ACTIVE，表示数据库代理正常 - ABNORMAL，表示数据库代理异常 - FAILED，表示数据库代理创建失败 - DELETED，表示数据库代理已删除
    /// </summary>

    std::string getPoolStatus() const;
    bool poolStatusIsSet() const;
    void unsetpoolStatus();
    void setPoolStatus(const std::string& value);

    /// <summary>
    /// 延时阈值，单位：秒。
    /// </summary>

    int32_t getDelayThresholdInSeconds() const;
    bool delayThresholdInSecondsIsSet() const;
    void unsetdelayThresholdInSeconds();
    void setDelayThresholdInSeconds(int32_t value);

    /// <summary>
    /// Elb模式的虚拟ip信息。
    /// </summary>

    std::string getElbVip() const;
    bool elbVipIsSet() const;
    void unsetelbVip();
    void setElbVip(const std::string& value);

    /// <summary>
    /// 弹性公网IP信息。
    /// </summary>

    std::string getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const std::string& value);

    /// <summary>
    /// Proxy实例规格的CPU数量。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// Proxy实例规格的内存数量。
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);

    /// <summary>
    /// Proxy节点个数。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// Proxy主备模式，取值范围：Cluster。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// Proxy节点信息。
    /// </summary>

    std::vector<MysqlProxyNodes>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<MysqlProxyNodes>& value);

    /// <summary>
    /// Proxy规格信息。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// Proxy实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// Proxy事务拆分开关状态【ON/OFF】。
    /// </summary>

    std::string getTransactionSplit() const;
    bool transactionSplitIsSet() const;
    void unsettransactionSplit();
    void setTransactionSplit(const std::string& value);

    /// <summary>
    /// 连接池类型。  取值范围: - CLOSED: 关闭连接池。 - SESSION: 开启会话级连接池。
    /// </summary>

    std::string getConnectionPoolType() const;
    bool connectionPoolTypeIsSet() const;
    void unsetconnectionPoolType();
    void setConnectionPoolType(const std::string& value);

    /// <summary>
    /// 数据库代理版本是否支持会话级连接池。  取值范围: - true: 支持。 - false: 不支持。
    /// </summary>

    bool isSwitchConnectionPoolTypeEnabled() const;
    bool switchConnectionPoolTypeEnabledIsSet() const;
    void unsetswitchConnectionPoolTypeEnabled();
    void setSwitchConnectionPoolTypeEnabled(bool value);

    /// <summary>
    /// 数据库代理路由模式，默认为权重负载模式。  取值范围: - 0，表示权重负载模式; - 1，表示负载均衡模式（数据库主节点不接受读请求）； - 2，表示负载均衡模式（数据库主节点接受读请求）。
    /// </summary>

    int32_t getRouteMode() const;
    bool routeModeIsSet() const;
    void unsetrouteMode();
    void setRouteMode(int32_t value);

    /// <summary>
    /// 数据库代理版本是否支持负载均衡模式。  取值范围: - true 支持; - false 不支持。
    /// </summary>

    bool isBalanceRouteModeEnabled() const;
    bool balanceRouteModeEnabledIsSet() const;
    void unsetbalanceRouteModeEnabled();
    void setBalanceRouteModeEnabled(bool value);

    /// <summary>
    /// 一致性模式。默认值为空，此时以会话一致性参数session_consistence为准。 - session: 会话一致性 - global: 全局一致性 - eventual: 最终一致性
    /// </summary>

    std::string getConsistenceMode() const;
    bool consistenceModeIsSet() const;
    void unsetconsistenceMode();
    void setConsistenceMode(const std::string& value);


protected:
    std::string poolId_;
    bool poolIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string address_;
    bool addressIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string poolStatus_;
    bool poolStatusIsSet_;
    int32_t delayThresholdInSeconds_;
    bool delayThresholdInSecondsIsSet_;
    std::string elbVip_;
    bool elbVipIsSet_;
    std::string eip_;
    bool eipIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::vector<MysqlProxyNodes> nodes_;
    bool nodesIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string transactionSplit_;
    bool transactionSplitIsSet_;
    std::string connectionPoolType_;
    bool connectionPoolTypeIsSet_;
    bool switchConnectionPoolTypeEnabled_;
    bool switchConnectionPoolTypeEnabledIsSet_;
    int32_t routeMode_;
    bool routeModeIsSet_;
    bool balanceRouteModeEnabled_;
    bool balanceRouteModeEnabledIsSet_;
    std::string consistenceMode_;
    bool consistenceModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlProxyV3_H_
