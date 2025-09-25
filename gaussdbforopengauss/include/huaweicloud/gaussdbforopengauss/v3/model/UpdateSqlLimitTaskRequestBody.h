
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateSqlLimitTaskRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateSqlLimitTaskRequestBody_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpdateSqlLimitTaskRequestBody
    : public ModelBase
{
public:
    UpdateSqlLimitTaskRequestBody();
    virtual ~UpdateSqlLimitTaskRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSqlLimitTaskRequestBody members

    /// <summary>
    /// **参数解释**: 任务开始时间，如果该值小于当前时间，会取当前时间的前两分钟。 **约束限制**: 当“task_scope”为SQL时必传。 **取值范围**: 格式必须为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间。 **默认取值**: 不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 任务结束时间。 **约束限制**: 当“task_scope”为SQL时必传。 **取值范围**: 格式为yyyy-mm-ddThh:mm:ssZ，大于任务开始时间，当前时间指UTC时间。 **默认取值**: 不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 关键词。 **约束限制**: 当且仅当“limit_type”为SQL_TYPE，选传。 **取值范围**: 多个关键词以逗号隔开，最大长度为64位，最大关键词数量为100个。 **默认取值**: 不涉及。
    /// </summary>

    std::string getKeyWords() const;
    bool keyWordsIsSet() const;
    void unsetkeyWords();
    void setKeyWords(const std::string& value);

    /// <summary>
    /// **参数解释**: 并发数。 **约束限制**: 不涉及。 **取值范围**: 大于等于零的整数。 **默认取值**: 不涉及。
    /// </summary>

    int32_t getParallelSize() const;
    bool parallelSizeIsSet() const;
    void unsetparallelSize();
    void setParallelSize(int32_t value);

    /// <summary>
    /// **参数解释**: 限流任务名。 **约束限制**: 不涉及。 **取值范围**: 只能为英文字母大小写，下划线，数字和$符。 **默认取值**: 不涉及。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释**: CPU利用率阈值。 **约束限制**: 如果“limit_type”为SESSION_ACTIVE_MAX_COUNT，与内存利用率两者至少传一个。 **取值范围**: 整数，取值范围[0,100）。 **默认取值**: 不涉及。
    /// </summary>

    int32_t getCpuUtilization() const;
    bool cpuUtilizationIsSet() const;
    void unsetcpuUtilization();
    void setCpuUtilization(int32_t value);

    /// <summary>
    /// **参数解释**: 内存利用率阈值。 **约束限制**: 如果“limit_type”为SESSION_ACTIVE_MAX_COUNT，与CPU利用率两者至少传一个。 **取值范围**: 整数，取值范围[0,100）。 **默认取值**: 不涉及。
    /// </summary>

    int32_t getMemoryUtilization() const;
    bool memoryUtilizationIsSet() const;
    void unsetmemoryUtilization();
    void setMemoryUtilization(int32_t value);

    /// <summary>
    /// **参数解释**: CN节点数据库组。 **约束限制**: 不涉及。 **取值范围**: 每个数据库字符串以逗号形式隔开。 **默认取值**: 不涉及。
    /// </summary>

    std::string getDatabases() const;
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::string& value);

    /// <summary>
    /// **参数解释**: 限流任务所在的节点ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string keyWords_;
    bool keyWordsIsSet_;
    int32_t parallelSize_;
    bool parallelSizeIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    int32_t cpuUtilization_;
    bool cpuUtilizationIsSet_;
    int32_t memoryUtilization_;
    bool memoryUtilizationIsSet_;
    std::string databases_;
    bool databasesIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateSqlLimitTaskRequestBody_H_
