
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySqlNowInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySqlNowInfo_H_


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
/// 正在回放的sql信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplaySqlNowInfo
    : public ModelBase
{
public:
    ReplaySqlNowInfo();
    virtual ~ReplaySqlNowInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplaySqlNowInfo members

    /// <summary>
    /// 会话id
    /// </summary>

    int64_t getThreadId() const;
    bool threadIdIsSet() const;
    void unsetthreadId();
    void setThreadId(int64_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int64_t value);

    /// <summary>
    /// 修改时间
    /// </summary>

    int64_t getModifiedAt() const;
    bool modifiedAtIsSet() const;
    void unsetmodifiedAt();
    void setModifiedAt(int64_t value);

    /// <summary>
    /// 分片id
    /// </summary>

    int64_t getShardId() const;
    bool shardIdIsSet() const;
    void unsetshardId();
    void setShardId(int64_t value);

    /// <summary>
    /// schema名称
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// sql语句
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);

    /// <summary>
    /// 原始耗时
    /// </summary>

    int64_t getLatency() const;
    bool latencyIsSet() const;
    void unsetlatency();
    void setLatency(int64_t value);

    /// <summary>
    /// 执行耗时
    /// </summary>

    int64_t getExecuteLatency() const;
    bool executeLatencyIsSet() const;
    void unsetexecuteLatency();
    void setExecuteLatency(int64_t value);

    /// <summary>
    /// 目标库类型
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// 目标库标识
    /// </summary>

    std::string getTargetName() const;
    bool targetNameIsSet() const;
    void unsettargetName();
    void setTargetName(const std::string& value);

    /// <summary>
    /// 回放状态。取值： - running：执行中。 - finish：已完成。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    int64_t threadId_;
    bool threadIdIsSet_;
    int64_t createdAt_;
    bool createdAtIsSet_;
    int64_t modifiedAt_;
    bool modifiedAtIsSet_;
    int64_t shardId_;
    bool shardIdIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;
    int64_t latency_;
    bool latencyIsSet_;
    int64_t executeLatency_;
    bool executeLatencyIsSet_;
    std::string targetType_;
    bool targetTypeIsSet_;
    std::string targetName_;
    bool targetNameIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySqlNowInfo_H_
