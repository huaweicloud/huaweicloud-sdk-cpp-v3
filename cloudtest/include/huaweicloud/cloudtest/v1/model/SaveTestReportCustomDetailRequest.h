
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SaveTestReportCustomDetailRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SaveTestReportCustomDetailRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestReportCustomDetailInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SaveTestReportCustomDetailRequest
    : public ModelBase
{
public:
    SaveTestReportCustomDetailRequest();
    virtual ~SaveTestReportCustomDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SaveTestReportCustomDetailRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 计划uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 测试报告Uri
    /// </summary>

    std::string getReportUri() const;
    bool reportUriIsSet() const;
    void unsetreportUri();
    void setReportUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TestReportCustomDetailInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TestReportCustomDetailInfo& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string reportUri_;
    bool reportUriIsSet_;
    TestReportCustomDetailInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SaveTestReportCustomDetailRequest& dereference_from_shared_ptr(std::shared_ptr<SaveTestReportCustomDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SaveTestReportCustomDetailRequest_H_
