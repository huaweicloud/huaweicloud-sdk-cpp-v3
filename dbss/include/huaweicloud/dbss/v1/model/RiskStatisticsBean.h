
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskStatisticsBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskStatisticsBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  RiskStatisticsBean
    : public ModelBase
{
public:
    RiskStatisticsBean();
    virtual ~RiskStatisticsBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RiskStatisticsBean members

    /// <summary>
    /// 高风险数量
    /// </summary>

    int64_t getHighRiskNum() const;
    bool highRiskNumIsSet() const;
    void unsethighRiskNum();
    void setHighRiskNum(int64_t value);

    /// <summary>
    /// 低风险数量
    /// </summary>

    int64_t getLowRiskNum() const;
    bool lowRiskNumIsSet() const;
    void unsetlowRiskNum();
    void setLowRiskNum(int64_t value);

    /// <summary>
    /// 中风险数量
    /// </summary>

    int64_t getMiddleRiskNum() const;
    bool middleRiskNumIsSet() const;
    void unsetmiddleRiskNum();
    void setMiddleRiskNum(int64_t value);

    /// <summary>
    /// 无风险数量
    /// </summary>

    int64_t getNoRiskNum() const;
    bool noRiskNumIsSet() const;
    void unsetnoRiskNum();
    void setNoRiskNum(int64_t value);

    /// <summary>
    /// 周期
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);


protected:
    int64_t highRiskNum_;
    bool highRiskNumIsSet_;
    int64_t lowRiskNum_;
    bool lowRiskNumIsSet_;
    int64_t middleRiskNum_;
    bool middleRiskNumIsSet_;
    int64_t noRiskNum_;
    bool noRiskNumIsSet_;
    std::string period_;
    bool periodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskStatisticsBean_H_
