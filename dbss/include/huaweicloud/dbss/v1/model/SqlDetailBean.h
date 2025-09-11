
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlDetailBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlDetailBean_H_


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
/// SQL语句对象
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SqlDetailBean
    : public ModelBase
{
public:
    SqlDetailBean();
    virtual ~SqlDetailBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlDetailBean members

    /// <summary>
    /// 审计结果
    /// </summary>

    std::string getAuditResult() const;
    bool auditResultIsSet() const;
    void unsetauditResult();
    void setAuditResult(const std::string& value);

    /// <summary>
    /// 客户端端口
    /// </summary>

    int32_t getClientPort() const;
    bool clientPortIsSet() const;
    void unsetclientPort();
    void setClientPort(int32_t value);

    /// <summary>
    /// 客户端IP
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// 客户端MAC地址
    /// </summary>

    std::string getClientMac() const;
    bool clientMacIsSet() const;
    void unsetclientMac();
    void setClientMac(const std::string& value);

    /// <summary>
    /// 客户端名称
    /// </summary>

    std::string getClientName() const;
    bool clientNameIsSet() const;
    void unsetclientName();
    void setClientName(const std::string& value);

    /// <summary>
    /// 客户端系统主机名称
    /// </summary>

    std::string getClientOsName() const;
    bool clientOsNameIsSet() const;
    void unsetclientOsName();
    void setClientOsName(const std::string& value);

    /// <summary>
    /// 客户端操作系统用户名
    /// </summary>

    std::string getClientOsUser() const;
    bool clientOsUserIsSet() const;
    void unsetclientOsUser();
    void setClientOsUser(const std::string& value);

    /// <summary>
    /// 客户端端口字符
    /// </summary>

    std::string getClientPortStr() const;
    bool clientPortStrIsSet() const;
    void unsetclientPortStr();
    void setClientPortStr(const std::string& value);

    /// <summary>
    /// 客户端连接工具
    /// </summary>

    std::string getClientTool() const;
    bool clientToolIsSet() const;
    void unsetclientTool();
    void setClientTool(const std::string& value);

    /// <summary>
    /// 数据库端口
    /// </summary>

    int32_t getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(int32_t value);

    /// <summary>
    /// 数据库实例
    /// </summary>

    std::string getDbInstance() const;
    bool dbInstanceIsSet() const;
    void unsetdbInstance();
    void setDbInstance(const std::string& value);

    /// <summary>
    /// 数据库IP
    /// </summary>

    std::string getDbIp() const;
    bool dbIpIsSet() const;
    void unsetdbIp();
    void setDbIp(const std::string& value);

    /// <summary>
    /// 数据库MAC地址
    /// </summary>

    std::string getDbMac() const;
    bool dbMacIsSet() const;
    void unsetdbMac();
    void setDbMac(const std::string& value);

    /// <summary>
    /// 数据库端口字符
    /// </summary>

    std::string getDbPortStr() const;
    bool dbPortStrIsSet() const;
    void unsetdbPortStr();
    void setDbPortStr(const std::string& value);

    /// <summary>
    /// 数据库服务名称
    /// </summary>

    std::string getDbServiceName() const;
    bool dbServiceNameIsSet() const;
    void unsetdbServiceName();
    void setDbServiceName(const std::string& value);

    /// <summary>
    /// 数据库连接ID
    /// </summary>

    std::string getDbSessionId() const;
    bool dbSessionIdIsSet() const;
    void unsetdbSessionId();
    void setDbSessionId(const std::string& value);

    /// <summary>
    /// 数据库类型
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// 数据库用户
    /// </summary>

    std::string getDbUser() const;
    bool dbUserIsSet() const;
    void unsetdbUser();
    void setDbUser(const std::string& value);

    /// <summary>
    /// 请求结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 执行时长
    /// </summary>

    int64_t getExecuteTime() const;
    bool executeTimeIsSet() const;
    void unsetexecuteTime();
    void setExecuteTime(int64_t value);

    /// <summary>
    /// 操作对象类型信息
    /// </summary>

    std::string getField() const;
    bool fieldIsSet() const;
    void unsetfield();
    void setField(const std::string& value);

    /// <summary>
    /// 记录ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 风险等级   - LOW：低  - MEDIUM：中  - HIGH：高  - NO_RISK：无
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 影响行数
    /// </summary>

    std::string getLines() const;
    bool linesIsSet() const;
    void unsetlines();
    void setLines(const std::string& value);

    /// <summary>
    /// 登入登出结果
    /// </summary>

    std::string getLogResult() const;
    bool logResultIsSet() const;
    void unsetlogResult();
    void setLogResult(const std::string& value);

    /// <summary>
    /// 操作对象
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);

    /// <summary>
    /// 操作对象类型
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 查询ID
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// 操作类型
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);

    /// <summary>
    /// 数据长度
    /// </summary>

    int32_t getResponseLength() const;
    bool responseLengthIsSet() const;
    void unsetresponseLength();
    void setResponseLength(int32_t value);

    /// <summary>
    /// 响应状态
    /// </summary>

    std::string getResponseStatus() const;
    bool responseStatusIsSet() const;
    void unsetresponseStatus();
    void setResponseStatus(const std::string& value);

    /// <summary>
    /// 规则ID
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 规则类型
    /// </summary>

    std::string getRuleType() const;
    bool ruleTypeIsSet() const;
    void unsetruleType();
    void setRuleType(const std::string& value);

    /// <summary>
    /// 数据库SCHEMA
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 审计范围ID
    /// </summary>

    std::string getScopeId() const;
    bool scopeIdIsSet() const;
    void unsetscopeId();
    void setScopeId(const std::string& value);

    /// <summary>
    /// 审计范围名称
    /// </summary>

    std::string getScopeName() const;
    bool scopeNameIsSet() const;
    void unsetscopeName();
    void setScopeName(const std::string& value);

    /// <summary>
    /// SQL返回结果
    /// </summary>

    std::string getSqlResponse() const;
    bool sqlResponseIsSet() const;
    void unsetsqlResponse();
    void setSqlResponse(const std::string& value);

    /// <summary>
    /// SQL处理结果
    /// </summary>

    std::string getSqlResult() const;
    bool sqlResultIsSet() const;
    void unsetsqlResult();
    void setSqlResult(const std::string& value);

    /// <summary>
    /// SQL语句内容
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);

    /// <summary>
    /// 请求开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// TCP连接ID
    /// </summary>

    std::string getTcpSessionId() const;
    bool tcpSessionIdIsSet() const;
    void unsettcpSessionId();
    void setTcpSessionId(const std::string& value);


protected:
    std::string auditResult_;
    bool auditResultIsSet_;
    int32_t clientPort_;
    bool clientPortIsSet_;
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string clientMac_;
    bool clientMacIsSet_;
    std::string clientName_;
    bool clientNameIsSet_;
    std::string clientOsName_;
    bool clientOsNameIsSet_;
    std::string clientOsUser_;
    bool clientOsUserIsSet_;
    std::string clientPortStr_;
    bool clientPortStrIsSet_;
    std::string clientTool_;
    bool clientToolIsSet_;
    int32_t dbPort_;
    bool dbPortIsSet_;
    std::string dbInstance_;
    bool dbInstanceIsSet_;
    std::string dbIp_;
    bool dbIpIsSet_;
    std::string dbMac_;
    bool dbMacIsSet_;
    std::string dbPortStr_;
    bool dbPortStrIsSet_;
    std::string dbServiceName_;
    bool dbServiceNameIsSet_;
    std::string dbSessionId_;
    bool dbSessionIdIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int64_t executeTime_;
    bool executeTimeIsSet_;
    std::string field_;
    bool fieldIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string lines_;
    bool linesIsSet_;
    std::string logResult_;
    bool logResultIsSet_;
    std::string object_;
    bool objectIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string queryId_;
    bool queryIdIsSet_;
    std::string queryType_;
    bool queryTypeIsSet_;
    int32_t responseLength_;
    bool responseLengthIsSet_;
    std::string responseStatus_;
    bool responseStatusIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string ruleType_;
    bool ruleTypeIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string scopeId_;
    bool scopeIdIsSet_;
    std::string scopeName_;
    bool scopeNameIsSet_;
    std::string sqlResponse_;
    bool sqlResponseIsSet_;
    std::string sqlResult_;
    bool sqlResultIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string tcpSessionId_;
    bool tcpSessionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlDetailBean_H_
