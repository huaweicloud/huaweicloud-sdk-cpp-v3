
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckDeployStatusRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckDeployStatusRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CheckDeployStatusRequest
    : public ModelBase
{
public:
    CheckDeployStatusRequest();
    virtual ~CheckDeployStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckDeployStatusRequest members

    /// <summary>
    /// task_id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// record_id
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// 是否返回部署任务各步骤的状态， true返回， false不返回
    /// </summary>

    bool isStepState() const;
    bool stepStateIsSet() const;
    void unsetstepState();
    void setStepState(bool value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string recordId_;
    bool recordIdIsSet_;
    bool stepState_;
    bool stepStateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckDeployStatusRequest& dereference_from_shared_ptr(std::shared_ptr<CheckDeployStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckDeployStatusRequest_H_
