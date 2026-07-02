
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_LockRootCause_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_LockRootCause_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  LockRootCause
    : public ModelBase
{
public:
    LockRootCause();
    virtual ~LockRootCause();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LockRootCause members

    /// <summary>
    /// **参数解释**： 被锁会话ID。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getLockedPid() const;
    bool lockedPidIsSet() const;
    void unsetlockedPid();
    void setLockedPid(int64_t value);

    /// <summary>
    /// **参数解释**： 被锁会话当前执行的SQL。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLockedSql() const;
    bool lockedSqlIsSet() const;
    void unsetlockedSql();
    void setLockedSql(const std::string& value);

    /// <summary>
    /// **参数解释**： 等待持续时间（秒）。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getWaitSeconds() const;
    bool waitSecondsIsSet() const;
    void unsetwaitSeconds();
    void setWaitSeconds(int64_t value);

    /// <summary>
    /// **参数解释**： 锁所在数据库。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLockDb() const;
    bool lockDbIsSet() const;
    void unsetlockDb();
    void setLockDb(const std::string& value);

    /// <summary>
    /// **参数解释**： 锁所在表。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLockTable() const;
    bool lockTableIsSet() const;
    void unsetlockTable();
    void setLockTable(const std::string& value);

    /// <summary>
    /// **参数解释**： 锁所在索引。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLockIndex() const;
    bool lockIndexIsSet() const;
    void unsetlockIndex();
    void setLockIndex(const std::string& value);

    /// <summary>
    /// **参数解释**： 锁模式。 **取值范围**： - IX：表级排他锁。 - X,REC_NOT_GAP：排他记录锁。 - X,GAP：间隙锁。 - X：行级排他锁。 
    /// </summary>

    std::string getLockMode() const;
    bool lockModeIsSet() const;
    void unsetlockMode();
    void setLockMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 锁住的具体数据行的标识。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLockData() const;
    bool lockDataIsSet() const;
    void unsetlockData();
    void setLockData(const std::string& value);

    /// <summary>
    /// **参数解释**： 阻塞源会话ID。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getBlockerPid() const;
    bool blockerPidIsSet() const;
    void unsetblockerPid();
    void setBlockerPid(int64_t value);

    /// <summary>
    /// **参数解释**： 阻塞源事务状态。 **取值范围**： - RUNNING：运行中。 - LOCK WAIT：锁等待。 - ROLLING BACK：回滚中。 - COMMITTING：提交中。 
    /// </summary>

    std::string getBlockerState() const;
    bool blockerStateIsSet() const;
    void unsetblockerState();
    void setBlockerState(const std::string& value);

    /// <summary>
    /// **参数解释**： 阻塞源事务持续时间（秒）。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getBlockerAge() const;
    bool blockerAgeIsSet() const;
    void unsetblockerAge();
    void setBlockerAge(int32_t value);

    /// <summary>
    /// **参数解释**： 阻塞源锁定的行数。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getBlockerRowsLocked() const;
    bool blockerRowsLockedIsSet() const;
    void unsetblockerRowsLocked();
    void setBlockerRowsLocked(int64_t value);

    /// <summary>
    /// **参数解释**： 阻塞源修改的行数。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getBlockerRowsModified() const;
    bool blockerRowsModifiedIsSet() const;
    void unsetblockerRowsModified();
    void setBlockerRowsModified(int64_t value);

    /// <summary>
    /// **参数解释**： 阻塞源当前执行的SQL列表。 
    /// </summary>

    std::vector<std::string>& getBlockerCurrentSql();
    bool blockerCurrentSqlIsSet() const;
    void unsetblockerCurrentSql();
    void setBlockerCurrentSql(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 阻塞源主机。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getBlockerHost() const;
    bool blockerHostIsSet() const;
    void unsetblockerHost();
    void setBlockerHost(const std::string& value);

    /// <summary>
    /// **参数解释**： 阻塞源命令。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getBlockerCommand() const;
    bool blockerCommandIsSet() const;
    void unsetblockerCommand();
    void setBlockerCommand(const std::string& value);

    /// <summary>
    /// **参数解释**： 阻塞源线程ID。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getBlockerThreadId() const;
    bool blockerThreadIdIsSet() const;
    void unsetblockerThreadId();
    void setBlockerThreadId(int64_t value);


protected:
    int64_t lockedPid_;
    bool lockedPidIsSet_;
    std::string lockedSql_;
    bool lockedSqlIsSet_;
    int64_t waitSeconds_;
    bool waitSecondsIsSet_;
    std::string lockDb_;
    bool lockDbIsSet_;
    std::string lockTable_;
    bool lockTableIsSet_;
    std::string lockIndex_;
    bool lockIndexIsSet_;
    std::string lockMode_;
    bool lockModeIsSet_;
    std::string lockData_;
    bool lockDataIsSet_;
    int64_t blockerPid_;
    bool blockerPidIsSet_;
    std::string blockerState_;
    bool blockerStateIsSet_;
    int32_t blockerAge_;
    bool blockerAgeIsSet_;
    int64_t blockerRowsLocked_;
    bool blockerRowsLockedIsSet_;
    int64_t blockerRowsModified_;
    bool blockerRowsModifiedIsSet_;
    std::vector<std::string> blockerCurrentSql_;
    bool blockerCurrentSqlIsSet_;
    std::string blockerHost_;
    bool blockerHostIsSet_;
    std::string blockerCommand_;
    bool blockerCommandIsSet_;
    int64_t blockerThreadId_;
    bool blockerThreadIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_LockRootCause_H_
