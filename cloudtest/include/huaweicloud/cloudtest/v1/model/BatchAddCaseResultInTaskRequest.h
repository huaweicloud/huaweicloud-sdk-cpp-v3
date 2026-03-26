
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchAddCaseResultInTaskRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchAddCaseResultInTaskRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/BatchAddTestCaseResultInTaskInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BatchAddCaseResultInTaskRequest
    : public ModelBase
{
public:
    BatchAddCaseResultInTaskRequest();
    virtual ~BatchAddCaseResultInTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddCaseResultInTaskRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchAddTestCaseResultInTaskInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAddTestCaseResultInTaskInfo& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    BatchAddTestCaseResultInTaskInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAddCaseResultInTaskRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAddCaseResultInTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchAddCaseResultInTaskRequest_H_
