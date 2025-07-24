
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseDetailV2Request_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseDetailV2Request_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowTestCaseDetailV2Request
    : public ModelBase
{
public:
    ShowTestCaseDetailV2Request();
    virtual ~ShowTestCaseDetailV2Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTestCaseDetailV2Request members

    /// <summary>
    /// 项目唯一标识，固定长度32位字符
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 用例编号，长度为[3-128]位字符
    /// </summary>

    std::string getTestcaseNumber() const;
    bool testcaseNumberIsSet() const;
    void unsettestcaseNumber();
    void setTestcaseNumber(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string testcaseNumber_;
    bool testcaseNumberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTestCaseDetailV2Request& dereference_from_shared_ptr(std::shared_ptr<ShowTestCaseDetailV2Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseDetailV2Request_H_
