
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RealTimeSessionResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RealTimeSessionResult_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RealTimeSessionResult
    : public ModelBase
{
public:
    RealTimeSessionResult();
    virtual ~RealTimeSessionResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RealTimeSessionResult members

    /// <summary>
    /// **参数解释**： 会话ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 线程ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getPid() const;
    bool pidIsSet() const;
    void unsetpid();
    void setPid(const std::string& value);

    /// <summary>
    /// **参数解释**： SQL ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUniqueSqlId() const;
    bool uniqueSqlIdIsSet() const;
    void unsetuniqueSqlId();
    void setUniqueSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**： 数据库名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**： 客户端IP。 **取值范围**： 不涉及。
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否等待。 **取值范围**： 不涉及。
    /// </summary>

    std::string getWait() const;
    bool waitIsSet() const;
    void unsetwait();
    void setWait(const std::string& value);

    /// <summary>
    /// **参数解释**： 阻塞会话。 **取值范围**： 不涉及。
    /// </summary>

    std::string getBlockSession() const;
    bool blockSessionIsSet() const;
    void unsetblockSession();
    void setBlockSession(const std::string& value);

    /// <summary>
    /// **参数解释**： 等待事件。 **取值范围**： 不涉及。
    /// </summary>

    std::string getWaitEvent() const;
    bool waitEventIsSet() const;
    void unsetwaitEvent();
    void setWaitEvent(const std::string& value);

    /// <summary>
    /// **参数解释**： 状态。 **取值范围**： 不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**： 语句执行时长。 **取值范围**： 不涉及。
    /// </summary>

    std::string getQueryRuntime() const;
    bool queryRuntimeIsSet() const;
    void unsetqueryRuntime();
    void setQueryRuntime(const std::string& value);

    /// <summary>
    /// **参数解释**： SQL文本。 **取值范围**： 不涉及。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话开始时间。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getBackEndStart() const;
    bool backEndStartIsSet() const;
    void unsetbackEndStart();
    void setBackEndStart(int32_t value);

    /// <summary>
    /// **参数解释**： 事务开始时间。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTransactionStart() const;
    bool transactionStartIsSet() const;
    void unsettransactionStart();
    void setTransactionStart(int32_t value);

    /// <summary>
    /// **参数解释**： 语句开始时间。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getQueryStart() const;
    bool queryStartIsSet() const;
    void unsetqueryStart();
    void setQueryStart(int32_t value);

    /// <summary>
    /// **参数解释**： 应用名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getApplicationName() const;
    bool applicationNameIsSet() const;
    void unsetapplicationName();
    void setApplicationName(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话执行时长（单位：秒）。 **取值范围**： 不涉及。
    /// </summary>

    std::string getExecTime() const;
    bool execTimeIsSet() const;
    void unsetexecTime();
    void setExecTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话建立事务的数量。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTransNum() const;
    bool transNumIsSet() const;
    void unsettransNum();
    void setTransNum(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话中事务回滚的次数。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRollbackNum() const;
    bool rollbackNumIsSet() const;
    void unsetrollbackNum();
    void setRollbackNum(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话执行的sql数。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSqlNum() const;
    bool sqlNumIsSet() const;
    void unsetsqlNum();
    void setSqlNum(const std::string& value);


protected:
    std::string sessionId_;
    bool sessionIdIsSet_;
    std::string pid_;
    bool pidIsSet_;
    std::string uniqueSqlId_;
    bool uniqueSqlIdIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string wait_;
    bool waitIsSet_;
    std::string blockSession_;
    bool blockSessionIsSet_;
    std::string waitEvent_;
    bool waitEventIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string queryRuntime_;
    bool queryRuntimeIsSet_;
    std::string query_;
    bool queryIsSet_;
    int32_t backEndStart_;
    bool backEndStartIsSet_;
    int32_t transactionStart_;
    bool transactionStartIsSet_;
    int32_t queryStart_;
    bool queryStartIsSet_;
    std::string applicationName_;
    bool applicationNameIsSet_;
    std::string execTime_;
    bool execTimeIsSet_;
    std::string transNum_;
    bool transNumIsSet_;
    std::string rollbackNum_;
    bool rollbackNumIsSet_;
    std::string sqlNum_;
    bool sqlNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RealTimeSessionResult_H_
