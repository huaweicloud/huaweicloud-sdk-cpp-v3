
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseReviewsRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseReviewsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowTestCaseReviewsRequest
    : public ModelBase
{
public:
    ShowTestCaseReviewsRequest();
    virtual ~ShowTestCaseReviewsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTestCaseReviewsRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 当前页数
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 分支用例URI
    /// </summary>

    std::string getTestcaseUri() const;
    bool testcaseUriIsSet() const;
    void unsettestcaseUri();
    void setTestcaseUri(const std::string& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string testcaseUri_;
    bool testcaseUriIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTestCaseReviewsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTestCaseReviewsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseReviewsRequest_H_
