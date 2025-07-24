
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestCaseInPlanRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestCaseInPlanRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/CreateTestCaseInPlanRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreateTestCaseInPlanRequest
    : public ModelBase
{
public:
    CreateTestCaseInPlanRequest();
    virtual ~CreateTestCaseInPlanRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTestCaseInPlanRequest members

    /// <summary>
    /// 项目唯一标识，固定长度32位字符
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 计划唯一标识，长度11-34位字符
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTestCaseInPlanRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTestCaseInPlanRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    CreateTestCaseInPlanRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateTestCaseInPlanRequest& dereference_from_shared_ptr(std::shared_ptr<CreateTestCaseInPlanRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestCaseInPlanRequest_H_
