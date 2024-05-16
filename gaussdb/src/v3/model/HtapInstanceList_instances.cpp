

#include "huaweicloud/gaussdb/v3/model/HtapInstanceList_instances.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapInstanceList_instances::HtapInstanceList_instances()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    instanceStateIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    isFrozen_ = false;
    isFrozenIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
    payModel_ = "";
    payModelIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    alterOrderId_ = "";
    alterOrderIdIsSet_ = false;
    dataVip_ = "";
    dataVipIsSet_ = false;
    readableNodeInfosIsSet_ = false;
    proxyIpsIsSet_ = false;
    dataVipV6_ = "";
    dataVipV6IsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    availableZonesIsSet_ = false;
    currentActionsIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    dedicatedResourceId_ = "";
    dedicatedResourceIdIsSet_ = false;
    networkIsSet_ = false;
    chMasterNodeId_ = "";
    chMasterNodeIdIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
}

HtapInstanceList_instances::~HtapInstanceList_instances() = default;

void HtapInstanceList_instances::validate()
{
}

web::json::value HtapInstanceList_instances::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(instanceStateIsSet_) {
        val[utility::conversions::to_string_t("instance_state")] = ModelBase::toJson(instanceState_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(isFrozenIsSet_) {
        val[utility::conversions::to_string_t("is_frozen")] = ModelBase::toJson(isFrozen_);
    }
    if(haModeIsSet_) {
        val[utility::conversions::to_string_t("ha_mode")] = ModelBase::toJson(haMode_);
    }
    if(payModelIsSet_) {
        val[utility::conversions::to_string_t("pay_model")] = ModelBase::toJson(payModel_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(alterOrderIdIsSet_) {
        val[utility::conversions::to_string_t("alter_order_id")] = ModelBase::toJson(alterOrderId_);
    }
    if(dataVipIsSet_) {
        val[utility::conversions::to_string_t("data_vip")] = ModelBase::toJson(dataVip_);
    }
    if(readableNodeInfosIsSet_) {
        val[utility::conversions::to_string_t("readable_node_infos")] = ModelBase::toJson(readableNodeInfos_);
    }
    if(proxyIpsIsSet_) {
        val[utility::conversions::to_string_t("proxy_ips")] = ModelBase::toJson(proxyIps_);
    }
    if(dataVipV6IsSet_) {
        val[utility::conversions::to_string_t("data_vip_v6")] = ModelBase::toJson(dataVipV6_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(availableZonesIsSet_) {
        val[utility::conversions::to_string_t("available_zones")] = ModelBase::toJson(availableZones_);
    }
    if(currentActionsIsSet_) {
        val[utility::conversions::to_string_t("current_actions")] = ModelBase::toJson(currentActions_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(dedicatedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_resource_id")] = ModelBase::toJson(dedicatedResourceId_);
    }
    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }
    if(chMasterNodeIdIsSet_) {
        val[utility::conversions::to_string_t("ch_master_node_id")] = ModelBase::toJson(chMasterNodeId_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }

    return val;
}
bool HtapInstanceList_instances::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_state"));
        if(!fieldValue.is_null())
        {
            HtapInstanceList_instance_state refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_frozen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_frozen"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFrozen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pay_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pay_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alter_order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alter_order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlterOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readable_node_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readable_node_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ReadableNodeInfos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadableNodeInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_vip_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip_v6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVipV6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("available_zones"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available_zones"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapInstanceList_available_zones> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableZones(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_actions"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryAction> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            HtapInstanceList_network refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ch_master_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ch_master_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChMasterNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    return ok;
}


std::string HtapInstanceList_instances::getId() const
{
    return id_;
}

void HtapInstanceList_instances::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HtapInstanceList_instances::idIsSet() const
{
    return idIsSet_;
}

void HtapInstanceList_instances::unsetid()
{
    idIsSet_ = false;
}

std::string HtapInstanceList_instances::getName() const
{
    return name_;
}

void HtapInstanceList_instances::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HtapInstanceList_instances::nameIsSet() const
{
    return nameIsSet_;
}

void HtapInstanceList_instances::unsetname()
{
    nameIsSet_ = false;
}

std::string HtapInstanceList_instances::getEngineName() const
{
    return engineName_;
}

void HtapInstanceList_instances::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool HtapInstanceList_instances::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void HtapInstanceList_instances::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string HtapInstanceList_instances::getEngineVersion() const
{
    return engineVersion_;
}

void HtapInstanceList_instances::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool HtapInstanceList_instances::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void HtapInstanceList_instances::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string HtapInstanceList_instances::getProjectId() const
{
    return projectId_;
}

void HtapInstanceList_instances::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool HtapInstanceList_instances::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void HtapInstanceList_instances::unsetprojectId()
{
    projectIdIsSet_ = false;
}

HtapInstanceList_instance_state HtapInstanceList_instances::getInstanceState() const
{
    return instanceState_;
}

void HtapInstanceList_instances::setInstanceState(const HtapInstanceList_instance_state& value)
{
    instanceState_ = value;
    instanceStateIsSet_ = true;
}

bool HtapInstanceList_instances::instanceStateIsSet() const
{
    return instanceStateIsSet_;
}

void HtapInstanceList_instances::unsetinstanceState()
{
    instanceStateIsSet_ = false;
}

int64_t HtapInstanceList_instances::getCreateAt() const
{
    return createAt_;
}

void HtapInstanceList_instances::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool HtapInstanceList_instances::createAtIsSet() const
{
    return createAtIsSet_;
}

void HtapInstanceList_instances::unsetcreateAt()
{
    createAtIsSet_ = false;
}

bool HtapInstanceList_instances::isIsFrozen() const
{
    return isFrozen_;
}

void HtapInstanceList_instances::setIsFrozen(bool value)
{
    isFrozen_ = value;
    isFrozenIsSet_ = true;
}

bool HtapInstanceList_instances::isFrozenIsSet() const
{
    return isFrozenIsSet_;
}

void HtapInstanceList_instances::unsetisFrozen()
{
    isFrozenIsSet_ = false;
}

std::string HtapInstanceList_instances::getHaMode() const
{
    return haMode_;
}

void HtapInstanceList_instances::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool HtapInstanceList_instances::haModeIsSet() const
{
    return haModeIsSet_;
}

void HtapInstanceList_instances::unsethaMode()
{
    haModeIsSet_ = false;
}

std::string HtapInstanceList_instances::getPayModel() const
{
    return payModel_;
}

void HtapInstanceList_instances::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool HtapInstanceList_instances::payModelIsSet() const
{
    return payModelIsSet_;
}

void HtapInstanceList_instances::unsetpayModel()
{
    payModelIsSet_ = false;
}

std::string HtapInstanceList_instances::getOrderId() const
{
    return orderId_;
}

void HtapInstanceList_instances::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool HtapInstanceList_instances::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void HtapInstanceList_instances::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string HtapInstanceList_instances::getAlterOrderId() const
{
    return alterOrderId_;
}

void HtapInstanceList_instances::setAlterOrderId(const std::string& value)
{
    alterOrderId_ = value;
    alterOrderIdIsSet_ = true;
}

bool HtapInstanceList_instances::alterOrderIdIsSet() const
{
    return alterOrderIdIsSet_;
}

void HtapInstanceList_instances::unsetalterOrderId()
{
    alterOrderIdIsSet_ = false;
}

std::string HtapInstanceList_instances::getDataVip() const
{
    return dataVip_;
}

void HtapInstanceList_instances::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool HtapInstanceList_instances::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void HtapInstanceList_instances::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::vector<ReadableNodeInfos>& HtapInstanceList_instances::getReadableNodeInfos()
{
    return readableNodeInfos_;
}

void HtapInstanceList_instances::setReadableNodeInfos(const std::vector<ReadableNodeInfos>& value)
{
    readableNodeInfos_ = value;
    readableNodeInfosIsSet_ = true;
}

bool HtapInstanceList_instances::readableNodeInfosIsSet() const
{
    return readableNodeInfosIsSet_;
}

void HtapInstanceList_instances::unsetreadableNodeInfos()
{
    readableNodeInfosIsSet_ = false;
}

std::vector<std::string>& HtapInstanceList_instances::getProxyIps()
{
    return proxyIps_;
}

void HtapInstanceList_instances::setProxyIps(const std::vector<std::string>& value)
{
    proxyIps_ = value;
    proxyIpsIsSet_ = true;
}

bool HtapInstanceList_instances::proxyIpsIsSet() const
{
    return proxyIpsIsSet_;
}

void HtapInstanceList_instances::unsetproxyIps()
{
    proxyIpsIsSet_ = false;
}

std::string HtapInstanceList_instances::getDataVipV6() const
{
    return dataVipV6_;
}

void HtapInstanceList_instances::setDataVipV6(const std::string& value)
{
    dataVipV6_ = value;
    dataVipV6IsSet_ = true;
}

bool HtapInstanceList_instances::dataVipV6IsSet() const
{
    return dataVipV6IsSet_;
}

void HtapInstanceList_instances::unsetdataVipV6()
{
    dataVipV6IsSet_ = false;
}

int32_t HtapInstanceList_instances::getPort() const
{
    return port_;
}

void HtapInstanceList_instances::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool HtapInstanceList_instances::portIsSet() const
{
    return portIsSet_;
}

void HtapInstanceList_instances::unsetport()
{
    portIsSet_ = false;
}

std::vector<HtapInstanceList_available_zones>& HtapInstanceList_instances::getAvailableZones()
{
    return availableZones_;
}

void HtapInstanceList_instances::setAvailableZones(const std::vector<HtapInstanceList_available_zones>& value)
{
    availableZones_ = value;
    availableZonesIsSet_ = true;
}

bool HtapInstanceList_instances::availableZonesIsSet() const
{
    return availableZonesIsSet_;
}

void HtapInstanceList_instances::unsetavailableZones()
{
    availableZonesIsSet_ = false;
}

std::vector<QueryAction>& HtapInstanceList_instances::getCurrentActions()
{
    return currentActions_;
}

void HtapInstanceList_instances::setCurrentActions(const std::vector<QueryAction>& value)
{
    currentActions_ = value;
    currentActionsIsSet_ = true;
}

bool HtapInstanceList_instances::currentActionsIsSet() const
{
    return currentActionsIsSet_;
}

void HtapInstanceList_instances::unsetcurrentActions()
{
    currentActionsIsSet_ = false;
}

std::string HtapInstanceList_instances::getVolumeType() const
{
    return volumeType_;
}

void HtapInstanceList_instances::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool HtapInstanceList_instances::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void HtapInstanceList_instances::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string HtapInstanceList_instances::getServerType() const
{
    return serverType_;
}

void HtapInstanceList_instances::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool HtapInstanceList_instances::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void HtapInstanceList_instances::unsetserverType()
{
    serverTypeIsSet_ = false;
}

std::string HtapInstanceList_instances::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void HtapInstanceList_instances::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool HtapInstanceList_instances::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void HtapInstanceList_instances::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string HtapInstanceList_instances::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void HtapInstanceList_instances::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool HtapInstanceList_instances::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void HtapInstanceList_instances::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

HtapInstanceList_network HtapInstanceList_instances::getNetwork() const
{
    return network_;
}

void HtapInstanceList_instances::setNetwork(const HtapInstanceList_network& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool HtapInstanceList_instances::networkIsSet() const
{
    return networkIsSet_;
}

void HtapInstanceList_instances::unsetnetwork()
{
    networkIsSet_ = false;
}

std::string HtapInstanceList_instances::getChMasterNodeId() const
{
    return chMasterNodeId_;
}

void HtapInstanceList_instances::setChMasterNodeId(const std::string& value)
{
    chMasterNodeId_ = value;
    chMasterNodeIdIsSet_ = true;
}

bool HtapInstanceList_instances::chMasterNodeIdIsSet() const
{
    return chMasterNodeIdIsSet_;
}

void HtapInstanceList_instances::unsetchMasterNodeId()
{
    chMasterNodeIdIsSet_ = false;
}

int32_t HtapInstanceList_instances::getNodeNum() const
{
    return nodeNum_;
}

void HtapInstanceList_instances::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool HtapInstanceList_instances::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void HtapInstanceList_instances::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

}
}
}
}
}


