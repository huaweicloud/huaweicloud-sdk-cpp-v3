

#include "huaweicloud/gaussdb/v3/model/ClickHouseNodeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClickHouseNodeInfo::ClickHouseNodeInfo()
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
    trafficVip_ = "";
    trafficVipIsSet_ = false;
    trafficVipv6_ = "";
    trafficVipv6IsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    azDescription_ = "";
    azDescriptionIsSet_ = false;
    azType_ = "";
    azTypeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
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
}

ClickHouseNodeInfo::~ClickHouseNodeInfo() = default;

void ClickHouseNodeInfo::validate()
{
}

web::json::value ClickHouseNodeInfo::toJson() const
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
    if(trafficVipIsSet_) {
        val[utility::conversions::to_string_t("traffic_vip")] = ModelBase::toJson(trafficVip_);
    }
    if(trafficVipv6IsSet_) {
        val[utility::conversions::to_string_t("traffic_vipv6")] = ModelBase::toJson(trafficVipv6_);
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
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
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

    return val;
}
bool ClickHouseNodeInfo::fromJson(const web::json::value& val)
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
            ClickHouseNodeInfo_volume refVal;
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
            ClickHouseNodeInfo_datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("traffic_vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficVip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_vipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_vipv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficVipv6(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    return ok;
}


std::string ClickHouseNodeInfo::getId() const
{
    return id_;
}

void ClickHouseNodeInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ClickHouseNodeInfo::idIsSet() const
{
    return idIsSet_;
}

void ClickHouseNodeInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ClickHouseNodeInfo::getName() const
{
    return name_;
}

void ClickHouseNodeInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ClickHouseNodeInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ClickHouseNodeInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ClickHouseNodeInfo::getType() const
{
    return type_;
}

void ClickHouseNodeInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClickHouseNodeInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ClickHouseNodeInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string ClickHouseNodeInfo::getStatus() const
{
    return status_;
}

void ClickHouseNodeInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ClickHouseNodeInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ClickHouseNodeInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ClickHouseNodeInfo::getPeriod() const
{
    return period_;
}

void ClickHouseNodeInfo::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ClickHouseNodeInfo::periodIsSet() const
{
    return periodIsSet_;
}

void ClickHouseNodeInfo::unsetperiod()
{
    periodIsSet_ = false;
}

ClickHouseNodeInfo_volume ClickHouseNodeInfo::getVolume() const
{
    return volume_;
}

void ClickHouseNodeInfo::setVolume(const ClickHouseNodeInfo_volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool ClickHouseNodeInfo::volumeIsSet() const
{
    return volumeIsSet_;
}

void ClickHouseNodeInfo::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string ClickHouseNodeInfo::getCpu() const
{
    return cpu_;
}

void ClickHouseNodeInfo::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ClickHouseNodeInfo::cpuIsSet() const
{
    return cpuIsSet_;
}

void ClickHouseNodeInfo::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ClickHouseNodeInfo::getMem() const
{
    return mem_;
}

void ClickHouseNodeInfo::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool ClickHouseNodeInfo::memIsSet() const
{
    return memIsSet_;
}

void ClickHouseNodeInfo::unsetmem()
{
    memIsSet_ = false;
}

ClickHouseNodeInfo_datastore ClickHouseNodeInfo::getDatastore() const
{
    return datastore_;
}

void ClickHouseNodeInfo::setDatastore(const ClickHouseNodeInfo_datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ClickHouseNodeInfo::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ClickHouseNodeInfo::unsetdatastore()
{
    datastoreIsSet_ = false;
}

int32_t ClickHouseNodeInfo::getPriority() const
{
    return priority_;
}

void ClickHouseNodeInfo::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool ClickHouseNodeInfo::priorityIsSet() const
{
    return priorityIsSet_;
}

void ClickHouseNodeInfo::unsetpriority()
{
    priorityIsSet_ = false;
}

int32_t ClickHouseNodeInfo::getFrozenFlag() const
{
    return frozenFlag_;
}

void ClickHouseNodeInfo::setFrozenFlag(int32_t value)
{
    frozenFlag_ = value;
    frozenFlagIsSet_ = true;
}

bool ClickHouseNodeInfo::frozenFlagIsSet() const
{
    return frozenFlagIsSet_;
}

void ClickHouseNodeInfo::unsetfrozenFlag()
{
    frozenFlagIsSet_ = false;
}

int32_t ClickHouseNodeInfo::getDbPort() const
{
    return dbPort_;
}

void ClickHouseNodeInfo::setDbPort(int32_t value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool ClickHouseNodeInfo::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void ClickHouseNodeInfo::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string ClickHouseNodeInfo::getPayModel() const
{
    return payModel_;
}

void ClickHouseNodeInfo::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool ClickHouseNodeInfo::payModelIsSet() const
{
    return payModelIsSet_;
}

void ClickHouseNodeInfo::unsetpayModel()
{
    payModelIsSet_ = false;
}

std::string ClickHouseNodeInfo::getOrderId() const
{
    return orderId_;
}

void ClickHouseNodeInfo::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ClickHouseNodeInfo::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ClickHouseNodeInfo::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ClickHouseNodeInfo::getTrafficIp() const
{
    return trafficIp_;
}

void ClickHouseNodeInfo::setTrafficIp(const std::string& value)
{
    trafficIp_ = value;
    trafficIpIsSet_ = true;
}

bool ClickHouseNodeInfo::trafficIpIsSet() const
{
    return trafficIpIsSet_;
}

void ClickHouseNodeInfo::unsettrafficIp()
{
    trafficIpIsSet_ = false;
}

std::string ClickHouseNodeInfo::getTrafficIpv6() const
{
    return trafficIpv6_;
}

void ClickHouseNodeInfo::setTrafficIpv6(const std::string& value)
{
    trafficIpv6_ = value;
    trafficIpv6IsSet_ = true;
}

bool ClickHouseNodeInfo::trafficIpv6IsSet() const
{
    return trafficIpv6IsSet_;
}

void ClickHouseNodeInfo::unsettrafficIpv6()
{
    trafficIpv6IsSet_ = false;
}

std::string ClickHouseNodeInfo::getTrafficVip() const
{
    return trafficVip_;
}

void ClickHouseNodeInfo::setTrafficVip(const std::string& value)
{
    trafficVip_ = value;
    trafficVipIsSet_ = true;
}

bool ClickHouseNodeInfo::trafficVipIsSet() const
{
    return trafficVipIsSet_;
}

void ClickHouseNodeInfo::unsettrafficVip()
{
    trafficVipIsSet_ = false;
}

std::string ClickHouseNodeInfo::getTrafficVipv6() const
{
    return trafficVipv6_;
}

void ClickHouseNodeInfo::setTrafficVipv6(const std::string& value)
{
    trafficVipv6_ = value;
    trafficVipv6IsSet_ = true;
}

bool ClickHouseNodeInfo::trafficVipv6IsSet() const
{
    return trafficVipv6IsSet_;
}

void ClickHouseNodeInfo::unsettrafficVipv6()
{
    trafficVipv6IsSet_ = false;
}

std::string ClickHouseNodeInfo::getAzCode() const
{
    return azCode_;
}

void ClickHouseNodeInfo::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool ClickHouseNodeInfo::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void ClickHouseNodeInfo::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string ClickHouseNodeInfo::getAzDescription() const
{
    return azDescription_;
}

void ClickHouseNodeInfo::setAzDescription(const std::string& value)
{
    azDescription_ = value;
    azDescriptionIsSet_ = true;
}

bool ClickHouseNodeInfo::azDescriptionIsSet() const
{
    return azDescriptionIsSet_;
}

void ClickHouseNodeInfo::unsetazDescription()
{
    azDescriptionIsSet_ = false;
}

std::string ClickHouseNodeInfo::getAzType() const
{
    return azType_;
}

void ClickHouseNodeInfo::setAzType(const std::string& value)
{
    azType_ = value;
    azTypeIsSet_ = true;
}

bool ClickHouseNodeInfo::azTypeIsSet() const
{
    return azTypeIsSet_;
}

void ClickHouseNodeInfo::unsetazType()
{
    azTypeIsSet_ = false;
}

std::string ClickHouseNodeInfo::getRegion() const
{
    return region_;
}

void ClickHouseNodeInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ClickHouseNodeInfo::regionIsSet() const
{
    return regionIsSet_;
}

void ClickHouseNodeInfo::unsetregion()
{
    regionIsSet_ = false;
}

int64_t ClickHouseNodeInfo::getCreateAt() const
{
    return createAt_;
}

void ClickHouseNodeInfo::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ClickHouseNodeInfo::createAtIsSet() const
{
    return createAtIsSet_;
}

void ClickHouseNodeInfo::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t ClickHouseNodeInfo::getUpdateAt() const
{
    return updateAt_;
}

void ClickHouseNodeInfo::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ClickHouseNodeInfo::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ClickHouseNodeInfo::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ClickHouseNodeInfo::getFlavorId() const
{
    return flavorId_;
}

void ClickHouseNodeInfo::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ClickHouseNodeInfo::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ClickHouseNodeInfo::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string ClickHouseNodeInfo::getFlavorRef() const
{
    return flavorRef_;
}

void ClickHouseNodeInfo::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ClickHouseNodeInfo::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ClickHouseNodeInfo::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string ClickHouseNodeInfo::getIassFlavorRef() const
{
    return iassFlavorRef_;
}

void ClickHouseNodeInfo::setIassFlavorRef(const std::string& value)
{
    iassFlavorRef_ = value;
    iassFlavorRefIsSet_ = true;
}

bool ClickHouseNodeInfo::iassFlavorRefIsSet() const
{
    return iassFlavorRefIsSet_;
}

void ClickHouseNodeInfo::unsetiassFlavorRef()
{
    iassFlavorRefIsSet_ = false;
}

std::string ClickHouseNodeInfo::getMaxConnections() const
{
    return maxConnections_;
}

void ClickHouseNodeInfo::setMaxConnections(const std::string& value)
{
    maxConnections_ = value;
    maxConnectionsIsSet_ = true;
}

bool ClickHouseNodeInfo::maxConnectionsIsSet() const
{
    return maxConnectionsIsSet_;
}

void ClickHouseNodeInfo::unsetmaxConnections()
{
    maxConnectionsIsSet_ = false;
}

std::string ClickHouseNodeInfo::getVpcId() const
{
    return vpcId_;
}

void ClickHouseNodeInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ClickHouseNodeInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ClickHouseNodeInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ClickHouseNodeInfo::getSubnetId() const
{
    return subnetId_;
}

void ClickHouseNodeInfo::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ClickHouseNodeInfo::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ClickHouseNodeInfo::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

bool ClickHouseNodeInfo::isNeedRestart() const
{
    return needRestart_;
}

void ClickHouseNodeInfo::setNeedRestart(bool value)
{
    needRestart_ = value;
    needRestartIsSet_ = true;
}

bool ClickHouseNodeInfo::needRestartIsSet() const
{
    return needRestartIsSet_;
}

void ClickHouseNodeInfo::unsetneedRestart()
{
    needRestartIsSet_ = false;
}

std::string ClickHouseNodeInfo::getSgId() const
{
    return sgId_;
}

void ClickHouseNodeInfo::setSgId(const std::string& value)
{
    sgId_ = value;
    sgIdIsSet_ = true;
}

bool ClickHouseNodeInfo::sgIdIsSet() const
{
    return sgIdIsSet_;
}

void ClickHouseNodeInfo::unsetsgId()
{
    sgIdIsSet_ = false;
}

}
}
}
}
}


