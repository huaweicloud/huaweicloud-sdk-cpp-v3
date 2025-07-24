
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddCaseResultFourRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddCaseResultFourRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/AddTestCaseResultInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AddCaseResultFourRequest
    : public ModelBase
{
public:
    AddCaseResultFourRequest();
    virtual ~AddCaseResultFourRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddCaseResultFourRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 版本ID
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 用例uri
    /// </summary>

    std::string getCaseUri() const;
    bool caseUriIsSet() const;
    void unsetcaseUri();
    void setCaseUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddTestCaseResultInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddTestCaseResultInfo& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string caseUri_;
    bool caseUriIsSet_;
    AddTestCaseResultInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddCaseResultFourRequest& dereference_from_shared_ptr(std::shared_ptr<AddCaseResultFourRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddCaseResultFourRequest_H_
