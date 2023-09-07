

#include "huaweicloud/rds/v3/model/ResourceMonitoringInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ResourceMonitoringInfo::ResourceMonitoringInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instanceStateIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    mem_ = "";
    memIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    cpuUsage_ = 0.0;
    cpuUsageIsSet_ = false;
    memoryUsage_ = 0.0;
    memoryUsageIsSet_ = false;
    diskUsage_ = 0.0;
    diskUsageIsSet_ = false;
    tps_ = 0.0;
    tpsIsSet_ = false;
    qps_ = 0.0;
    qpsIsSet_ = false;
    iops_ = 0.0;
    iopsIsSet_ = false;
    activeConnections_ = 0;
    activeConnectionsIsSet_ = false;
    slowSql_ = 0.0;
    slowSqlIsSet_ = false;
    readonlyInstanceResourceMonitoringInfoIsSet_ = false;
}

ResourceMonitoringInfo::~ResourceMonitoringInfo() = default;

void ResourceMonitoringInfo::validate()
{
}

web::json::value ResourceMonitoringInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(instanceStateIsSet_) {
        val[utility::conversions::to_string_t("instance_state")] = ModelBase::toJson(instanceState_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(cpuUsageIsSet_) {
        val[utility::conversions::to_string_t("cpu_usage")] = ModelBase::toJson(cpuUsage_);
    }
    if(memoryUsageIsSet_) {
        val[utility::conversions::to_string_t("memory_usage")] = ModelBase::toJson(memoryUsage_);
    }
    if(diskUsageIsSet_) {
        val[utility::conversions::to_string_t("disk_usage")] = ModelBase::toJson(diskUsage_);
    }
    if(tpsIsSet_) {
        val[utility::conversions::to_string_t("tps")] = ModelBase::toJson(tps_);
    }
    if(qpsIsSet_) {
        val[utility::conversions::to_string_t("qps")] = ModelBase::toJson(qps_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(activeConnectionsIsSet_) {
        val[utility::conversions::to_string_t("active_connections")] = ModelBase::toJson(activeConnections_);
    }
    if(slowSqlIsSet_) {
        val[utility::conversions::to_string_t("slow_sql")] = ModelBase::toJson(slowSql_);
    }
    if(readonlyInstanceResourceMonitoringInfoIsSet_) {
        val[utility::conversions::to_string_t("readonly_instance_resource_monitoring_info")] = ModelBase::toJson(*readonlyInstanceResourceMonitoringInfo_);
    }

    return val;
}

bool ResourceMonitoringInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_state"));
        if(!fieldValue.is_null())
        {
            InstanceState refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cpu_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_usage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_usage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemoryUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_usage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tps"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qps"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iops"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIops(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_connections"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveConnections(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_sql"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_instance_resource_monitoring_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_instance_resource_monitoring_info"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceMonitoringInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyInstanceResourceMonitoringInfo(refVal);
        }
    }
    return ok;
}

std::string ResourceMonitoringInfo::getId() const
{
    return id_;
}

void ResourceMonitoringInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourceMonitoringInfo::idIsSet() const
{
    return idIsSet_;
}

void ResourceMonitoringInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ResourceMonitoringInfo::getName() const
{
    return name_;
}

void ResourceMonitoringInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResourceMonitoringInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ResourceMonitoringInfo::unsetname()
{
    nameIsSet_ = false;
}

InstanceState ResourceMonitoringInfo::getInstanceState() const
{
    return instanceState_;
}

void ResourceMonitoringInfo::setInstanceState(const InstanceState& value)
{
    instanceState_ = value;
    instanceStateIsSet_ = true;
}

bool ResourceMonitoringInfo::instanceStateIsSet() const
{
    return instanceStateIsSet_;
}

void ResourceMonitoringInfo::unsetinstanceState()
{
    instanceStateIsSet_ = false;
}

std::string ResourceMonitoringInfo::getType() const
{
    return type_;
}

void ResourceMonitoringInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourceMonitoringInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ResourceMonitoringInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string ResourceMonitoringInfo::getCpu() const
{
    return cpu_;
}

void ResourceMonitoringInfo::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ResourceMonitoringInfo::cpuIsSet() const
{
    return cpuIsSet_;
}

void ResourceMonitoringInfo::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ResourceMonitoringInfo::getMem() const
{
    return mem_;
}

void ResourceMonitoringInfo::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool ResourceMonitoringInfo::memIsSet() const
{
    return memIsSet_;
}

void ResourceMonitoringInfo::unsetmem()
{
    memIsSet_ = false;
}

std::string ResourceMonitoringInfo::getEngineName() const
{
    return engineName_;
}

void ResourceMonitoringInfo::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ResourceMonitoringInfo::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ResourceMonitoringInfo::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ResourceMonitoringInfo::getEngineVersion() const
{
    return engineVersion_;
}

void ResourceMonitoringInfo::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool ResourceMonitoringInfo::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void ResourceMonitoringInfo::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

double ResourceMonitoringInfo::getCpuUsage() const
{
    return cpuUsage_;
}

void ResourceMonitoringInfo::setCpuUsage(double value)
{
    cpuUsage_ = value;
    cpuUsageIsSet_ = true;
}

bool ResourceMonitoringInfo::cpuUsageIsSet() const
{
    return cpuUsageIsSet_;
}

void ResourceMonitoringInfo::unsetcpuUsage()
{
    cpuUsageIsSet_ = false;
}

double ResourceMonitoringInfo::getMemoryUsage() const
{
    return memoryUsage_;
}

void ResourceMonitoringInfo::setMemoryUsage(double value)
{
    memoryUsage_ = value;
    memoryUsageIsSet_ = true;
}

bool ResourceMonitoringInfo::memoryUsageIsSet() const
{
    return memoryUsageIsSet_;
}

void ResourceMonitoringInfo::unsetmemoryUsage()
{
    memoryUsageIsSet_ = false;
}

double ResourceMonitoringInfo::getDiskUsage() const
{
    return diskUsage_;
}

void ResourceMonitoringInfo::setDiskUsage(double value)
{
    diskUsage_ = value;
    diskUsageIsSet_ = true;
}

bool ResourceMonitoringInfo::diskUsageIsSet() const
{
    return diskUsageIsSet_;
}

void ResourceMonitoringInfo::unsetdiskUsage()
{
    diskUsageIsSet_ = false;
}

double ResourceMonitoringInfo::getTps() const
{
    return tps_;
}

void ResourceMonitoringInfo::setTps(double value)
{
    tps_ = value;
    tpsIsSet_ = true;
}

bool ResourceMonitoringInfo::tpsIsSet() const
{
    return tpsIsSet_;
}

void ResourceMonitoringInfo::unsettps()
{
    tpsIsSet_ = false;
}

double ResourceMonitoringInfo::getQps() const
{
    return qps_;
}

void ResourceMonitoringInfo::setQps(double value)
{
    qps_ = value;
    qpsIsSet_ = true;
}

bool ResourceMonitoringInfo::qpsIsSet() const
{
    return qpsIsSet_;
}

void ResourceMonitoringInfo::unsetqps()
{
    qpsIsSet_ = false;
}

double ResourceMonitoringInfo::getIops() const
{
    return iops_;
}

void ResourceMonitoringInfo::setIops(double value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool ResourceMonitoringInfo::iopsIsSet() const
{
    return iopsIsSet_;
}

void ResourceMonitoringInfo::unsetiops()
{
    iopsIsSet_ = false;
}

int32_t ResourceMonitoringInfo::getActiveConnections() const
{
    return activeConnections_;
}

void ResourceMonitoringInfo::setActiveConnections(int32_t value)
{
    activeConnections_ = value;
    activeConnectionsIsSet_ = true;
}

bool ResourceMonitoringInfo::activeConnectionsIsSet() const
{
    return activeConnectionsIsSet_;
}

void ResourceMonitoringInfo::unsetactiveConnections()
{
    activeConnectionsIsSet_ = false;
}

double ResourceMonitoringInfo::getSlowSql() const
{
    return slowSql_;
}

void ResourceMonitoringInfo::setSlowSql(double value)
{
    slowSql_ = value;
    slowSqlIsSet_ = true;
}

bool ResourceMonitoringInfo::slowSqlIsSet() const
{
    return slowSqlIsSet_;
}

void ResourceMonitoringInfo::unsetslowSql()
{
    slowSqlIsSet_ = false;
}

std::vector<ResourceMonitoringInfo>& ResourceMonitoringInfo::getReadonlyInstanceResourceMonitoringInfo()
{
    return *readonlyInstanceResourceMonitoringInfo_;
}

void ResourceMonitoringInfo::setReadonlyInstanceResourceMonitoringInfo(const std::vector<ResourceMonitoringInfo>& value)
{
    *readonlyInstanceResourceMonitoringInfo_ = value;
    readonlyInstanceResourceMonitoringInfoIsSet_ = true;
}

bool ResourceMonitoringInfo::readonlyInstanceResourceMonitoringInfoIsSet() const
{
    return readonlyInstanceResourceMonitoringInfoIsSet_;
}

void ResourceMonitoringInfo::unsetreadonlyInstanceResourceMonitoringInfo()
{
    readonlyInstanceResourceMonitoringInfoIsSet_ = false;
}

}
}
}
}
}


