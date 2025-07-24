
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseReviewVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseReviewVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/NameAndIdVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseReviewVo
    : public ModelBase
{
public:
    TestCaseReviewVo();
    virtual ~TestCaseReviewVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseReviewVo members

    /// <summary>
    /// 评审URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getTestcaseName() const;
    bool testcaseNameIsSet() const;
    void unsettestcaseName();
    void setTestcaseName(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getTestcaseNumber() const;
    bool testcaseNumberIsSet() const;
    void unsettestcaseNumber();
    void setTestcaseNumber(const std::string& value);

    /// <summary>
    /// 用例阶段
    /// </summary>

    std::string getTestcaseStage() const;
    bool testcaseStageIsSet() const;
    void unsettestcaseStage();
    void setTestcaseStage(const std::string& value);

    /// <summary>
    /// 用例修改时间
    /// </summary>

    std::string getTestcaseLastModified() const;
    bool testcaseLastModifiedIsSet() const;
    void unsettestcaseLastModified();
    void setTestcaseLastModified(const std::string& value);

    /// <summary>
    /// 用例修改时间时间戳
    /// </summary>

    int64_t getTestcaseLastModifiedTimestamp() const;
    bool testcaseLastModifiedTimestampIsSet() const;
    void unsettestcaseLastModifiedTimestamp();
    void setTestcaseLastModifiedTimestamp(int64_t value);

    /// <summary>
    /// 分支用例URI
    /// </summary>

    std::string getTestcaseUri() const;
    bool testcaseUriIsSet() const;
    void unsettestcaseUri();
    void setTestcaseUri(const std::string& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 版本名称
    /// </summary>

    std::string getVersionName() const;
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::string& value);

    /// <summary>
    /// 评审意见
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 闭环意见
    /// </summary>

    std::string getCloseComment() const;
    bool closeCommentIsSet() const;
    void unsetcloseComment();
    void setCloseComment(const std::string& value);

    /// <summary>
    /// 评审人
    /// </summary>

    std::string getReviewer() const;
    bool reviewerIsSet() const;
    void unsetreviewer();
    void setReviewer(const std::string& value);

    /// <summary>
    /// 评审创建时间
    /// </summary>

    std::string getCreationDate() const;
    bool creationDateIsSet() const;
    void unsetcreationDate();
    void setCreationDate(const std::string& value);

    /// <summary>
    /// 评审创建时间时间戳
    /// </summary>

    int64_t getCreationDateTimestamp() const;
    bool creationDateTimestampIsSet() const;
    void unsetcreationDateTimestamp();
    void setCreationDateTimestamp(int64_t value);

    /// <summary>
    /// 指定的闭环人列表
    /// </summary>

    std::vector<NameAndIdVo>& getCloseUserIds();
    bool closeUserIdsIsSet() const;
    void unsetcloseUserIds();
    void setCloseUserIds(const std::vector<NameAndIdVo>& value);

    /// <summary>
    /// 实际闭环人
    /// </summary>

    std::string getActualClosePerson() const;
    bool actualClosePersonIsSet() const;
    void unsetactualClosePerson();
    void setActualClosePerson(const std::string& value);

    /// <summary>
    /// 评审状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 评审闭环时间
    /// </summary>

    std::string getCloseDate() const;
    bool closeDateIsSet() const;
    void unsetcloseDate();
    void setCloseDate(const std::string& value);

    /// <summary>
    /// 评审闭环时间时间戳
    /// </summary>

    int64_t getCloseDateTimestamp() const;
    bool closeDateTimestampIsSet() const;
    void unsetcloseDateTimestamp();
    void setCloseDateTimestamp(int64_t value);

    /// <summary>
    /// 期望闭环时间
    /// </summary>

    std::string getExpectCloseDate() const;
    bool expectCloseDateIsSet() const;
    void unsetexpectCloseDate();
    void setExpectCloseDate(const std::string& value);

    /// <summary>
    /// 期望闭环时间时间戳
    /// </summary>

    int64_t getExpectCloseDateTimestamp() const;
    bool expectCloseDateTimestampIsSet() const;
    void unsetexpectCloseDateTimestamp();
    void setExpectCloseDateTimestamp(int64_t value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string testcaseName_;
    bool testcaseNameIsSet_;
    std::string testcaseNumber_;
    bool testcaseNumberIsSet_;
    std::string testcaseStage_;
    bool testcaseStageIsSet_;
    std::string testcaseLastModified_;
    bool testcaseLastModifiedIsSet_;
    int64_t testcaseLastModifiedTimestamp_;
    bool testcaseLastModifiedTimestampIsSet_;
    std::string testcaseUri_;
    bool testcaseUriIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string versionName_;
    bool versionNameIsSet_;
    std::string comment_;
    bool commentIsSet_;
    std::string closeComment_;
    bool closeCommentIsSet_;
    std::string reviewer_;
    bool reviewerIsSet_;
    std::string creationDate_;
    bool creationDateIsSet_;
    int64_t creationDateTimestamp_;
    bool creationDateTimestampIsSet_;
    std::vector<NameAndIdVo> closeUserIds_;
    bool closeUserIdsIsSet_;
    std::string actualClosePerson_;
    bool actualClosePersonIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string closeDate_;
    bool closeDateIsSet_;
    int64_t closeDateTimestamp_;
    bool closeDateTimestampIsSet_;
    std::string expectCloseDate_;
    bool expectCloseDateIsSet_;
    int64_t expectCloseDateTimestamp_;
    bool expectCloseDateTimestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseReviewVo_H_
