
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ConditionGroup_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ConditionGroup_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/TimeRange.h>
#include <huaweicloud/iotda/v5/model/RuleCondition.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规则条件组
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ConditionGroup
    : public ModelBase
{
public:
    ConditionGroup();
    virtual ~ConditionGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConditionGroup members

    /// <summary>
    /// **参数说明**：规则的条件列表，单个规则最多支持设置10个条件。
    /// </summary>

    std::vector<RuleCondition>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<RuleCondition>& value);

    /// <summary>
    /// **参数说明**：规则条件列表中多个条件之间的逻辑关系，默认值：and。 **取值范围**： - and：逻辑且。 - or：逻辑或。
    /// </summary>

    std::string getLogic() const;
    bool logicIsSet() const;
    void unsetlogic();
    void setLogic(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TimeRange getTimeRange() const;
    bool timeRangeIsSet() const;
    void unsettimeRange();
    void setTimeRange(const TimeRange& value);


protected:
    std::vector<RuleCondition> conditions_;
    bool conditionsIsSet_;
    std::string logic_;
    bool logicIsSet_;
    TimeRange timeRange_;
    bool timeRangeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ConditionGroup_H_
