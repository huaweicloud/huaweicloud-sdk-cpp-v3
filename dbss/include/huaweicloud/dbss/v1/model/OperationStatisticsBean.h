
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_OperationStatisticsBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_OperationStatisticsBean_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  OperationStatisticsBean
    : public ModelBase
{
public:
    OperationStatisticsBean();
    virtual ~OperationStatisticsBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperationStatisticsBean members

    /// <summary>
    /// 周期
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 风险操作数量
    /// </summary>

    int64_t getRiskOperationNum() const;
    bool riskOperationNumIsSet() const;
    void unsetriskOperationNum();
    void setRiskOperationNum(int64_t value);


protected:
    std::string period_;
    bool periodIsSet_;
    int64_t riskOperationNum_;
    bool riskOperationNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_OperationStatisticsBean_H_
