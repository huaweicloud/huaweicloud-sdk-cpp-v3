
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerTagsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerTagsRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_ECS_V2_EXPORT  ListServerTagsRequest
    : public ModelBase
{
public:
    ListServerTagsRequest();
    virtual ~ListServerTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServerTagsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListServerTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListServerTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerTagsRequest_H_
