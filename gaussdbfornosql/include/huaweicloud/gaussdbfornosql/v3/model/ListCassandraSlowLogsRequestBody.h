
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListCassandraSlowLogsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListCassandraSlowLogsRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListCassandraSlowLogsRequestBody
    : public ModelBase
{
public:
    ListCassandraSlowLogsRequestBody();
    virtual ~ListCassandraSlowLogsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCassandraSlowLogsRequestBody members

    /// <summary>
    /// 开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。注：开始时间不得早于当前时间30天。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。注：结束时间不能晚于当前时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 表示每次查询的日志条数，最大限制100条。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 日志单行序列号，第一次查询时不需要此参数，下一次查询时需要使用，可从上一次查询的返回信息中获取。 说明：当次查询从line_num的下一条日志开始查询，不包含当前line_num日志。
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);

    /// <summary>
    /// 语句类型，取空值，表示查询所有语句类型。 取值：select
    /// </summary>

    std::string getOperateType() const;
    bool operateTypeIsSet() const;
    void unsetoperateType();
    void setOperateType(const std::string& value);

    /// <summary>
    /// 节点ID，取空值，表示查询实例下所有允许查询的节点。 具体取值请参考查询实例列表和详情接口\&quot;ListInstances\&quot;中nodes字段数据结构说明的“id”。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 根据多个关键字搜索日志全文，表示同时匹配所有关键字。 - 最多支持10个关键字。 - 每个关键字最大长度不超过512个字符。
    /// </summary>

    std::vector<std::string>& getKeywords();
    bool keywordsIsSet() const;
    void unsetkeywords();
    void setKeywords(const std::vector<std::string>& value);

    /// <summary>
    /// 根据多个键空间关键字模糊搜索日志，表示匹配至少一个关键字。 - 只支持关键字前缀模糊搜索，最多支持10个关键字。 - 每个关键字最大长度不超过48个字符。
    /// </summary>

    std::vector<std::string>& getKeyspaceKeywords();
    bool keyspaceKeywordsIsSet() const;
    void unsetkeyspaceKeywords();
    void setKeyspaceKeywords(const std::vector<std::string>& value);

    /// <summary>
    /// 根据多个数据库表名关键字模糊搜索日志，表示匹配至少一个关键字。 - 只支持关键字前缀模糊搜索，最多支持10个关键字。 - 每个关键字最大长度不超过48个字符。
    /// </summary>

    std::vector<std::string>& getTableKeywords();
    bool tableKeywordsIsSet() const;
    void unsettableKeywords();
    void setTableKeywords(const std::vector<std::string>& value);

    /// <summary>
    /// 支持根据最大执行时间范围查找日志。单位：ms
    /// </summary>

    int32_t getMaxCostTime() const;
    bool maxCostTimeIsSet() const;
    void unsetmaxCostTime();
    void setMaxCostTime(int32_t value);

    /// <summary>
    /// 支持根据最小执行时间范围查找日志。单位：ms
    /// </summary>

    int32_t getMinCostTime() const;
    bool minCostTimeIsSet() const;
    void unsetminCostTime();
    void setMinCostTime(int32_t value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string lineNum_;
    bool lineNumIsSet_;
    std::string operateType_;
    bool operateTypeIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::vector<std::string> keywords_;
    bool keywordsIsSet_;
    std::vector<std::string> keyspaceKeywords_;
    bool keyspaceKeywordsIsSet_;
    std::vector<std::string> tableKeywords_;
    bool tableKeywordsIsSet_;
    int32_t maxCostTime_;
    bool maxCostTimeIsSet_;
    int32_t minCostTime_;
    bool minCostTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListCassandraSlowLogsRequestBody_H_
