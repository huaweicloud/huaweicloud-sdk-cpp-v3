
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RunTestCaseRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RunTestCaseRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/RunTestCaseRequestBody.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  RunTestCaseRequest
    : public ModelBase
{
public:
    RunTestCaseRequest();
    virtual ~RunTestCaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunTestCaseRequest members

    /// <summary>
    /// 项目唯一标识，固定长度32位字符
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RunTestCaseRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RunTestCaseRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    RunTestCaseRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RunTestCaseRequest& dereference_from_shared_ptr(std::shared_ptr<RunTestCaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RunTestCaseRequest_H_
