
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseDetailRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseDetailRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowTestCaseDetailRequest
    : public ModelBase
{
public:
    ShowTestCaseDetailRequest();
    virtual ~ShowTestCaseDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTestCaseDetailRequest members

    /// <summary>
    /// 项目唯一标识，固定长度32位字符
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 测试用例唯一标识，固定长度32位字符
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string testcaseId_;
    bool testcaseIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTestCaseDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTestCaseDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseDetailRequest_H_
