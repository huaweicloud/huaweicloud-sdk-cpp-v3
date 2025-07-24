
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestReportInfoRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestReportInfoRequestBody_H_


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
/// 查询质量报告看板统计信息请求体
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestReportInfoRequestBody
    : public ModelBase
{
public:
    TestReportInfoRequestBody();
    virtual ~TestReportInfoRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestReportInfoRequestBody members

    /// <summary>
    /// 测试计划id,(plan_id和branch_id不能同时为空，优先取plan_id)
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 分支id,(plan_id和branch_id不能同时为空，优先取plan_id)
    /// </summary>

    std::string getBranchId() const;
    bool branchIdIsSet() const;
    void unsetbranchId();
    void setBranchId(const std::string& value);

    /// <summary>
    /// 模块ID(查询未设置传入-2)
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 筛选迭代ID(查询未设置传入-2)
    /// </summary>

    std::string getFixedVersionId() const;
    bool fixedVersionIdIsSet() const;
    void unsetfixedVersionId();
    void setFixedVersionId(const std::string& value);


protected:
    std::string planId_;
    bool planIdIsSet_;
    std::string branchId_;
    bool branchIdIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string fixedVersionId_;
    bool fixedVersionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestReportInfoRequestBody_H_
