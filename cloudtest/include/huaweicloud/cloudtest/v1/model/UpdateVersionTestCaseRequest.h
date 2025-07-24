
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateVersionTestCaseRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateVersionTestCaseRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/TestCaseInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateVersionTestCaseRequest
    : public ModelBase
{
public:
    UpdateVersionTestCaseRequest();
    virtual ~UpdateVersionTestCaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVersionTestCaseRequest members

    /// <summary>
    /// 用例uri
    /// </summary>

    std::string getCaseId() const;
    bool caseIdIsSet() const;
    void unsetcaseId();
    void setCaseId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TestCaseInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TestCaseInfo& value);


protected:
    std::string caseId_;
    bool caseIdIsSet_;
    TestCaseInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateVersionTestCaseRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateVersionTestCaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateVersionTestCaseRequest_H_
