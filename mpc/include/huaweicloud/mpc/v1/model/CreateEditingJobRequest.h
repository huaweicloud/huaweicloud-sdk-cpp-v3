
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateEditingJobRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateEditingJobRequest_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/CreateEditingJobReq.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  CreateEditingJobRequest
    : public ModelBase
{
public:
    CreateEditingJobRequest();
    virtual ~CreateEditingJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateEditingJobRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateEditingJobReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateEditingJobReq& value);


protected:
    CreateEditingJobReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateEditingJobRequest& dereference_from_shared_ptr(std::shared_ptr<CreateEditingJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateEditingJobRequest_H_
