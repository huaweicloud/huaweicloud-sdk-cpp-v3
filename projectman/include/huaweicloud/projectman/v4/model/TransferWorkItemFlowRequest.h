
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_TransferWorkItemFlowRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_TransferWorkItemFlowRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/WorkItemFlowRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  TransferWorkItemFlowRequest
    : public ModelBase
{
public:
    TransferWorkItemFlowRequest();
    virtual ~TransferWorkItemFlowRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransferWorkItemFlowRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkItemFlowRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WorkItemFlowRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    WorkItemFlowRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    TransferWorkItemFlowRequest& dereference_from_shared_ptr(std::shared_ptr<TransferWorkItemFlowRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_TransferWorkItemFlowRequest_H_
