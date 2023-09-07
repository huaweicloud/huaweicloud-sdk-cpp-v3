
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ResourceMonitoringInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ResourceMonitoringInfo_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/InstanceState.h>
#include <string>
#include <huaweicloud/rds/v3/model/ResourceMonitoringInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源监控信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ResourceMonitoringInfo
    : public ModelBase
{
public:
    ResourceMonitoringInfo();
    virtual ~ResourceMonitoringInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResourceMonitoringInfo members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceState getInstanceState() const;
    bool instanceStateIsSet() const;
    void unsetinstanceState();
    void setInstanceState(const InstanceState& value);

    /// <summary>
    /// 实例类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// cpu大小
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// 内存大小（单位：GB）
    /// </summary>

    std::string getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(const std::string& value);

    /// <summary>
    /// 引擎名称
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 引擎版本
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// cpu使用率
    /// </summary>

    double getCpuUsage() const;
    bool cpuUsageIsSet() const;
    void unsetcpuUsage();
    void setCpuUsage(double value);

    /// <summary>
    /// 内存使用率
    /// </summary>

    double getMemoryUsage() const;
    bool memoryUsageIsSet() const;
    void unsetmemoryUsage();
    void setMemoryUsage(double value);

    /// <summary>
    /// 磁盘使用率
    /// </summary>

    double getDiskUsage() const;
    bool diskUsageIsSet() const;
    void unsetdiskUsage();
    void setDiskUsage(double value);

    /// <summary>
    /// tps
    /// </summary>

    double getTps() const;
    bool tpsIsSet() const;
    void unsettps();
    void setTps(double value);

    /// <summary>
    /// qps
    /// </summary>

    double getQps() const;
    bool qpsIsSet() const;
    void unsetqps();
    void setQps(double value);

    /// <summary>
    /// iops
    /// </summary>

    double getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(double value);

    /// <summary>
    /// 活跃连接数
    /// </summary>

    int32_t getActiveConnections() const;
    bool activeConnectionsIsSet() const;
    void unsetactiveConnections();
    void setActiveConnections(int32_t value);

    /// <summary>
    /// 慢SQL
    /// </summary>

    double getSlowSql() const;
    bool slowSqlIsSet() const;
    void unsetslowSql();
    void setSlowSql(double value);

    /// <summary>
    /// 只读实例资源监控指标
    /// </summary>

    std::vector<ResourceMonitoringInfo>& getReadonlyInstanceResourceMonitoringInfo();
    bool readonlyInstanceResourceMonitoringInfoIsSet() const;
    void unsetreadonlyInstanceResourceMonitoringInfo();
    void setReadonlyInstanceResourceMonitoringInfo(const std::vector<ResourceMonitoringInfo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    InstanceState instanceState_;
    bool instanceStateIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string mem_;
    bool memIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    double cpuUsage_;
    bool cpuUsageIsSet_;
    double memoryUsage_;
    bool memoryUsageIsSet_;
    double diskUsage_;
    bool diskUsageIsSet_;
    double tps_;
    bool tpsIsSet_;
    double qps_;
    bool qpsIsSet_;
    double iops_;
    bool iopsIsSet_;
    int32_t activeConnections_;
    bool activeConnectionsIsSet_;
    double slowSql_;
    bool slowSqlIsSet_;
    std::vector<ResourceMonitoringInfo>* readonlyInstanceResourceMonitoringInfo_;
    bool readonlyInstanceResourceMonitoringInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ResourceMonitoringInfo_H_
