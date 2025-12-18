
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_IntelligentKillSessionStatistic_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_IntelligentKillSessionStatistic_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实时统计信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  IntelligentKillSessionStatistic
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
    /// **参数解释**：  该类统计维度下提取到的限流关键字。  **约束限制**：  不涉及。
    /// </summary>

    std::string getKeyword() const;
    bool keywordIsSet() const;
    void unsetkeyword();
    void setKeyword(const std::string& value);

    /// <summary>
    /// **参数解释**：  随机选取符合sql限流关键字的用户某条sql样例。  **约束限制**：  不涉及。
    /// </summary>

    std::string getRawSqlText() const;
    bool rawSqlTextIsSet() const;
    void unsetrawSqlText();
    void setRawSqlText(const std::string& value);

    /// <summary>
    /// **参数解释**：  符合该统计维度的线程id。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<int64_t>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(std::vector<int64_t> value);

    /// <summary>
    /// **参数解释**：  符合该统计维度的线程id总数量。  **约束限制**：  不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：  符合该统计维度的线程总执行时间。  **约束限制**：  不涉及。
    /// </summary>

    double getTotalTime() const;
    bool totalTimeIsSet() const;
    void unsettotalTime();
    void setTotalTime(double value);

    /// <summary>
    /// **参数解释**：  符合该统计维度的线程平均执行时间。  **约束限制**：  不涉及。
    /// </summary>

    double getAvgTime() const;
    bool avgTimeIsSet() const;
    void unsetavgTime();
    void setAvgTime(double value);

    /// <summary>
    /// **参数解释**：  符合该统计维度的线程最大执行时间。  **约束限制**：  不涉及。
    /// </summary>

    double getMaxTime() const;
    bool maxTimeIsSet() const;
    void unsetmaxTime();
    void setMaxTime(double value);

    /// <summary>
    /// **参数解释**：  统计维度。  **约束限制**：  不涉及。
    /// </summary>

    std::string getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const std::string& value);

    /// <summary>
    /// **参数解释**：  推荐最大并发数。type为\&quot;kill\&quot;时该参数没有返回值。  **约束限制**：  不涉及。
    /// </summary>

    int32_t getAdviceConcurrency() const;
    bool adviceConcurrencyIsSet() const;
    void unsetadviceConcurrency();
    void setAdviceConcurrency(int32_t value);

    /// <summary>
    /// **参数解释**：  该条维度数据的类型。\&quot;kill\&quot;表示当前统计时刻下一键kill会话下发后会kill该类会话；\&quot;limit\&quot;表示当前统计时刻下勾选\&quot;同步开启sql限流和添加规则\&quot;时会添加的规则。  **约束限制**：  不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string keyword_;
    bool keywordIsSet_;
    std::string rawSqlText_;
    bool rawSqlTextIsSet_;
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
    int32_t adviceConcurrency_;
    bool adviceConcurrencyIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_IntelligentKillSessionStatistic_H_
