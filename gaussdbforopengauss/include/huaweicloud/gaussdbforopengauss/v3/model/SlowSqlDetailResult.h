
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SlowSqlDetailResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SlowSqlDetailResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SlowSqlDetailResult
    : public ModelBase
{
public:
    SlowSqlDetailResult();
    virtual ~SlowSqlDetailResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SlowSqlDetailResult members

    /// <summary>
    /// **参数解释**: 数据库名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**: SCHEMA名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// **参数解释**: 变量替换后的完整SQL。当sql_text不返回变量值时，sql返回空字符串。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 客户端IP。 **取值范围**: 不涉及。
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// **参数解释**: 客户端端口。 **取值范围**: 不涉及。
    /// </summary>

    std::string getClientPort() const;
    bool clientPortIsSet() const;
    void unsetclientPort();
    void setClientPort(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL模版。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlText() const;
    bool sqlTextIsSet() const;
    void unsetsqlText();
    void setSqlText(const std::string& value);

    /// <summary>
    /// **参数解释**: 执行计划。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQueryPlan() const;
    bool queryPlanIsSet() const;
    void unsetqueryPlan();
    void setQueryPlan(const std::string& value);

    /// <summary>
    /// **参数解释**: 开始时间UTC时间。 **取值范围**: 格式为yyyy-mm-ddThh:mm:ss+0000。
    /// </summary>

    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int32_t value);

    /// <summary>
    /// **参数解释**: 结束时间UTC时间。 **取值范围**: 格式为yyyy-mm-ddThh:mm:ss+0000。
    /// </summary>

    int32_t getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(int32_t value);

    /// <summary>
    /// **参数解释**: 返回行。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getReturnedRows() const;
    bool returnedRowsIsSet() const;
    void unsetreturnedRows();
    void setReturnedRows(int32_t value);

    /// <summary>
    /// **参数解释**: 扫描行。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getFetchedRows() const;
    bool fetchedRowsIsSet() const;
    void unsetfetchedRows();
    void setFetchedRows(int32_t value);

    /// <summary>
    /// **参数解释**: 扫描页。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getFetchedPages() const;
    bool fetchedPagesIsSet() const;
    void unsetfetchedPages();
    void setFetchedPages(int32_t value);

    /// <summary>
    /// **参数解释**: 命中页。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getHitPages() const;
    bool hitPagesIsSet() const;
    void unsethitPages();
    void setHitPages(int32_t value);

    /// <summary>
    /// **参数解释**: 总耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotalTime() const;
    bool totalTimeIsSet() const;
    void unsettotalTime();
    void setTotalTime(int32_t value);

    /// <summary>
    /// **参数解释**: CPU耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getCpuTime() const;
    bool cpuTimeIsSet() const;
    void unsetcpuTime();
    void setCpuTime(int32_t value);

    /// <summary>
    /// **参数解释**: 计划耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getPlanTime() const;
    bool planTimeIsSet() const;
    void unsetplanTime();
    void setPlanTime(int32_t value);

    /// <summary>
    /// **参数解释**: IO耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getIoTime() const;
    bool ioTimeIsSet() const;
    void unsetioTime();
    void setIoTime(int32_t value);

    /// <summary>
    /// **参数解释**: 加锁次数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getLockCount() const;
    bool lockCountIsSet() const;
    void unsetlockCount();
    void setLockCount(int32_t value);

    /// <summary>
    /// **参数解释**: 加锁耗时(单位：微秒)。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(int32_t value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string sql_;
    bool sqlIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string clientPort_;
    bool clientPortIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string sqlText_;
    bool sqlTextIsSet_;
    std::string queryPlan_;
    bool queryPlanIsSet_;
    int32_t startTime_;
    bool startTimeIsSet_;
    int32_t finishTime_;
    bool finishTimeIsSet_;
    int32_t returnedRows_;
    bool returnedRowsIsSet_;
    int32_t fetchedRows_;
    bool fetchedRowsIsSet_;
    int32_t fetchedPages_;
    bool fetchedPagesIsSet_;
    int32_t hitPages_;
    bool hitPagesIsSet_;
    int32_t totalTime_;
    bool totalTimeIsSet_;
    int32_t cpuTime_;
    bool cpuTimeIsSet_;
    int32_t planTime_;
    bool planTimeIsSet_;
    int32_t ioTime_;
    bool ioTimeIsSet_;
    int32_t lockCount_;
    bool lockCountIsSet_;
    int32_t lockTime_;
    bool lockTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SlowSqlDetailResult_H_
