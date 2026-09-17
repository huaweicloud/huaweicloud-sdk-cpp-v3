
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCasesByConditionRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCasesByConditionRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/TestCasesListQueryInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTestCasesByConditionRequest
    : public ModelBase
{
public:
    ListTestCasesByConditionRequest();
    virtual ~ListTestCasesByConditionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTestCasesByConditionRequest members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TestCasesListQueryInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TestCasesListQueryInfo& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    TestCasesListQueryInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTestCasesByConditionRequest& dereference_from_shared_ptr(std::shared_ptr<ListTestCasesByConditionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestCasesByConditionRequest_H_
