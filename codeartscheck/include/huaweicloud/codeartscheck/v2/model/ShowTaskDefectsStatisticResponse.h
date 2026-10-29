
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDefectsStatisticResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDefectsStatisticResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/StatisticSeverityV2.h>
#include <huaweicloud/codeartscheck/v2/model/StatisticStatusV2.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTaskDefectsStatisticResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskDefectsStatisticResponse();
    virtual ~ShowTaskDefectsStatisticResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskDefectsStatisticResponse members

    /// <summary>
    /// 
    /// </summary>

    StatisticSeverityV2 getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const StatisticSeverityV2& value);

    /// <summary>
    /// 
    /// </summary>

    StatisticStatusV2 getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const StatisticStatusV2& value);

    /// <summary>
    /// **参数解释：** 检查开始时间，使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastCheckTime() const;
    bool lastCheckTimeIsSet() const;
    void unsetlastCheckTime();
    void setLastCheckTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 检查结束时间，使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastCheckFinishTime() const;
    bool lastCheckFinishTimeIsSet() const;
    void unsetlastCheckFinishTime();
    void setLastCheckFinishTime(const std::string& value);


protected:
    StatisticSeverityV2 severity_;
    bool severityIsSet_;
    StatisticStatusV2 status_;
    bool statusIsSet_;
    std::string lastCheckTime_;
    bool lastCheckTimeIsSet_;
    std::string lastCheckFinishTime_;
    bool lastCheckFinishTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDefectsStatisticResponse_H_
