
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditAgentRespoonse_agents_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditAgentRespoonse_agents_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditAgentRespoonse_agents
    : public ModelBase
{
public:
    AuditAgentRespoonse_agents();
    virtual ~AuditAgentRespoonse_agents();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditAgentRespoonse_agents members

    /// <summary>
    /// agent ID
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// agent 类型 - DB：数据库端 - APP：应用端
    /// </summary>

    std::string getAgentType() const;
    bool agentTypeIsSet() const;
    void unsetagentType();
    void setAgentType(const std::string& value);

    /// <summary>
    /// agent OS
    /// </summary>

    std::string getAgentOs() const;
    bool agentOsIsSet() const;
    void unsetagentOs();
    void setAgentOs(const std::string& value);

    /// <summary>
    /// agent安装节点IP
    /// </summary>

    std::string getAgentIp() const;
    bool agentIpIsSet() const;
    void unsetagentIp();
    void setAgentIp(const std::string& value);

    /// <summary>
    /// 内存阈值
    /// </summary>

    int32_t getMemThreshold() const;
    bool memThresholdIsSet() const;
    void unsetmemThreshold();
    void setMemThreshold(int32_t value);

    /// <summary>
    /// cpu阈值
    /// </summary>

    int32_t getCpuThreshold() const;
    bool cpuThresholdIsSet() const;
    void unsetcpuThreshold();
    void setCpuThreshold(int32_t value);

    /// <summary>
    /// agent状态 - 1：开启 - 0：关闭
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// agent网卡
    /// </summary>

    std::string getAgentNic() const;
    bool agentNicIsSet() const;
    void unsetagentNic();
    void setAgentNic(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 数据流量抓取状态 - 1：运行中 - 2：休眠中 - 3：已停止 - 4：异常
    /// </summary>

    int32_t getDatacapStatus() const;
    bool datacapStatusIsSet() const;
    void unsetdatacapStatus();
    void setDatacapStatus(int32_t value);

    /// <summary>
    /// agent安装地址
    /// </summary>

    std::string getAgentUrl() const;
    bool agentUrlIsSet() const;
    void unsetagentUrl();
    void setAgentUrl(const std::string& value);

    /// <summary>
    /// 是否CCE场景
    /// </summary>

    bool isUniversal() const;
    bool universalIsSet() const;
    void unsetuniversal();
    void setUniversal(bool value);

    /// <summary>
    /// sha256值
    /// </summary>

    std::string getSha256() const;
    bool sha256IsSet() const;
    void unsetsha256();
    void setSha256(const std::string& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    std::string agentType_;
    bool agentTypeIsSet_;
    std::string agentOs_;
    bool agentOsIsSet_;
    std::string agentIp_;
    bool agentIpIsSet_;
    int32_t memThreshold_;
    bool memThresholdIsSet_;
    int32_t cpuThreshold_;
    bool cpuThresholdIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string agentNic_;
    bool agentNicIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    int32_t datacapStatus_;
    bool datacapStatusIsSet_;
    std::string agentUrl_;
    bool agentUrlIsSet_;
    bool universal_;
    bool universalIsSet_;
    std::string sha256_;
    bool sha256IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditAgentRespoonse_agents_H_
