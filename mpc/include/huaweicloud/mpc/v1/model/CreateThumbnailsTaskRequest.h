
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateThumbnailsTaskRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateThumbnailsTaskRequest_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/CreateThumbReq.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  CreateThumbnailsTaskRequest
    : public ModelBase
{
public:
    CreateThumbnailsTaskRequest();
    virtual ~CreateThumbnailsTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateThumbnailsTaskRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateThumbReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateThumbReq& value);


protected:
    CreateThumbReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateThumbnailsTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CreateThumbnailsTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateThumbnailsTaskRequest_H_
