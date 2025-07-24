
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasesByProjectIssuesRelationResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasesByProjectIssuesRelationResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cloudtest/v1/model/IssuesRelationTestCaseVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTestcasesByProjectIssuesRelationResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTestcasesByProjectIssuesRelationResponse();
    virtual ~ListTestcasesByProjectIssuesRelationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTestcasesByProjectIssuesRelationResponse members

    /// <summary>
    /// 用例详情
    /// </summary>

    std::vector<IssuesRelationTestCaseVo>& getTestcases();
    bool testcasesIsSet() const;
    void unsettestcases();
    void setTestcases(const std::vector<IssuesRelationTestCaseVo>& value);

    /// <summary>
    /// 用例总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页数量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);


protected:
    std::vector<IssuesRelationTestCaseVo> testcases_;
    bool testcasesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasesByProjectIssuesRelationResponse_H_
