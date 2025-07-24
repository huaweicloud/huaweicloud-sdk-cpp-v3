
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PlanCycle_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PlanCycle_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 计划周期信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  PlanCycle
    : public ModelBase
{
public:
    PlanCycle();
    virtual ~PlanCycle();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlanCycle members

    /// <summary>
    /// 计划开始时间，要求用UTC时间表示。如2020-03-04
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 计划结束时间，要求用UTC时间表示。如2020-03-31
    /// </summary>

    std::string getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const std::string& value);


protected:
    std::string startDate_;
    bool startDateIsSet_;
    std::string endDate_;
    bool endDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PlanCycle_H_
