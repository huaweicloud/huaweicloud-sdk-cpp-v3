
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsRequestResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsRequestResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CustomDate.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  KeywordsRequestResponse
    : public ModelBase
{
public:
    KeywordsRequestResponse();
    virtual ~KeywordsRequestResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeywordsRequestResponse members

    /// <summary>
    /// **参数解释：** 日志流ID，获取方式请参见：[获取日志组ID和日志流ID](lts_api_0014.xml)。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志流名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志流ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志组名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// **参数解释：** 在日志搜索能查到的日志关键字。 **取值范围：** 不涉及。
    /// </summary>

    std::string getKeywords() const;
    bool keywordsIsSet() const;
    void unsetkeywords();
    void setKeywords(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警查询条件。 **取值范围：**  &lt;、- &gt;、 &lt;&#x3D;、&gt;&#x3D;
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警匹配条数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(int32_t value);

    /// <summary>
    /// **参数解释：** 查询执行告警任务时最近数据的时间范围。 **取值范围：** - 最小值：1 - 最大值：60
    /// </summary>

    int32_t getSearchTimeRange() const;
    bool searchTimeRangeIsSet() const;
    void unsetsearchTimeRange();
    void setSearchTimeRange(int32_t value);

    /// <summary>
    /// **参数解释：** 查询告警时间范围单位。 **取值范围：** - minute - hour
    /// </summary>

    std::string getSearchTimeRangeUnit() const;
    bool searchTimeRangeUnitIsSet() const;
    void unsetsearchTimeRangeUnit();
    void setSearchTimeRangeUnit(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CustomDate getCustomDate() const;
    bool customDateIsSet() const;
    void unsetcustomDate();
    void setCustomDate(const CustomDate& value);

    /// <summary>
    /// **参数解释：** 告警查询日志的时间区间为相对时间还是整点时间。 **约束限制：** 不涉及。 **取值范围：** - true: 相对时间。 - false: 整点时间。 **默认取值：** true
    /// </summary>

    bool isIsTimeRangeRelative() const;
    bool isTimeRangeRelativeIsSet() const;
    void unsetisTimeRangeRelative();
    void setIsTimeRangeRelative(bool value);


protected:
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string keywords_;
    bool keywordsIsSet_;
    std::string condition_;
    bool conditionIsSet_;
    int32_t number_;
    bool numberIsSet_;
    int32_t searchTimeRange_;
    bool searchTimeRangeIsSet_;
    std::string searchTimeRangeUnit_;
    bool searchTimeRangeUnitIsSet_;
    CustomDate customDate_;
    bool customDateIsSet_;
    bool isTimeRangeRelative_;
    bool isTimeRangeRelativeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsRequestResponse_H_
