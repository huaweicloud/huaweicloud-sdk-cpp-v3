
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlLimitTaskResponseResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlLimitTaskResponseResult_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSqlLimitTaskResponseResult
    : public ModelBase
{
public:
    ListSqlLimitTaskResponseResult();
    virtual ~ListSqlLimitTaskResponseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlLimitTaskResponseResult members

    /// <summary>
    /// **参数解释**: 限流任务ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释**: 任务限流范围。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTaskScope() const;
    bool taskScopeIsSet() const;
    void unsettaskScope();
    void setTaskScope(const std::string& value);

    /// <summary>
    /// **参数解释**: 任务限流类型。 **取值范围**: 不涉及。
    /// </summary>

    std::string getLimitType() const;
    bool limitTypeIsSet() const;
    void unsetlimitType();
    void setLimitType(const std::string& value);

    /// <summary>
    /// **参数解释**: 任务限流类型值。 **取值范围**: 不涉及。
    /// </summary>

    std::string getLimitTypeValue() const;
    bool limitTypeValueIsSet() const;
    void unsetlimitTypeValue();
    void setLimitTypeValue(const std::string& value);

    /// <summary>
    /// **参数解释**: 限流任务名。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释**: CN节点数据库组。 **取值范围**: 每个数据库字符串以逗号形式隔开。
    /// </summary>

    std::string getDatabases() const;
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::string& value);

    /// <summary>
    /// **参数解释**: 关键词。 **取值范围**: 不涉及。
    /// </summary>

    std::string getKeyWords() const;
    bool keyWordsIsSet() const;
    void unsetkeyWords();
    void setKeyWords(const std::string& value);

    /// <summary>
    /// **参数解释**: 限流任务状态。 **取值范围**: 当前支持：CREATING，UPDATING，DELETING，WAIT_EXECUTE，EXCUTING，TIME_OVER，DELETED，CREATE_FAILED，UPDATE_FAILED，DELETE_FAILED，EXCEPTION，NODE_SHUT_DOWN。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 规则名。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// **参数解释**: 并发数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getParallelSize() const;
    bool parallelSizeIsSet() const;
    void unsetparallelSize();
    void setParallelSize(int32_t value);

    /// <summary>
    /// **参数解释**: 限流任务开始时间。 **取值范围**: 格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 限流任务结束时间。 **取值范围**: 格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**: CPU利用率。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getCpuUtilization() const;
    bool cpuUtilizationIsSet() const;
    void unsetcpuUtilization();
    void setCpuUtilization(int32_t value);

    /// <summary>
    /// **参数解释**: 内存利用率。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMemoryUtilization() const;
    bool memoryUtilizationIsSet() const;
    void unsetmemoryUtilization();
    void setMemoryUtilization(int32_t value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskScope_;
    bool taskScopeIsSet_;
    std::string limitType_;
    bool limitTypeIsSet_;
    std::string limitTypeValue_;
    bool limitTypeValueIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string databases_;
    bool databasesIsSet_;
    std::string keyWords_;
    bool keyWordsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    int32_t parallelSize_;
    bool parallelSizeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t cpuUtilization_;
    bool cpuUtilizationIsSet_;
    int32_t memoryUtilization_;
    bool memoryUtilizationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlLimitTaskResponseResult_H_
