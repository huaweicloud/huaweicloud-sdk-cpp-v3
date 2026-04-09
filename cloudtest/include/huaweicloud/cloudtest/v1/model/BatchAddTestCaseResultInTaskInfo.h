
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchAddTestCaseResultInTaskInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchAddTestCaseResultInTaskInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/AddTestCaseResultInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BatchAddTestCaseResultInTaskInfo
    : public ModelBase
{
public:
    BatchAddTestCaseResultInTaskInfo();
    virtual ~BatchAddTestCaseResultInTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddTestCaseResultInTaskInfo members

    /// <summary>
    /// 
    /// </summary>

    AddTestCaseResultInfo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const AddTestCaseResultInfo& value);

    /// <summary>
    /// 任务uri
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 测试套结果URI
    /// </summary>

    std::string getTaskResultUri() const;
    bool taskResultUriIsSet() const;
    void unsettaskResultUri();
    void setTaskResultUri(const std::string& value);

    /// <summary>
    /// 用例uri列表
    /// </summary>

    std::vector<std::string>& getTestCaseUris();
    bool testCaseUrisIsSet() const;
    void unsettestCaseUris();
    void setTestCaseUris(const std::vector<std::string>& value);

    /// <summary>
    /// 是否异步执行
    /// </summary>

    bool isIsAsyn() const;
    bool isAsynIsSet() const;
    void unsetisAsyn();
    void setIsAsyn(bool value);


protected:
    AddTestCaseResultInfo result_;
    bool resultIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    std::string taskResultUri_;
    bool taskResultUriIsSet_;
    std::vector<std::string> testCaseUris_;
    bool testCaseUrisIsSet_;
    bool isAsyn_;
    bool isAsynIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchAddTestCaseResultInTaskInfo_H_
