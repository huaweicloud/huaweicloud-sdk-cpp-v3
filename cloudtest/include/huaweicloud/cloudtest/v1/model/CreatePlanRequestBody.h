
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreatePlanRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreatePlanRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/PlanCycle.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建计划请求体
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreatePlanRequestBody
    : public ModelBase
{
public:
    CreatePlanRequestBody();
    virtual ~CreatePlanRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePlanRequestBody members

    /// <summary>
    /// 计划名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 处理者id，不填时默认使用当前用户
    /// </summary>

    std::string getAssignedId() const;
    bool assignedIdIsSet() const;
    void unsetassignedId();
    void setAssignedId(const std::string& value);

    /// <summary>
    /// 计划下包含的用例类型，数组长度小于10个
    /// </summary>

    std::vector<int32_t>& getServiceIdList();
    bool serviceIdListIsSet() const;
    void unsetserviceIdList();
    void setServiceIdList(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    PlanCycle getPlanCycle() const;
    bool planCycleIsSet() const;
    void unsetplanCycle();
    void setPlanCycle(const PlanCycle& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string assignedId_;
    bool assignedIdIsSet_;
    std::vector<int32_t> serviceIdList_;
    bool serviceIdListIsSet_;
    PlanCycle planCycle_;
    bool planCycleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreatePlanRequestBody_H_
