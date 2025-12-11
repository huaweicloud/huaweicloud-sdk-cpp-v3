
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditAgentRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditAgentRequest_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditAgentRequest
    : public ModelBase
{
public:
    AuditAgentRequest();
    virtual ~AuditAgentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditAgentRequest members

    /// <summary>
    /// 数据库ID, 可在查询数据库列表接口的ID字段获取。
    /// </summary>

    std::string getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::string& value);

    /// <summary>
    /// 模式 - 0：创建agent - 1：选择已有agent
    /// </summary>

    int32_t getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(int32_t value);

    /// <summary>
    /// 选择已有agent时必输
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// agent类型 - APP：应用端 - DB：数据库端
    /// </summary>

    std::string getAgentType() const;
    bool agentTypeIsSet() const;
    void unsetagentType();
    void setAgentType(const std::string& value);

    /// <summary>
    /// agent OS类型: - LINUX64_X86：LINUX64_X86 - LINUX64_ARM：LINUX64_ARM - WINDOWS64：WINDOWS64
    /// </summary>

    std::string getAgentOs() const;
    bool agentOsIsSet() const;
    void unsetagentOs();
    void setAgentOs(const std::string& value);

    /// <summary>
    /// agent IP，安装节点类型为应用端时必输。
    /// </summary>

    std::string getAgentIp() const;
    bool agentIpIsSet() const;
    void unsetagentIp();
    void setAgentIp(const std::string& value);

    /// <summary>
    /// agent审计网卡名称
    /// </summary>

    std::string getAgentNic() const;
    bool agentNicIsSet() const;
    void unsetagentNic();
    void setAgentNic(const std::string& value);

    /// <summary>
    /// CPU阈值
    /// </summary>

    int32_t getCpuThreshold() const;
    bool cpuThresholdIsSet() const;
    void unsetcpuThreshold();
    void setCpuThreshold(int32_t value);

    /// <summary>
    /// 内存阈值
    /// </summary>

    int32_t getMemThreshold() const;
    bool memThresholdIsSet() const;
    void unsetmemThreshold();
    void setMemThreshold(int32_t value);


protected:
    std::string dbId_;
    bool dbIdIsSet_;
    int32_t mode_;
    bool modeIsSet_;
    std::string agentId_;
    bool agentIdIsSet_;
    std::string agentType_;
    bool agentTypeIsSet_;
    std::string agentOs_;
    bool agentOsIsSet_;
    std::string agentIp_;
    bool agentIpIsSet_;
    std::string agentNic_;
    bool agentNicIsSet_;
    int32_t cpuThreshold_;
    bool cpuThresholdIsSet_;
    int32_t memThreshold_;
    bool memThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditAgentRequest_H_
