
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTestCaseCommentRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTestCaseCommentRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteTestCaseCommentRequest
    : public ModelBase
{
public:
    DeleteTestCaseCommentRequest();
    virtual ~DeleteTestCaseCommentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTestCaseCommentRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 用例uri
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);

    /// <summary>
    /// 评论uri
    /// </summary>

    std::string getCommentId() const;
    bool commentIdIsSet() const;
    void unsetcommentId();
    void setCommentId(const std::string& value);

    /// <summary>
    /// 分支或者测试计划uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    std::string commentId_;
    bool commentIdIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTestCaseCommentRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTestCaseCommentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTestCaseCommentRequest_H_
