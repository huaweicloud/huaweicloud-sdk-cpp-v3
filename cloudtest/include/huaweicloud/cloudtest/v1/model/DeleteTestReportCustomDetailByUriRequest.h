
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTestReportCustomDetailByUriRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTestReportCustomDetailByUriRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteTestReportCustomDetailByUriRequest
    : public ModelBase
{
public:
    DeleteTestReportCustomDetailByUriRequest();
    virtual ~DeleteTestReportCustomDetailByUriRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTestReportCustomDetailByUriRequest members

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
    /// 测试报告自定义模块Uri
    /// </summary>

    std::string getCustomInfoUri() const;
    bool customInfoUriIsSet() const;
    void unsetcustomInfoUri();
    void setCustomInfoUri(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string reportUri_;
    bool reportUriIsSet_;
    std::string customInfoUri_;
    bool customInfoUriIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTestReportCustomDetailByUriRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTestReportCustomDetailByUriRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTestReportCustomDetailByUriRequest_H_
