
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StartDeployTaskRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StartDeployTaskRequest_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/EnvExecutionBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  StartDeployTaskRequest
    : public ModelBase
{
public:
    StartDeployTaskRequest();
    virtual ~StartDeployTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StartDeployTaskRequest members

    /// <summary>
    /// 部署任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EnvExecutionBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EnvExecutionBody& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    EnvExecutionBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartDeployTaskRequest& dereference_from_shared_ptr(std::shared_ptr<StartDeployTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StartDeployTaskRequest_H_
