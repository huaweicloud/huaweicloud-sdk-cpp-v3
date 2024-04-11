
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayingSqlResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayingSqlResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 正在回放的SQL信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplayingSqlResp
    : public ModelBase
{
public:
    ReplayingSqlResp();
    virtual ~ReplayingSqlResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplayingSqlResp members

    /// <summary>
    /// 库名或shema名称
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// SQL语句
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);

    /// <summary>
    /// 原始执行耗时
    /// </summary>

    int32_t getLatency() const;
    bool latencyIsSet() const;
    void unsetlatency();
    void setLatency(int32_t value);

    /// <summary>
    /// 回放执行耗时
    /// </summary>

    int32_t getExecuteLatency() const;
    bool executeLatencyIsSet() const;
    void unsetexecuteLatency();
    void setExecuteLatency(int32_t value);

    /// <summary>
    /// 执行状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 客户端IP
    /// </summary>

    std::string getClient() const;
    bool clientIsSet() const;
    void unsetclient();
    void setClient(const std::string& value);

    /// <summary>
    /// 连接ID
    /// </summary>

    std::string getConnectionId() const;
    bool connectionIdIsSet() const;
    void unsetconnectionId();
    void setConnectionId(const std::string& value);

    /// <summary>
    /// 回放开始时间
    /// </summary>

    std::string getReplayStartTime() const;
    bool replayStartTimeIsSet() const;
    void unsetreplayStartTime();
    void setReplayStartTime(const std::string& value);


protected:
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;
    int32_t latency_;
    bool latencyIsSet_;
    int32_t executeLatency_;
    bool executeLatencyIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string client_;
    bool clientIsSet_;
    std::string connectionId_;
    bool connectionIdIsSet_;
    std::string replayStartTime_;
    bool replayStartTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayingSqlResp_H_
