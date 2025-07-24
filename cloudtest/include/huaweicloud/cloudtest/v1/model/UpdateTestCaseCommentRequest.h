
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseCommentRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseCommentRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestCaseCommentInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateTestCaseCommentRequest
    : public ModelBase
{
public:
    UpdateTestCaseCommentRequest();
    virtual ~UpdateTestCaseCommentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTestCaseCommentRequest members

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
    /// 
    /// </summary>

    TestCaseCommentInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TestCaseCommentInfo& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    std::string commentId_;
    bool commentIdIsSet_;
    TestCaseCommentInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTestCaseCommentRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTestCaseCommentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseCommentRequest_H_
