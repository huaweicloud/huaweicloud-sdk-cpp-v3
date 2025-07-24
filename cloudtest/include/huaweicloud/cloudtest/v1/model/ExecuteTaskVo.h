
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteTaskVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteTaskVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TaskResultVo.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/TestResultVo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExecuteTaskVo
    : public ModelBase
{
public:
    ExecuteTaskVo();
    virtual ~ExecuteTaskVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteTaskVo members

    /// <summary>
    /// 标志
    /// </summary>

    bool isFlag() const;
    bool flagIsSet() const;
    void unsetflag();
    void setFlag(bool value);

    /// <summary>
    /// URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskResultVo getTaskResultVo() const;
    bool taskResultVoIsSet() const;
    void unsettaskResultVo();
    void setTaskResultVo(const TaskResultVo& value);

    /// <summary>
    /// 更新用例
    /// </summary>

    std::vector<std::string>& getUpdateCaseUriList();
    bool updateCaseUriListIsSet() const;
    void unsetupdateCaseUriList();
    void setUpdateCaseUriList(const std::vector<std::string>& value);

    /// <summary>
    /// 用例结果列表
    /// </summary>

    std::vector<TestResultVo>& getTestCaseResultList();
    bool testCaseResultListIsSet() const;
    void unsettestCaseResultList();
    void setTestCaseResultList(const std::vector<TestResultVo>& value);


protected:
    bool flag_;
    bool flagIsSet_;
    std::string uri_;
    bool uriIsSet_;
    TaskResultVo taskResultVo_;
    bool taskResultVoIsSet_;
    std::vector<std::string> updateCaseUriList_;
    bool updateCaseUriListIsSet_;
    std::vector<TestResultVo> testCaseResultList_;
    bool testCaseResultListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteTaskVo_H_
