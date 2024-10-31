
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateLimitTaskRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateLimitTaskRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskNodeOption.h>
#include <string>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CreateLimitTaskRequestBody
    : public ModelBase
{
public:
    CreateLimitTaskRequestBody();
    virtual ~CreateLimitTaskRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLimitTaskRequestBody members

    /// <summary>
    /// 限流任务范围，目前支持SQL,SESSION级别范围。
    /// </summary>

    std::string getTaskScope() const;
    bool taskScopeIsSet() const;
    void unsettaskScope();
    void setTaskScope(const std::string& value);

    /// <summary>
    /// 任务开始时间,取值范围：非空且大于等于当前时间的前俩分钟，格式必须为yyyy-mm-ddThh:mm:ssZ,当前时间指UTC时间，SQL范围必传。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务结束时间,取值范围：非空且大于任务开始时间，格式必须为yyyy-mm-ddThh:mm:ssZ,当前时间指UTC时间，SQL范围必传。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 限流类型：当限流范围为SQL级别时，可选SQL_ID、SQL_TYPE类型，当限流范围为SESSION级别时，可选SESSION_ACTIVE_MAX_COUNT类型。
    /// </summary>

    std::string getLimitType() const;
    bool limitTypeIsSet() const;
    void unsetlimitType();
    void setLimitType(const std::string& value);

    /// <summary>
    /// 限流类型，当限流类型为SQL_ID类型时，该值为选中模板的sqlId，当限流类型为SQL_TYPE类型时，值为SQL类型，目前支持select，update，insert，delete，meger五种值，当限流类型为SESSION_ACTIVE_MAX_COUNT类型时，只支持CPU_OR_MEMORY一种值。
    /// </summary>

    std::string getLimitTypeValue() const;
    bool limitTypeValueIsSet() const;
    void unsetlimitTypeValue();
    void setLimitTypeValue(const std::string& value);

    /// <summary>
    /// 关键词，当且仅当类型为SQL_TYPE，必传，多个关键词以逗号隔开，数量范围为[2，100]个，每个关键词长度范围[2，64]位，关键词不允许包含 \&quot; 或 \\ 或 {} 或 null值 以及非首尾的空格符。
    /// </summary>

    std::string getKeyWords() const;
    bool keyWordsIsSet() const;
    void unsetkeyWords();
    void setKeyWords(const std::string& value);

    /// <summary>
    /// 限流任务名，必传，只能为英文字母大小写，下划线，数字和$符，最大长度为100个字符。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// CN节点执行过的SQL模板,如果类型为SQLID，则为必传。
    /// </summary>

    std::string getSqlModel() const;
    bool sqlModelIsSet() const;
    void unsetsqlModel();
    void setSqlModel(const std::string& value);

    /// <summary>
    /// 并发数，大于等于零的正整数，取值范围[0, 2147483647]。
    /// </summary>

    int32_t getParallelSize() const;
    bool parallelSizeIsSet() const;
    void unsetparallelSize();
    void setParallelSize(int32_t value);

    /// <summary>
    /// cpu利用率阈值，正整数，取值范围[0,100）,如果类型为SESSION_ACTIVE_MAX_COUNT，必传，不支持和内存利用率阈值同时为0，如果选择只限制CPU、内存中的其中一个，则另一个必须传值0。
    /// </summary>

    int32_t getCpuUtilization() const;
    bool cpuUtilizationIsSet() const;
    void unsetcpuUtilization();
    void setCpuUtilization(int32_t value);

    /// <summary>
    /// 内存利用率阈值，正整数，取值范围[0,100）,如果类型为SESSION_ACTIVE_MAX_COUNT，必传，不支持和cpu利用率阈值同时为0，如果选择只限制CPU、内存中的其中一个，则另一个必须传值0。
    /// </summary>

    int32_t getMemoryUtilization() const;
    bool memoryUtilizationIsSet() const;
    void unsetmemoryUtilization();
    void setMemoryUtilization(int32_t value);

    /// <summary>
    /// CN节点数据库组,每个数据库字符串以逗号形式隔,如果类型为SQL_TYPE，则为必传。
    /// </summary>

    std::string getDatabases() const;
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::string& value);

    /// <summary>
    /// CN节点信息列表，如果类型为SQL_ID，则为必传
    /// </summary>

    std::vector<CreateLimitTaskNodeOption>& getNodeInfos();
    bool nodeInfosIsSet() const;
    void unsetnodeInfos();
    void setNodeInfos(const std::vector<CreateLimitTaskNodeOption>& value);


protected:
    std::string taskScope_;
    bool taskScopeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string limitType_;
    bool limitTypeIsSet_;
    std::string limitTypeValue_;
    bool limitTypeValueIsSet_;
    std::string keyWords_;
    bool keyWordsIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string sqlModel_;
    bool sqlModelIsSet_;
    int32_t parallelSize_;
    bool parallelSizeIsSet_;
    int32_t cpuUtilization_;
    bool cpuUtilizationIsSet_;
    int32_t memoryUtilization_;
    bool memoryUtilizationIsSet_;
    std::string databases_;
    bool databasesIsSet_;
    std::vector<CreateLimitTaskNodeOption> nodeInfos_;
    bool nodeInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateLimitTaskRequestBody_H_
