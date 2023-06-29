
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteThumbnailsTaskRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteThumbnailsTaskRequest_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  DeleteThumbnailsTaskRequest
    : public ModelBase
{
public:
    DeleteThumbnailsTaskRequest();
    virtual ~DeleteThumbnailsTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteThumbnailsTaskRequest members

    /// <summary>
    /// 任务ID 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteThumbnailsTaskRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteThumbnailsTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteThumbnailsTaskRequest_H_
