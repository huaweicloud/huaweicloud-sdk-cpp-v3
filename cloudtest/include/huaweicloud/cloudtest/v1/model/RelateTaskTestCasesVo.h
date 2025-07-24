
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RelateTaskTestCasesVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RelateTaskTestCasesVo_H_


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
/// 用例及任务信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  RelateTaskTestCasesVo
    : public ModelBase
{
public:
    RelateTaskTestCasesVo();
    virtual ~RelateTaskTestCasesVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RelateTaskTestCasesVo members

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getTestCaseNum() const;
    bool testCaseNumIsSet() const;
    void unsettestCaseNum();
    void setTestCaseNum(const std::string& value);

    /// <summary>
    /// 用例名
    /// </summary>

    std::string getTestCaseName() const;
    bool testCaseNameIsSet() const;
    void unsettestCaseName();
    void setTestCaseName(const std::string& value);

    /// <summary>
    /// 用例uri
    /// </summary>

    std::string getTestCaseUri() const;
    bool testCaseUriIsSet() const;
    void unsettestCaseUri();
    void setTestCaseUri(const std::string& value);

    /// <summary>
    /// 任务uri
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 任务名
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 任务编号
    /// </summary>

    std::string getTaskNum() const;
    bool taskNumIsSet() const;
    void unsettaskNum();
    void setTaskNum(const std::string& value);

    /// <summary>
    /// 任务创建人
    /// </summary>

    std::string getTaskCreator() const;
    bool taskCreatorIsSet() const;
    void unsettaskCreator();
    void setTaskCreator(const std::string& value);


protected:
    std::string testCaseNum_;
    bool testCaseNumIsSet_;
    std::string testCaseName_;
    bool testCaseNameIsSet_;
    std::string testCaseUri_;
    bool testCaseUriIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string taskNum_;
    bool taskNumIsSet_;
    std::string taskCreator_;
    bool taskCreatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RelateTaskTestCasesVo_H_
