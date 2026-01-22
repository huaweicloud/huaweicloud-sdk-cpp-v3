
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ReportHistoryVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ReportHistoryVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/StatisticPeriod.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ReportHistoryVO
    : public ModelBase
{
public:
    ReportHistoryVO();
    virtual ~ReportHistoryVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportHistoryVO members

    /// <summary>
    /// **参数解释**： 报告ID **取值范围**： 不涉及
    /// </summary>

    std::string getReportId() const;
    bool reportIdIsSet() const;
    void unsetreportId();
    void setReportId(const std::string& value);

    /// <summary>
    /// **参数解释**： 发送时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getSendTime() const;
    bool sendTimeIsSet() const;
    void unsetsendTime();
    void setSendTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    StatisticPeriod getStatisticPeriod() const;
    bool statisticPeriodIsSet() const;
    void unsetstatisticPeriod();
    void setStatisticPeriod(const StatisticPeriod& value);


protected:
    std::string reportId_;
    bool reportIdIsSet_;
    int64_t sendTime_;
    bool sendTimeIsSet_;
    StatisticPeriod statisticPeriod_;
    bool statisticPeriodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ReportHistoryVO_H_
