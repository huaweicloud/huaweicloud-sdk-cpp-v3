
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_IntelligentKillSessionStatistic_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_IntelligentKillSessionStatistic_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  IntelligentKillSessionStatistic
    : public ModelBase
{
public:
    IntelligentKillSessionStatistic();
    virtual ~IntelligentKillSessionStatistic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IntelligentKillSessionStatistic members

    /// <summary>
    /// **参数解释**：  预览智能Kill会话SQL模板关键字。  **取值范围**：  不涉及。
    /// </summary>

    std::string getKeyword() const;
    bool keywordIsSet() const;
    void unsetkeyword();
    void setKeyword(const std::string& value);

    /// <summary>
    /// **参数解释**：  预览智能Kill会话中的SQL模板命中的首个会话正在执行的SQL语句。  **取值范围**：  不涉及。
    /// </summary>

    std::string getExampleSqlText() const;
    bool exampleSqlTextIsSet() const;
    void unsetexampleSqlText();
    void setExampleSqlText(const std::string& value);

    /// <summary>
    /// **参数解释**：  预览智能Kill会话中的SQL模板命中的会话线程ID列表。
    /// </summary>

    std::vector<int64_t>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(std::vector<int64_t> value);

    /// <summary>
    /// **参数解释**：  预览智能Kill会话中的SQL模板命中的会话个数。  **取值范围**：  &gt;&#x3D;0。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：  预览智能Kill会话中的SQL模板命中的会话总执行时间，单位为秒。  **取值范围**：  &gt;&#x3D;0。
    /// </summary>

    double getTotalTime() const;
    bool totalTimeIsSet() const;
    void unsettotalTime();
    void setTotalTime(double value);

    /// <summary>
    /// **参数解释**：  预览智能Kill会话中的SQL模板命中的会话平均执行时间，单位为秒。  **取值范围**：  &gt;&#x3D;0。
    /// </summary>

    double getAvgTime() const;
    bool avgTimeIsSet() const;
    void unsetavgTime();
    void setAvgTime(double value);

    /// <summary>
    /// **参数解释**：  预览智能Kill会话中的SQL模板命中的会话中最长会话执行时间，单位为秒。  **取值范围**：  &gt;&#x3D;0。
    /// </summary>

    double getMaxTime() const;
    bool maxTimeIsSet() const;
    void unsetmaxTime();
    void setMaxTime(double value);

    /// <summary>
    /// **参数解释**：  预览智能Kill会话中的SQL模板命中Kill会话策略。  **取值范围**：  - top3_time: 以每组内会话最长的执行时长排序，选择排名前三的组内会话进行Kill。 - top3_count: 以每组内会话数量排序，选择排名前三的组内会话进行Kill。 - top3_avg_time: 以每组内会话平均执行时长排序，选择排名前三的组内会话进行Kill。
    /// </summary>

    std::string getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const std::string& value);


protected:
    std::string keyword_;
    bool keywordIsSet_;
    std::string exampleSqlText_;
    bool exampleSqlTextIsSet_;
    std::vector<int64_t> ids_;
    bool idsIsSet_;
    int32_t count_;
    bool countIsSet_;
    double totalTime_;
    bool totalTimeIsSet_;
    double avgTime_;
    bool avgTimeIsSet_;
    double maxTime_;
    bool maxTimeIsSet_;
    std::string strategy_;
    bool strategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_IntelligentKillSessionStatistic_H_
