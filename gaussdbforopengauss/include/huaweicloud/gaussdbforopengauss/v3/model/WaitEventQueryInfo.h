
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WaitEventQueryInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WaitEventQueryInfo_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  WaitEventQueryInfo
    : public ModelBase
{
public:
    WaitEventQueryInfo();
    virtual ~WaitEventQueryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WaitEventQueryInfo members

    /// <summary>
    /// **参数解释**: 数据库名称。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户名称。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否在等待状态。 **约束限制**: 不涉及。 **取值范围**: -t：是。 -f：否。 **默认取值**: 不涉及。
    /// </summary>

    std::string getWaiting() const;
    bool waitingIsSet() const;
    void unsetwaiting();
    void setWaiting(const std::string& value);

    /// <summary>
    /// **参数解释**: 会话ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**: 阻塞当前会话的会话ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getBlockSessionId() const;
    bool blockSessionIdIsSet() const;
    void unsetblockSessionId();
    void setBlockSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**: 阻塞当前会话的会话数。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getBlockCount() const;
    bool blockCountIsSet() const;
    void unsetblockCount();
    void setBlockCount(const std::string& value);

    /// <summary>
    /// **参数解释**: 唯一的SQL ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getUniqueSqlId() const;
    bool uniqueSqlIdIsSet() const;
    void unsetuniqueSqlId();
    void setUniqueSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL查询ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// **参数解释**: 该会话当前整体状态。 **约束限制**: 不涉及。 **取值范围**: -active：后台正在执行一个查询。 -idle：后台正在等待一个新的客户端命令。 -idle in transaction：后台在事务中，但事务中没有语句在执行。 -fastpath function call：后台正在执行一个fast-path函数。 -disabled：如果后台禁用track_activities，则事务显示此状态。 **默认取值**: 不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**: 等待事件。 参见“开发指南 &gt; 系统表和系统视图 &gt; 系统视图 &gt; 其他系统视图 &gt; PG_THREAD_WAIT_STATUS”中的wait_event字段。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getWaitEvent() const;
    bool waitEventIsSet() const;
    void unsetwaitEvent();
    void setWaitEvent(const std::string& value);

    /// <summary>
    /// **参数解释**: 等待状态。 参见“开发指南 &gt; 系统表和系统视图 &gt; 系统视图 &gt; 其他系统视图 &gt; PG_THREAD_WAIT_STATUS”中的wait_status列表。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getWaitStatus() const;
    bool waitStatusIsSet() const;
    void unsetwaitStatus();
    void setWaitStatus(const std::string& value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string waiting_;
    bool waitingIsSet_;
    std::string sessionId_;
    bool sessionIdIsSet_;
    std::string blockSessionId_;
    bool blockSessionIdIsSet_;
    std::string blockCount_;
    bool blockCountIsSet_;
    std::string uniqueSqlId_;
    bool uniqueSqlIdIsSet_;
    std::string queryId_;
    bool queryIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string waitEvent_;
    bool waitEventIsSet_;
    std::string waitStatus_;
    bool waitStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WaitEventQueryInfo_H_
