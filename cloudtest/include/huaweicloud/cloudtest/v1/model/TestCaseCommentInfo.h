
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseCommentInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseCommentInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseCommentInfo
    : public ModelBase
{
public:
    TestCaseCommentInfo();
    virtual ~TestCaseCommentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseCommentInfo members

    /// <summary>
    /// 评论
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 通知人列表
    /// </summary>

    std::vector<std::string>& getNotifier();
    bool notifierIsSet() const;
    void unsetnotifier();
    void setNotifier(const std::vector<std::string>& value);

    /// <summary>
    /// 分支uri/测试计划uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);


protected:
    std::string comment_;
    bool commentIsSet_;
    std::vector<std::string> notifier_;
    bool notifierIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseCommentInfo_H_
