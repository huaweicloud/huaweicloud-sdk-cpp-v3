
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowCaseResultRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowCaseResultRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/QueryCaseResultInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowCaseResultRequest
    : public ModelBase
{
public:
    ShowCaseResultRequest();
    virtual ~ShowCaseResultRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCaseResultRequest members

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

    QueryCaseResultInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QueryCaseResultInfo& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string caseUri_;
    bool caseUriIsSet_;
    QueryCaseResultInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCaseResultRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCaseResultRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowCaseResultRequest_H_
