
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestCaseInPlanRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestCaseInPlanRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 计划中批量添加测试用例请求体
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreateTestCaseInPlanRequestBody
    : public ModelBase
{
public:
    CreateTestCaseInPlanRequestBody();
    virtual ~CreateTestCaseInPlanRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTestCaseInPlanRequestBody members

    /// <summary>
    /// 注册测试类型服务接口返回的服务id
    /// </summary>

    int32_t getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(int32_t value);

    /// <summary>
    /// 计划下包含的用例个数，数组长度小于50个，只能包含一种测试类型
    /// </summary>

    std::vector<std::string>& getTestcaseIdList();
    bool testcaseIdListIsSet() const;
    void unsettestcaseIdList();
    void setTestcaseIdList(const std::vector<std::string>& value);


protected:
    int32_t serviceId_;
    bool serviceIdIsSet_;
    std::vector<std::string> testcaseIdList_;
    bool testcaseIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestCaseInPlanRequestBody_H_
