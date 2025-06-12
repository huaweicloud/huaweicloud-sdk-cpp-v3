
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateRecycleBinReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateRecycleBinRequest
    : public ModelBase
{
public:
    UpdateRecycleBinRequest();
    virtual ~UpdateRecycleBinRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRecycleBinRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateRecycleBinReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateRecycleBinReq& value);


protected:
    UpdateRecycleBinReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRecycleBinRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRecycleBinRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinRequest_H_
