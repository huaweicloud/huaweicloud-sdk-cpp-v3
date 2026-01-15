
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlResponse_sql_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlResponse_sql_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/AuditSqlResponse_sql_operated_obj_info.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// sql信息
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditSqlResponse_sql
    : public ModelBase
{
public:
    AuditSqlResponse_sql();
    virtual ~AuditSqlResponse_sql();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditSqlResponse_sql members

    /// <summary>
    /// ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// sql语句
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);

    /// <summary>
    /// 客户端IP
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// 客户端名称
    /// </summary>

    std::string getClientName() const;
    bool clientNameIsSet() const;
    void unsetclientName();
    void setClientName(const std::string& value);

    /// <summary>
    /// 数据库IP
    /// </summary>

    std::string getDbIp() const;
    bool dbIpIsSet() const;
    void unsetdbIp();
    void setDbIp(const std::string& value);

    /// <summary>
    /// 数据库用户名
    /// </summary>

    std::string getDbUser() const;
    bool dbUserIsSet() const;
    void unsetdbUser();
    void setDbUser(const std::string& value);

    /// <summary>
    /// 查询类型 - LOGIN：LOGIN - CREATE_TABLE：CREATE TABLE - CREATE_TABLESPACE：CREATE TABLESPACE - DROP_TABLE：DROP TABLE - DROP_TABLESPACE：DROP TABLESPACE - DELETE：DELETE - INSERT：INSERT - INSERT_SELECT：INSERT SELECT - SELECT：SELECT - SELECT_FOR_UPDATE：SELECT FOR UPDATE - UPDATE：UPDATE - CREATE_USER：CREATE USER - DROP_USER：DROP USER - GRANT：GRANT - OPERATE：OPERATE - ALL：ALL
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);

    /// <summary>
    /// 操作对象列表
    /// </summary>

    std::vector<AuditSqlResponse_sql_operated_obj_info>& getOperatedObjInfo();
    bool operatedObjInfoIsSet() const;
    void unsetoperatedObjInfo();
    void setOperatedObjInfo(const std::vector<AuditSqlResponse_sql_operated_obj_info>& value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 风险级别 - HIGH：高 - MEDIUM：中 - LOW：低 - NO_RISK：无风险
    /// </summary>

    std::string getRiskLevel() const;
    bool riskLevelIsSet() const;
    void unsetriskLevel();
    void setRiskLevel(const std::string& value);

    /// <summary>
    /// 审计开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 响应结果 - SUCCESS：成功 - FAILED：失败
    /// </summary>

    std::string getSqlResponse() const;
    bool sqlResponseIsSet() const;
    void unsetsqlResponse();
    void setSqlResponse(const std::string& value);

    /// <summary>
    /// 数据库实例
    /// </summary>

    std::string getDbInstance() const;
    bool dbInstanceIsSet() const;
    void unsetdbInstance();
    void setDbInstance(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string clientName_;
    bool clientNameIsSet_;
    std::string dbIp_;
    bool dbIpIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    std::string queryType_;
    bool queryTypeIsSet_;
    std::vector<AuditSqlResponse_sql_operated_obj_info> operatedObjInfo_;
    bool operatedObjInfoIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string riskLevel_;
    bool riskLevelIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string sqlResponse_;
    bool sqlResponseIsSet_;
    std::string dbInstance_;
    bool dbInstanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlResponse_sql_H_
