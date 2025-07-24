
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RequirementsOverviewVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RequirementsOverviewVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/RequirementOverviewVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  RequirementsOverviewVo
    : public ModelBase
{
public:
    RequirementsOverviewVo();
    virtual ~RequirementsOverviewVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RequirementsOverviewVo members

    /// <summary>
    /// 质量报告需求测试情况总数
    /// </summary>

    int32_t getTotalNumber() const;
    bool totalNumberIsSet() const;
    void unsettotalNumber();
    void setTotalNumber(int32_t value);

    /// <summary>
    /// 质量报告需求测试情况列表
    /// </summary>

    std::vector<RequirementOverviewVo>& getRequirementOverviewList();
    bool requirementOverviewListIsSet() const;
    void unsetrequirementOverviewList();
    void setRequirementOverviewList(const std::vector<RequirementOverviewVo>& value);


protected:
    int32_t totalNumber_;
    bool totalNumberIsSet_;
    std::vector<RequirementOverviewVo> requirementOverviewList_;
    bool requirementOverviewListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RequirementsOverviewVo_H_
