
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/AuditSqlRequest_time.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditSqlRequest
    : public ModelBase
{
public:
    AuditSqlRequest();
    virtual ~AuditSqlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditSqlRequest members

    /// <summary>
    /// 
    /// </summary>

    AuditSqlRequest_time getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const AuditSqlRequest_time& value);

    /// <summary>
    /// 风险级别 - HIGH：高 - MEDIUM：中 - LOW：低 - NO_RISK：无
    /// </summary>

    std::string getRiskLevels() const;
    bool riskLevelsIsSet() const;
    void unsetriskLevels();
    void setRiskLevels(const std::string& value);

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
    /// 数据库用户
    /// </summary>

    std::string getDbUser() const;
    bool dbUserIsSet() const;
    void unsetdbUser();
    void setDbUser(const std::string& value);

    /// <summary>
    /// 查询类型 - LOGIN：LOGIN - CREATE_TABLE：CREATE TABLE - CREATE_TABLESPACE：CREATE TABLESPACE - DROP_TABLE：DROP TABLE - DROP_TABLESPACE：DROP TABLESPACE - DELETE：DELETE - INSERT：INSERT - INSERT_SELECT：INSERT SELECT - SELECT：SELECT - SELECT_FOR_UPDATE：SELECT FOR UPDATE - UPDATE：UPDATE - CREATE_USER：CREATE USER - DROP_USER：DROP USER - GRANT：GRANT - OPERATE：OPERATE - ALL: ALL
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// sql语句
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);

    /// <summary>
    /// 响应结果 - SUCCESS：成功 - FAILED：失败
    /// </summary>

    std::string getSqlResponse() const;
    bool sqlResponseIsSet() const;
    void unsetsqlResponse();
    void setSqlResponse(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 条数
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 时间顺序 - DESC：降序 - ASC：升序
    /// </summary>

    std::string getTimeOrder() const;
    bool timeOrderIsSet() const;
    void unsettimeOrder();
    void setTimeOrder(const std::string& value);


protected:
    AuditSqlRequest_time time_;
    bool timeIsSet_;
    std::string riskLevels_;
    bool riskLevelsIsSet_;
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
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;
    std::string sqlResponse_;
    bool sqlResponseIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string timeOrder_;
    bool timeOrderIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlRequest_H_
