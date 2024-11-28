
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogStatisticsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogStatisticsRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowSlowLogStatisticsRequestBody
    : public ModelBase
{
public:
    ShowSlowLogStatisticsRequestBody();
    virtual ~ShowSlowLogStatisticsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSlowLogStatisticsRequestBody members

    /// <summary>
    /// 每页多少条记录（查询结果），取值范围是1~100，不填时默认为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 索引位置，偏移量。默认为0，表示从第一条数据开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 节点ID。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 语句类型，取空值，表示查询所有语句类型。  枚举值:   - INSERT   - UPDATE   - SELECT   - DELETE   - CREATE   - ALL
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库名称。数据库名称不支持包含特殊字符 &lt; &gt; &amp; 等的搜索。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 开始日期，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。只能查询当前时间前一个月内的慢日志。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 指定排序字段。   - executeTime：表示按照平均执行时间降序排序。   - 字段为空或传入其他值，表示按照执行次数降序排序。
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// 排序顺序。默认desc。 枚举值：   - desc   - asc
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string sort_;
    bool sortIsSet_;
    std::string order_;
    bool orderIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogStatisticsRequestBody_H_
