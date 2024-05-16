
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_instances_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_instances_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapInstanceList_network.h>
#include <huaweicloud/gaussdb/v3/model/QueryAction.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/HtapInstanceList_available_zones.h>
#include <huaweicloud/gaussdb/v3/model/ReadableNodeInfos.h>
#include <huaweicloud/gaussdb/v3/model/HtapInstanceList_instance_state.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapInstanceList_instances
    : public ModelBase
{
public:
    HtapInstanceList_instances();
    virtual ~HtapInstanceList_instances();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapInstanceList_instances members

    /// <summary>
    /// HTAP实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// HTAP实例名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// HTAP数据库引擎名。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// HTAP数据库引擎版本。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 租户在某一region下的project ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HtapInstanceList_instance_state getInstanceState() const;
    bool instanceStateIsSet() const;
    void unsetinstanceState();
    void setInstanceState(const HtapInstanceList_instance_state& value);

    /// <summary>
    /// HTAP实例创建时间。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// HTAP实例是否冻结。
    /// </summary>

    bool isIsFrozen() const;
    bool isFrozenIsSet() const;
    void unsetisFrozen();
    void setIsFrozen(bool value);

    /// <summary>
    /// HTAP实例部署模式。
    /// </summary>

    std::string getHaMode() const;
    bool haModeIsSet() const;
    void unsethaMode();
    void setHaMode(const std::string& value);

    /// <summary>
    /// 计费模式。当前仅支持按需计费。 0：按需计费 1：包周期
    /// </summary>

    std::string getPayModel() const;
    bool payModelIsSet() const;
    void unsetpayModel();
    void setPayModel(const std::string& value);

    /// <summary>
    /// 包周期计费订单ID。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 包周期计费备用订单ID。
    /// </summary>

    std::string getAlterOrderId() const;
    bool alterOrderIdIsSet() const;
    void unsetalterOrderId();
    void setAlterOrderId(const std::string& value);

    /// <summary>
    /// 读写内网地址。
    /// </summary>

    std::string getDataVip() const;
    bool dataVipIsSet() const;
    void unsetdataVip();
    void setDataVip(const std::string& value);

    /// <summary>
    /// 可读节点信息
    /// </summary>

    std::vector<ReadableNodeInfos>& getReadableNodeInfos();
    bool readableNodeInfosIsSet() const;
    void unsetreadableNodeInfos();
    void setReadableNodeInfos(const std::vector<ReadableNodeInfos>& value);

    /// <summary>
    /// 代理IP。
    /// </summary>

    std::vector<std::string>& getProxyIps();
    bool proxyIpsIsSet() const;
    void unsetproxyIps();
    void setProxyIps(const std::vector<std::string>& value);

    /// <summary>
    /// 读写内网地址IPV6。
    /// </summary>

    std::string getDataVipV6() const;
    bool dataVipV6IsSet() const;
    void unsetdataVipV6();
    void setDataVipV6(const std::string& value);

    /// <summary>
    /// 数据库访问端口。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 可用区信息。
    /// </summary>

    std::vector<HtapInstanceList_available_zones>& getAvailableZones();
    bool availableZonesIsSet() const;
    void unsetavailableZones();
    void setAvailableZones(const std::vector<HtapInstanceList_available_zones>& value);

    /// <summary>
    /// 实例动作。
    /// </summary>

    std::vector<QueryAction>& getCurrentActions();
    bool currentActionsIsSet() const;
    void unsetcurrentActions();
    void setCurrentActions(const std::vector<QueryAction>& value);

    /// <summary>
    /// 存储类型。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 服务器类型。
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// 企业项目ID。如果帐户开通企业项目服务则该参数必选，未开启该参数不可选。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 专属资源池ID，只有开通专属资源池后才支持此参数。
    /// </summary>

    std::string getDedicatedResourceId() const;
    bool dedicatedResourceIdIsSet() const;
    void unsetdedicatedResourceId();
    void setDedicatedResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HtapInstanceList_network getNetwork() const;
    bool networkIsSet() const;
    void unsetnetwork();
    void setNetwork(const HtapInstanceList_network& value);

    /// <summary>
    /// ClickHouse主节点ID。
    /// </summary>

    std::string getChMasterNodeId() const;
    bool chMasterNodeIdIsSet() const;
    void unsetchMasterNodeId();
    void setChMasterNodeId(const std::string& value);

    /// <summary>
    /// 节点个数。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    HtapInstanceList_instance_state instanceState_;
    bool instanceStateIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    bool isFrozen_;
    bool isFrozenIsSet_;
    std::string haMode_;
    bool haModeIsSet_;
    std::string payModel_;
    bool payModelIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string alterOrderId_;
    bool alterOrderIdIsSet_;
    std::string dataVip_;
    bool dataVipIsSet_;
    std::vector<ReadableNodeInfos> readableNodeInfos_;
    bool readableNodeInfosIsSet_;
    std::vector<std::string> proxyIps_;
    bool proxyIpsIsSet_;
    std::string dataVipV6_;
    bool dataVipV6IsSet_;
    int32_t port_;
    bool portIsSet_;
    std::vector<HtapInstanceList_available_zones> availableZones_;
    bool availableZonesIsSet_;
    std::vector<QueryAction> currentActions_;
    bool currentActionsIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string dedicatedResourceId_;
    bool dedicatedResourceIdIsSet_;
    HtapInstanceList_network network_;
    bool networkIsSet_;
    std::string chMasterNodeId_;
    bool chMasterNodeIdIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_instances_H_
