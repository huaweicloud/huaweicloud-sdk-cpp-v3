
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowApiTestcaseHistoriesResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowApiTestcaseHistoriesResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestcaseResult.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowApiTestcaseHistoriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowApiTestcaseHistoriesResponse();
    virtual ~ShowApiTestcaseHistoriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowApiTestcaseHistoriesResponse members

    /// <summary>
    /// 测试用例总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 测试服务id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 测试用例id
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);

    /// <summary>
    /// 测试用例名称
    /// </summary>

    std::string getTestcaseName() const;
    bool testcaseNameIsSet() const;
    void unsettestcaseName();
    void setTestcaseName(const std::string& value);

    /// <summary>
    /// 测试用例结果集
    /// </summary>

    std::vector<TestcaseResult>& getTestcaseResults();
    bool testcaseResultsIsSet() const;
    void unsettestcaseResults();
    void setTestcaseResults(const std::vector<TestcaseResult>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    std::string testcaseName_;
    bool testcaseNameIsSet_;
    std::vector<TestcaseResult> testcaseResults_;
    bool testcaseResultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowApiTestcaseHistoriesResponse_H_
