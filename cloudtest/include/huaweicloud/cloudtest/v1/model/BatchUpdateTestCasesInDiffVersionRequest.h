
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchUpdateTestCasesInDiffVersionRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchUpdateTestCasesInDiffVersionRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestCaseInfo.h>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BatchUpdateTestCasesInDiffVersionRequest
    : public ModelBase
{
public:
    BatchUpdateTestCasesInDiffVersionRequest();
    virtual ~BatchUpdateTestCasesInDiffVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateTestCasesInDiffVersionRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TestCaseInfo>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<TestCaseInfo>& value);


protected:
    std::vector<TestCaseInfo> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpdateTestCasesInDiffVersionRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpdateTestCasesInDiffVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchUpdateTestCasesInDiffVersionRequest_H_
