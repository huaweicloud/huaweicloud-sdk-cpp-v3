
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsLogParams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsLogParams_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 此参数在请求实体中，采用json字符串格式
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  QueryLtsLogParams
    : public ModelBase
{
public:
    QueryLtsLogParams();
    virtual ~QueryLtsLogParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryLtsLogParams members

    /// <summary>
    /// 搜索起始时间（UTC时间，毫秒级）。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 搜索结束时间（UTC时间，毫秒级）。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 日志过滤条件集合，不同日志来源所需字段不同。
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 日志条数统计。默认为false(不统计)，true为统计日志条数。
    /// </summary>

    bool isIsCount() const;
    bool isCountIsSet() const;
    void unsetisCount();
    void setIsCount(bool value);

    /// <summary>
    /// 支持关键词精确搜索。关键词指相邻两个分词符之间的单词,例：error
    /// </summary>

    std::string getKeywords() const;
    bool keywordsIsSet() const;
    void unsetkeywords();
    void setKeywords(const std::string& value);

    /// <summary>
    /// 日志单行序列号，第一次查询时不需要此参数，后续分页查询时需要使用，可从上次查询的返回信息中获取。line_num应在start_time 和 end_time 之间。
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);

    /// <summary>
    /// 若已开启自定义时间功能，需要使用该字段进行分页查询。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 顺序或者倒序查询, 默认为false(顺序查询)
    /// </summary>

    bool isIsDesc() const;
    bool isDescIsSet() const;
    void unsetisDesc();
    void setIsDesc(bool value);

    /// <summary>
    /// 首次查询为 “init”, 分页查询时为 “forwards”或者“backwards”, 默认为首次查询“init”, 与 is_desc 参数配合进行分页查询。
    /// </summary>

    std::string getSearchType() const;
    bool searchTypeIsSet() const;
    void unsetsearchType();
    void setSearchType(const std::string& value);

    /// <summary>
    /// 表示每次查询的日志条数，不填时默认为50，建议您设置为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 日志关键词高亮显示，默认为true（高亮显示），false为取消高亮显示。
    /// </summary>

    bool isHighlight() const;
    bool highlightIsSet() const;
    void unsethighlight();
    void setHighlight(bool value);

    /// <summary>
    /// 日志迭代查询，默认为false（不开启迭代），true为开启迭代。
    /// </summary>

    bool isIsIterative() const;
    bool isIterativeIsSet() const;
    void unsetisIterative();
    void setIsIterative(bool value);

    /// <summary>
    /// 使用带管道符的sql分析语句进行查询，需要query参数is_analysis_query为true时生效。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// 是否为带管道符的sql分析语句。当该参数为true时，将依照body体中的query参数内容进行查询，且body体中除start_time与end_time以外的参数失效，分页、排序、查询结果条数等功能请依照sql语法规则实现。查询结果的响应体不同于未启用时的查询方式，将以默认列存的形式返回查询结果。当前仅对内测用户开放。响应示例：{\&quot;analysisLogs\&quot;:[{\&quot;field1\&quot;:\&quot;1\&quot;,\&quot;field2\&quot;:\&quot;2\&quot;,\&quot;field3\&quot;:\&quot;3\&quot;},{\&quot;field1\&quot;:\&quot;1\&quot;,\&quot;field2\&quot;:\&quot;2\&quot;,\&quot;field3\&quot;:\&quot;3\&quot;},{\&quot;field1\&quot;:\&quot;1\&quot;,\&quot;field2\&quot;:\&quot;2\&quot;,\&quot;field3\&quot;:\&quot;3\&quot;}]}
    /// </summary>

    bool isIsAnalysisQuery() const;
    bool isAnalysisQueryIsSet() const;
    void unsetisAnalysisQuery();
    void setIsAnalysisQuery(bool value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;
    bool isCount_;
    bool isCountIsSet_;
    std::string keywords_;
    bool keywordsIsSet_;
    std::string lineNum_;
    bool lineNumIsSet_;
    std::string time_;
    bool timeIsSet_;
    bool isDesc_;
    bool isDescIsSet_;
    std::string searchType_;
    bool searchTypeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    bool highlight_;
    bool highlightIsSet_;
    bool isIterative_;
    bool isIterativeIsSet_;
    std::string query_;
    bool queryIsSet_;
    bool isAnalysisQuery_;
    bool isAnalysisQueryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsLogParams_H_
