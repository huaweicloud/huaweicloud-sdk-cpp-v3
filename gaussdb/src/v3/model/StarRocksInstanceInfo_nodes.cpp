

#include "huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_nodes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksInstanceInfo_nodes::StarRocksInstanceInfo_nodes()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    volumeIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    mem_ = "";
    memIsSet_ = false;
    datastoreIsSet_ = false;
    actionsIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    frozenFlag_ = 0;
    frozenFlagIsSet_ = false;
    dbPort_ = 0;
    dbPortIsSet_ = false;
    payModel_ = "";
    payModelIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    trafficIp_ = "";
    trafficIpIsSet_ = false;
    trafficIpv6_ = "";
    trafficIpv6IsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    azDescription_ = "";
    azDescriptionIsSet_ = false;
    azType_ = "";
    azTypeIsSet_ = false;
    regionCode_ = "";
    regionCodeIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    iassFlavorRef_ = "";
    iassFlavorRefIsSet_ = false;
    maxConnections_ = "";
    maxConnectionsIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    needRestart_ = false;
    needRestartIsSet_ = false;
    sgId_ = "";
    sgIdIsSet_ = false;
    paramGroupIsSet_ = false;
}

StarRocksInstanceInfo_nodes::~StarRocksInstanceInfo_nodes() = default;

void StarRocksInstanceInfo_nodes::validate()
{
}

web::json::value StarRocksInstanceInfo_nodes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(frozenFlagIsSet_) {
        val[utility::conversions::to_string_t("frozen_flag")] = ModelBase::toJson(frozenFlag_);
    }
    if(dbPortIsSet_) {
        val[utility::conversions::to_string_t("db_port")] = ModelBase::toJson(dbPort_);
    }
    if(payModelIsSet_) {
        val[utility::conversions::to_string_t("pay_model")] = ModelBase::toJson(payModel_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(trafficIpIsSet_) {
        val[utility::conversions::to_string_t("traffic_ip")] = ModelBase::toJson(trafficIp_);
    }
    if(trafficIpv6IsSet_) {
        val[utility::conversions::to_string_t("traffic_ipv6")] = ModelBase::toJson(trafficIpv6_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(azDescriptionIsSet_) {
        val[utility::conversions::to_string_t("az_description")] = ModelBase::toJson(azDescription_);
    }
    if(azTypeIsSet_) {
        val[utility::conversions::to_string_t("az_type")] = ModelBase::toJson(azType_);
    }
    if(regionCodeIsSet_) {
        val[utility::conversions::to_string_t("region_code")] = ModelBase::toJson(regionCode_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(iassFlavorRefIsSet_) {
        val[utility::conversions::to_string_t("iass_flavor_ref")] = ModelBase::toJson(iassFlavorRef_);
    }
    if(maxConnectionsIsSet_) {
        val[utility::conversions::to_string_t("max_connections")] = ModelBase::toJson(maxConnections_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(needRestartIsSet_) {
        val[utility::conversions::to_string_t("need_restart")] = ModelBase::toJson(needRestart_);
    }
    if(sgIdIsSet_) {
        val[utility::conversions::to_string_t("sg_id")] = ModelBase::toJson(sgId_);
    }
    if(paramGroupIsSet_) {
        val[utility::conversions::to_string_t("param_group")] = ModelBase::toJson(paramGroup_);
    }

    return val;
}
bool StarRocksInstanceInfo_nodes::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            StarRocksInstanceInfo_volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            StarRocksInstanceInfo_datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryAction> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frozen_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("traffic_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_ipv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficIpv6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iass_flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iass_flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIassFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_connections"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConnections(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_restart"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedRestart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sg_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sg_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSgId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_group"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, ParamGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamGroup(refVal);
        }
    }
    return ok;
}


std::string StarRocksInstanceInfo_nodes::getId() const
{
    return id_;
}

void StarRocksInstanceInfo_nodes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::idIsSet() const
{
    return idIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetid()
{
    idIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getName() const
{
    return name_;
}

void StarRocksInstanceInfo_nodes::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::nameIsSet() const
{
    return nameIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetname()
{
    nameIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getType() const
{
    return type_;
}

void StarRocksInstanceInfo_nodes::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::typeIsSet() const
{
    return typeIsSet_;
}

void StarRocksInstanceInfo_nodes::unsettype()
{
    typeIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getStatus() const
{
    return status_;
}

void StarRocksInstanceInfo_nodes::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::statusIsSet() const
{
    return statusIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getPeriod() const
{
    return period_;
}

void StarRocksInstanceInfo_nodes::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::periodIsSet() const
{
    return periodIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetperiod()
{
    periodIsSet_ = false;
}

StarRocksInstanceInfo_volume StarRocksInstanceInfo_nodes::getVolume() const
{
    return volume_;
}

void StarRocksInstanceInfo_nodes::setVolume(const StarRocksInstanceInfo_volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::volumeIsSet() const
{
    return volumeIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getCpu() const
{
    return cpu_;
}

void StarRocksInstanceInfo_nodes::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::cpuIsSet() const
{
    return cpuIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getMem() const
{
    return mem_;
}

void StarRocksInstanceInfo_nodes::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::memIsSet() const
{
    return memIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetmem()
{
    memIsSet_ = false;
}

StarRocksInstanceInfo_datastore StarRocksInstanceInfo_nodes::getDatastore() const
{
    return datastore_;
}

void StarRocksInstanceInfo_nodes::setDatastore(const StarRocksInstanceInfo_datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::vector<QueryAction>& StarRocksInstanceInfo_nodes::getActions()
{
    return actions_;
}

void StarRocksInstanceInfo_nodes::setActions(const std::vector<QueryAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::actionsIsSet() const
{
    return actionsIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetactions()
{
    actionsIsSet_ = false;
}

int32_t StarRocksInstanceInfo_nodes::getPriority() const
{
    return priority_;
}

void StarRocksInstanceInfo_nodes::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::priorityIsSet() const
{
    return priorityIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetpriority()
{
    priorityIsSet_ = false;
}

int32_t StarRocksInstanceInfo_nodes::getFrozenFlag() const
{
    return frozenFlag_;
}

void StarRocksInstanceInfo_nodes::setFrozenFlag(int32_t value)
{
    frozenFlag_ = value;
    frozenFlagIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::frozenFlagIsSet() const
{
    return frozenFlagIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetfrozenFlag()
{
    frozenFlagIsSet_ = false;
}

int32_t StarRocksInstanceInfo_nodes::getDbPort() const
{
    return dbPort_;
}

void StarRocksInstanceInfo_nodes::setDbPort(int32_t value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getPayModel() const
{
    return payModel_;
}

void StarRocksInstanceInfo_nodes::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::payModelIsSet() const
{
    return payModelIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetpayModel()
{
    payModelIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getOrderId() const
{
    return orderId_;
}

void StarRocksInstanceInfo_nodes::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getTrafficIp() const
{
    return trafficIp_;
}

void StarRocksInstanceInfo_nodes::setTrafficIp(const std::string& value)
{
    trafficIp_ = value;
    trafficIpIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::trafficIpIsSet() const
{
    return trafficIpIsSet_;
}

void StarRocksInstanceInfo_nodes::unsettrafficIp()
{
    trafficIpIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getTrafficIpv6() const
{
    return trafficIpv6_;
}

void StarRocksInstanceInfo_nodes::setTrafficIpv6(const std::string& value)
{
    trafficIpv6_ = value;
    trafficIpv6IsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::trafficIpv6IsSet() const
{
    return trafficIpv6IsSet_;
}

void StarRocksInstanceInfo_nodes::unsettrafficIpv6()
{
    trafficIpv6IsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getAzCode() const
{
    return azCode_;
}

void StarRocksInstanceInfo_nodes::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getAzDescription() const
{
    return azDescription_;
}

void StarRocksInstanceInfo_nodes::setAzDescription(const std::string& value)
{
    azDescription_ = value;
    azDescriptionIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::azDescriptionIsSet() const
{
    return azDescriptionIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetazDescription()
{
    azDescriptionIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getAzType() const
{
    return azType_;
}

void StarRocksInstanceInfo_nodes::setAzType(const std::string& value)
{
    azType_ = value;
    azTypeIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::azTypeIsSet() const
{
    return azTypeIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetazType()
{
    azTypeIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getRegionCode() const
{
    return regionCode_;
}

void StarRocksInstanceInfo_nodes::setRegionCode(const std::string& value)
{
    regionCode_ = value;
    regionCodeIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::regionCodeIsSet() const
{
    return regionCodeIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetregionCode()
{
    regionCodeIsSet_ = false;
}

int64_t StarRocksInstanceInfo_nodes::getCreateAt() const
{
    return createAt_;
}

void StarRocksInstanceInfo_nodes::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::createAtIsSet() const
{
    return createAtIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t StarRocksInstanceInfo_nodes::getUpdateAt() const
{
    return updateAt_;
}

void StarRocksInstanceInfo_nodes::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getFlavorId() const
{
    return flavorId_;
}

void StarRocksInstanceInfo_nodes::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getFlavorRef() const
{
    return flavorRef_;
}

void StarRocksInstanceInfo_nodes::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getIassFlavorRef() const
{
    return iassFlavorRef_;
}

void StarRocksInstanceInfo_nodes::setIassFlavorRef(const std::string& value)
{
    iassFlavorRef_ = value;
    iassFlavorRefIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::iassFlavorRefIsSet() const
{
    return iassFlavorRefIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetiassFlavorRef()
{
    iassFlavorRefIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getMaxConnections() const
{
    return maxConnections_;
}

void StarRocksInstanceInfo_nodes::setMaxConnections(const std::string& value)
{
    maxConnections_ = value;
    maxConnectionsIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::maxConnectionsIsSet() const
{
    return maxConnectionsIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetmaxConnections()
{
    maxConnectionsIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getVpcId() const
{
    return vpcId_;
}

void StarRocksInstanceInfo_nodes::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getSubnetId() const
{
    return subnetId_;
}

void StarRocksInstanceInfo_nodes::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

bool StarRocksInstanceInfo_nodes::isNeedRestart() const
{
    return needRestart_;
}

void StarRocksInstanceInfo_nodes::setNeedRestart(bool value)
{
    needRestart_ = value;
    needRestartIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::needRestartIsSet() const
{
    return needRestartIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetneedRestart()
{
    needRestartIsSet_ = false;
}

std::string StarRocksInstanceInfo_nodes::getSgId() const
{
    return sgId_;
}

void StarRocksInstanceInfo_nodes::setSgId(const std::string& value)
{
    sgId_ = value;
    sgIdIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::sgIdIsSet() const
{
    return sgIdIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetsgId()
{
    sgIdIsSet_ = false;
}

std::map<std::string, ParamGroup>& StarRocksInstanceInfo_nodes::getParamGroup()
{
    return paramGroup_;
}

void StarRocksInstanceInfo_nodes::setParamGroup(const std::map<std::string, ParamGroup>& value)
{
    paramGroup_ = value;
    paramGroupIsSet_ = true;
}

bool StarRocksInstanceInfo_nodes::paramGroupIsSet() const
{
    return paramGroupIsSet_;
}

void StarRocksInstanceInfo_nodes::unsetparamGroup()
{
    paramGroupIsSet_ = false;
}

}
}
}
}
}


