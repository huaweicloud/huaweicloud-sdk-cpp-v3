

#include "huaweicloud/gaussdbforopengauss/v3/model/InstancesMetricResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstancesMetricResult::InstancesMetricResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    solution_ = "";
    solutionIsSet_ = false;
    diskUsedSize_ = "";
    diskUsedSizeIsSet_ = false;
    diskTotalSize_ = "";
    diskTotalSizeIsSet_ = false;
    diskUsage_ = "";
    diskUsageIsSet_ = false;
    p80_ = "";
    p80IsSet_ = false;
    p95_ = "";
    p95IsSet_ = false;
    deadlocks_ = "";
    deadlocksIsSet_ = false;
    bufferHitRatio_ = "";
    bufferHitRatioIsSet_ = false;
    nodesIsSet_ = false;
}

InstancesMetricResult::~InstancesMetricResult() = default;

void InstancesMetricResult::validate()
{
}

web::json::value InstancesMetricResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(solutionIsSet_) {
        val[utility::conversions::to_string_t("solution")] = ModelBase::toJson(solution_);
    }
    if(diskUsedSizeIsSet_) {
        val[utility::conversions::to_string_t("disk_used_size")] = ModelBase::toJson(diskUsedSize_);
    }
    if(diskTotalSizeIsSet_) {
        val[utility::conversions::to_string_t("disk_total_size")] = ModelBase::toJson(diskTotalSize_);
    }
    if(diskUsageIsSet_) {
        val[utility::conversions::to_string_t("disk_usage")] = ModelBase::toJson(diskUsage_);
    }
    if(p80IsSet_) {
        val[utility::conversions::to_string_t("p80")] = ModelBase::toJson(p80_);
    }
    if(p95IsSet_) {
        val[utility::conversions::to_string_t("p95")] = ModelBase::toJson(p95_);
    }
    if(deadlocksIsSet_) {
        val[utility::conversions::to_string_t("deadlocks")] = ModelBase::toJson(deadlocks_);
    }
    if(bufferHitRatioIsSet_) {
        val[utility::conversions::to_string_t("buffer_hit_ratio")] = ModelBase::toJson(bufferHitRatio_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool InstancesMetricResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("solution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("solution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_used_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_used_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskUsedSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_total_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_total_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskTotalSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_usage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("p80"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("p80"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setP80(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("p95"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("p95"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setP95(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deadlocks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deadlocks"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeadlocks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("buffer_hit_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buffer_hit_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBufferHitRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancesNodesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}


std::string InstancesMetricResult::getId() const
{
    return id_;
}

void InstancesMetricResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InstancesMetricResult::idIsSet() const
{
    return idIsSet_;
}

void InstancesMetricResult::unsetid()
{
    idIsSet_ = false;
}

std::string InstancesMetricResult::getName() const
{
    return name_;
}

void InstancesMetricResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstancesMetricResult::nameIsSet() const
{
    return nameIsSet_;
}

void InstancesMetricResult::unsetname()
{
    nameIsSet_ = false;
}

std::string InstancesMetricResult::getStatus() const
{
    return status_;
}

void InstancesMetricResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstancesMetricResult::statusIsSet() const
{
    return statusIsSet_;
}

void InstancesMetricResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InstancesMetricResult::getMode() const
{
    return mode_;
}

void InstancesMetricResult::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool InstancesMetricResult::modeIsSet() const
{
    return modeIsSet_;
}

void InstancesMetricResult::unsetmode()
{
    modeIsSet_ = false;
}

std::string InstancesMetricResult::getEngineName() const
{
    return engineName_;
}

void InstancesMetricResult::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool InstancesMetricResult::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void InstancesMetricResult::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string InstancesMetricResult::getEngineVersion() const
{
    return engineVersion_;
}

void InstancesMetricResult::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool InstancesMetricResult::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void InstancesMetricResult::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string InstancesMetricResult::getSolution() const
{
    return solution_;
}

void InstancesMetricResult::setSolution(const std::string& value)
{
    solution_ = value;
    solutionIsSet_ = true;
}

bool InstancesMetricResult::solutionIsSet() const
{
    return solutionIsSet_;
}

void InstancesMetricResult::unsetsolution()
{
    solutionIsSet_ = false;
}

std::string InstancesMetricResult::getDiskUsedSize() const
{
    return diskUsedSize_;
}

void InstancesMetricResult::setDiskUsedSize(const std::string& value)
{
    diskUsedSize_ = value;
    diskUsedSizeIsSet_ = true;
}

bool InstancesMetricResult::diskUsedSizeIsSet() const
{
    return diskUsedSizeIsSet_;
}

void InstancesMetricResult::unsetdiskUsedSize()
{
    diskUsedSizeIsSet_ = false;
}

std::string InstancesMetricResult::getDiskTotalSize() const
{
    return diskTotalSize_;
}

void InstancesMetricResult::setDiskTotalSize(const std::string& value)
{
    diskTotalSize_ = value;
    diskTotalSizeIsSet_ = true;
}

bool InstancesMetricResult::diskTotalSizeIsSet() const
{
    return diskTotalSizeIsSet_;
}

void InstancesMetricResult::unsetdiskTotalSize()
{
    diskTotalSizeIsSet_ = false;
}

std::string InstancesMetricResult::getDiskUsage() const
{
    return diskUsage_;
}

void InstancesMetricResult::setDiskUsage(const std::string& value)
{
    diskUsage_ = value;
    diskUsageIsSet_ = true;
}

bool InstancesMetricResult::diskUsageIsSet() const
{
    return diskUsageIsSet_;
}

void InstancesMetricResult::unsetdiskUsage()
{
    diskUsageIsSet_ = false;
}

std::string InstancesMetricResult::getP80() const
{
    return p80_;
}

void InstancesMetricResult::setP80(const std::string& value)
{
    p80_ = value;
    p80IsSet_ = true;
}

bool InstancesMetricResult::p80IsSet() const
{
    return p80IsSet_;
}

void InstancesMetricResult::unsetp80()
{
    p80IsSet_ = false;
}

std::string InstancesMetricResult::getP95() const
{
    return p95_;
}

void InstancesMetricResult::setP95(const std::string& value)
{
    p95_ = value;
    p95IsSet_ = true;
}

bool InstancesMetricResult::p95IsSet() const
{
    return p95IsSet_;
}

void InstancesMetricResult::unsetp95()
{
    p95IsSet_ = false;
}

std::string InstancesMetricResult::getDeadlocks() const
{
    return deadlocks_;
}

void InstancesMetricResult::setDeadlocks(const std::string& value)
{
    deadlocks_ = value;
    deadlocksIsSet_ = true;
}

bool InstancesMetricResult::deadlocksIsSet() const
{
    return deadlocksIsSet_;
}

void InstancesMetricResult::unsetdeadlocks()
{
    deadlocksIsSet_ = false;
}

std::string InstancesMetricResult::getBufferHitRatio() const
{
    return bufferHitRatio_;
}

void InstancesMetricResult::setBufferHitRatio(const std::string& value)
{
    bufferHitRatio_ = value;
    bufferHitRatioIsSet_ = true;
}

bool InstancesMetricResult::bufferHitRatioIsSet() const
{
    return bufferHitRatioIsSet_;
}

void InstancesMetricResult::unsetbufferHitRatio()
{
    bufferHitRatioIsSet_ = false;
}

std::vector<InstancesNodesResult>& InstancesMetricResult::getNodes()
{
    return nodes_;
}

void InstancesMetricResult::setNodes(const std::vector<InstancesNodesResult>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool InstancesMetricResult::nodesIsSet() const
{
    return nodesIsSet_;
}

void InstancesMetricResult::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


