
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListLimitTaskResponseResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListLimitTaskResponseResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowLimitTaskNodeOption.h>
#include <vector>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListLimitTaskResponseResult
    : public ModelBase
{
public:
    ListLimitTaskResponseResult();
    virtual ~ListLimitTaskResponseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLimitTaskResponseResult members

    /// <summary>
    /// 限流任务ID。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务限流范围。
    /// </summary>

    std::string getTaskScope() const;
    bool taskScopeIsSet() const;
    void unsettaskScope();
    void setTaskScope(const std::string& value);

    /// <summary>
    /// 任务限流类型。
    /// </summary>

    std::string getLimitType() const;
    bool limitTypeIsSet() const;
    void unsetlimitType();
    void setLimitType(const std::string& value);

    /// <summary>
    /// 任务限流类型值。
    /// </summary>

    std::string getLimitTypeValue() const;
    bool limitTypeValueIsSet() const;
    void unsetlimitTypeValue();
    void setLimitTypeValue(const std::string& value);

    /// <summary>
    /// 限流任务名。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// CN节点数据库组,每个数据库字符串以逗号形式隔开。
    /// </summary>

    std::string getDatabases() const;
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::string& value);

    /// <summary>
    /// SQL模板,仅当任务类型为SQL_ID时，返回该值。
    /// </summary>

    std::string getSqlModel() const;
    bool sqlModelIsSet() const;
    void unsetsqlModel();
    void setSqlModel(const std::string& value);

    /// <summary>
    /// 关键词，仅当任务类型为SQL_TYPE时，返回该值。
    /// </summary>

    std::string getKeyWords() const;
    bool keyWordsIsSet() const;
    void unsetkeyWords();
    void setKeyWords(const std::string& value);

    /// <summary>
    /// 限流任务状态，当前支持：CREATING，UPDATEING，DELETING，WAIT_EXCUTE，EXCUTING，TIME_OVER，DELETED，CREATE_FAILED，UPDATE_FAILED，DELETE_FAILED，EXCEPTION，NODE_SHUT_DOWN。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 规则名。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 并发数。
    /// </summary>

    int32_t getParallelSize() const;
    bool parallelSizeIsSet() const;
    void unsetparallelSize();
    void setParallelSize(int32_t value);

    /// <summary>
    /// 限流任务开始时间,格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 限流任务结束时间,格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// cpu利用率，仅当任务类型为SESSION_ACTIVE_MAX_COUNT时，返回该值。
    /// </summary>

    int32_t getCpuUtilization() const;
    bool cpuUtilizationIsSet() const;
    void unsetcpuUtilization();
    void setCpuUtilization(int32_t value);

    /// <summary>
    /// 内存利用率，仅当任务类型为SESSION_ACTIVE_MAX_COUNT时，返回该值。
    /// </summary>

    int32_t getMemoryUtilization() const;
    bool memoryUtilizationIsSet() const;
    void unsetmemoryUtilization();
    void setMemoryUtilization(int32_t value);

    /// <summary>
    /// 创建时间为本地时间，格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 更新时间为本地时间，格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 创建者。
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// 更新者。
    /// </summary>

    std::string getModifier() const;
    bool modifierIsSet() const;
    void unsetmodifier();
    void setModifier(const std::string& value);

    /// <summary>
    /// CN节点信息列表。
    /// </summary>

    std::vector<ShowLimitTaskNodeOption>& getNodeInfos();
    bool nodeInfosIsSet() const;
    void unsetnodeInfos();
    void setNodeInfos(const std::vector<ShowLimitTaskNodeOption>& value);


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
    std::string sqlModel_;
    bool sqlModelIsSet_;
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
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string modifier_;
    bool modifierIsSet_;
    std::vector<ShowLimitTaskNodeOption> nodeInfos_;
    bool nodeInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListLimitTaskResponseResult_H_
