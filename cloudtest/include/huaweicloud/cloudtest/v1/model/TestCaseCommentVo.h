
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseCommentVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseCommentVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseCommentVo
    : public ModelBase
{
public:
    TestCaseCommentVo();
    virtual ~TestCaseCommentVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseCommentVo members

    /// <summary>
    /// 
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getNotifier();
    bool notifierIsSet() const;
    void unsetnotifier();
    void setNotifier(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTestCaseUri() const;
    bool testCaseUriIsSet() const;
    void unsettestCaseUri();
    void setTestCaseUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建时间时间戳
    /// </summary>

    int64_t getCreateTimeTimestamp() const;
    bool createTimeTimestampIsSet() const;
    void unsetcreateTimeTimestamp();
    void setCreateTimeTimestamp(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 更新时间时间戳
    /// </summary>

    int64_t getUpdateTimeTimestamp() const;
    bool updateTimeTimestampIsSet() const;
    void unsetupdateTimeTimestamp();
    void setUpdateTimeTimestamp(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string comment_;
    bool commentIsSet_;
    std::vector<std::string> notifier_;
    bool notifierIsSet_;
    std::string testCaseUri_;
    bool testCaseUriIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    int64_t createTimeTimestamp_;
    bool createTimeTimestampIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimeTimestamp_;
    bool updateTimeTimestampIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseCommentVo_H_
