
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTestCasesByIssueVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTestCasesByIssueVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestCaseVo.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryTestCasesByIssueVo
    : public ModelBase
{
public:
    QueryTestCasesByIssueVo();
    virtual ~QueryTestCasesByIssueVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTestCasesByIssueVo members

    /// <summary>
    /// 用例状态
    /// </summary>

    std::map<std::string, int32_t>& getCaseStatusMap();
    bool caseStatusMapIsSet() const;
    void unsetcaseStatusMap();
    void setCaseStatusMap(std::map<std::string, int32_t> value);

    /// <summary>
    /// 新建态
    /// </summary>

    int32_t getNewCreate() const;
    bool newCreateIsSet() const;
    void unsetnewCreate();
    void setNewCreate(int32_t value);

    /// <summary>
    /// 设计态
    /// </summary>

    int32_t getDesigning() const;
    bool designingIsSet() const;
    void unsetdesigning();
    void setDesigning(int32_t value);

    /// <summary>
    /// 完成态
    /// </summary>

    int32_t getFinished() const;
    bool finishedIsSet() const;
    void unsetfinished();
    void setFinished(int32_t value);

    /// <summary>
    /// 测试态
    /// </summary>

    int32_t getTesting() const;
    bool testingIsSet() const;
    void unsettesting();
    void setTesting(int32_t value);

    /// <summary>
    /// 需求关联的用例数量
    /// </summary>

    int32_t getTestCaseNum() const;
    bool testCaseNumIsSet() const;
    void unsettestCaseNum();
    void setTestCaseNum(int32_t value);

    /// <summary>
    /// 用例详情
    /// </summary>

    std::vector<TestCaseVo>& getTestcases();
    bool testcasesIsSet() const;
    void unsettestcases();
    void setTestcases(const std::vector<TestCaseVo>& value);

    /// <summary>
    /// 用例总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::map<std::string, int32_t> caseStatusMap_;
    bool caseStatusMapIsSet_;
    int32_t newCreate_;
    bool newCreateIsSet_;
    int32_t designing_;
    bool designingIsSet_;
    int32_t finished_;
    bool finishedIsSet_;
    int32_t testing_;
    bool testingIsSet_;
    int32_t testCaseNum_;
    bool testCaseNumIsSet_;
    std::vector<TestCaseVo> testcases_;
    bool testcasesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTestCasesByIssueVo_H_
