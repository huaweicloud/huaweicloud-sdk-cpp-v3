
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ClickHouseNodeInfo_datastore.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/ClickHouseNodeInfo_volume.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ClickHouseNodeInfo
    : public ModelBase
{
public:
    ClickHouseNodeInfo();
    virtual ~ClickHouseNodeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClickHouseNodeInfo members

    /// <summary>
    /// 实例节点ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例节点名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例节点类型。 取值范围： - master：主节点 - slave：备节点
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 实例节点状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例节点周期。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ClickHouseNodeInfo_volume getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const ClickHouseNodeInfo_volume& value);

    /// <summary>
    /// 实例节点cpu数量。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// 实例节点内存大小（GB）。
    /// </summary>

    std::string getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ClickHouseNodeInfo_datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const ClickHouseNodeInfo_datastore& value);

    /// <summary>
    /// 节点优先级。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 冻结标志。 取值范围： - 0：不冻结 - 1：冻结
    /// </summary>

    int32_t getFrozenFlag() const;
    bool frozenFlagIsSet() const;
    void unsetfrozenFlag();
    void setFrozenFlag(int32_t value);

    /// <summary>
    /// 数据库端口号。取值范围：0~65535。
    /// </summary>

    int32_t getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(int32_t value);

    /// <summary>
    /// 支付模式。 取值范围： - 0：按需计费 - 1：包周期
    /// </summary>

    std::string getPayModel() const;
    bool payModelIsSet() const;
    void unsetpayModel();
    void setPayModel(const std::string& value);

    /// <summary>
    /// 包周期订单ID。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 节点数据ip。
    /// </summary>

    std::string getTrafficIp() const;
    bool trafficIpIsSet() const;
    void unsettrafficIp();
    void setTrafficIp(const std::string& value);

    /// <summary>
    /// 节点数据ipv6。
    /// </summary>

    std::string getTrafficIpv6() const;
    bool trafficIpv6IsSet() const;
    void unsettrafficIpv6();
    void setTrafficIpv6(const std::string& value);

    /// <summary>
    /// 节点数据vip。
    /// </summary>

    std::string getTrafficVip() const;
    bool trafficVipIsSet() const;
    void unsettrafficVip();
    void setTrafficVip(const std::string& value);

    /// <summary>
    /// 节点数据vipV6。
    /// </summary>

    std::string getTrafficVipv6() const;
    bool trafficVipv6IsSet() const;
    void unsettrafficVipv6();
    void setTrafficVipv6(const std::string& value);

    /// <summary>
    /// 可用区。
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// 可用区描述。
    /// </summary>

    std::string getAzDescription() const;
    bool azDescriptionIsSet() const;
    void unsetazDescription();
    void setAzDescription(const std::string& value);

    /// <summary>
    /// 可用区类型。
    /// </summary>

    std::string getAzType() const;
    bool azTypeIsSet() const;
    void unsetazType();
    void setAzType(const std::string& value);

    /// <summary>
    /// 节点所在区。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 节点创建时间。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// 节点更新时间。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);

    /// <summary>
    /// 节点规格ID。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 节点规格码。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// IASS规格码。
    /// </summary>

    std::string getIassFlavorRef() const;
    bool iassFlavorRefIsSet() const;
    void unsetiassFlavorRef();
    void setIassFlavorRef(const std::string& value);

    /// <summary>
    /// 公网最大连接数。
    /// </summary>

    std::string getMaxConnections() const;
    bool maxConnectionsIsSet() const;
    void unsetmaxConnections();
    void setMaxConnections(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 参数更新是否需要重启。
    /// </summary>

    bool isNeedRestart() const;
    bool needRestartIsSet() const;
    void unsetneedRestart();
    void setNeedRestart(bool value);

    /// <summary>
    /// 安全组
    /// </summary>

    std::string getSgId() const;
    bool sgIdIsSet() const;
    void unsetsgId();
    void setSgId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string period_;
    bool periodIsSet_;
    ClickHouseNodeInfo_volume volume_;
    bool volumeIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string mem_;
    bool memIsSet_;
    ClickHouseNodeInfo_datastore datastore_;
    bool datastoreIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    int32_t frozenFlag_;
    bool frozenFlagIsSet_;
    int32_t dbPort_;
    bool dbPortIsSet_;
    std::string payModel_;
    bool payModelIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string trafficIp_;
    bool trafficIpIsSet_;
    std::string trafficIpv6_;
    bool trafficIpv6IsSet_;
    std::string trafficVip_;
    bool trafficVipIsSet_;
    std::string trafficVipv6_;
    bool trafficVipv6IsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string azDescription_;
    bool azDescriptionIsSet_;
    std::string azType_;
    bool azTypeIsSet_;
    std::string region_;
    bool regionIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string iassFlavorRef_;
    bool iassFlavorRefIsSet_;
    std::string maxConnections_;
    bool maxConnectionsIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    bool needRestart_;
    bool needRestartIsSet_;
    std::string sgId_;
    bool sgIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfo_H_
