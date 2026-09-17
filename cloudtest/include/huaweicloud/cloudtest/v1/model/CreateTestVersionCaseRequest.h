
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestVersionCaseRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestVersionCaseRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreateTestVersionCaseRequest
    : public ModelBase
{
public:
    CreateTestVersionCaseRequest();
    virtual ~CreateTestVersionCaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTestVersionCaseRequest members

    /// <summary>
    /// 分支或者迭代uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TestCaseInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TestCaseInfo& value);


protected:
    std::string versionUri_;
    bool versionUriIsSet_;
    TestCaseInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateTestVersionCaseRequest& dereference_from_shared_ptr(std::shared_ptr<CreateTestVersionCaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestVersionCaseRequest_H_
