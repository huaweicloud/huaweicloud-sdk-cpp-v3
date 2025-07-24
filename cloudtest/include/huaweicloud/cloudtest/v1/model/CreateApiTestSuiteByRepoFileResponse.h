
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateApiTestSuiteByRepoFileResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateApiTestSuiteByRepoFileResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreateApiTestSuiteByRepoFileResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateApiTestSuiteByRepoFileResponse();
    virtual ~CreateApiTestSuiteByRepoFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateApiTestSuiteByRepoFileResponse members

    /// <summary>
    /// 生成的测试套的id
    /// </summary>

    std::string getTestsuiteId() const;
    bool testsuiteIdIsSet() const;
    void unsettestsuiteId();
    void setTestsuiteId(const std::string& value);

    /// <summary>
    /// 生成的测试用例id列表
    /// </summary>

    std::vector<std::string>& getTestcaseIds();
    bool testcaseIdsIsSet() const;
    void unsettestcaseIds();
    void setTestcaseIds(const std::vector<std::string>& value);


protected:
    std::string testsuiteId_;
    bool testsuiteIdIsSet_;
    std::vector<std::string> testcaseIds_;
    bool testcaseIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateApiTestSuiteByRepoFileResponse_H_
