
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskAssignCaseVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskAssignCaseVo_H_


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
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskAssignCaseVo
    : public ModelBase
{
public:
    TaskAssignCaseVo();
    virtual ~TaskAssignCaseVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskAssignCaseVo members

    /// <summary>
    /// 排序顺序
    /// </summary>

    int32_t getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(int32_t value);

    /// <summary>
    /// 用例uri
    /// </summary>

    std::string getCaseUri() const;
    bool caseUriIsSet() const;
    void unsetcaseUri();
    void setCaseUri(const std::string& value);

    /// <summary>
    /// 是否可用
    /// </summary>

    int32_t getIsAvailable() const;
    bool isAvailableIsSet() const;
    void unsetisAvailable();
    void setIsAvailable(int32_t value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getTestCaseName() const;
    bool testCaseNameIsSet() const;
    void unsettestCaseName();
    void setTestCaseName(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getTestCaseNumber() const;
    bool testCaseNumberIsSet() const;
    void unsettestCaseNumber();
    void setTestCaseNumber(const std::string& value);


protected:
    int32_t sort_;
    bool sortIsSet_;
    std::string caseUri_;
    bool caseUriIsSet_;
    int32_t isAvailable_;
    bool isAvailableIsSet_;
    std::string testCaseName_;
    bool testCaseNameIsSet_;
    std::string testCaseNumber_;
    bool testCaseNumberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskAssignCaseVo_H_
