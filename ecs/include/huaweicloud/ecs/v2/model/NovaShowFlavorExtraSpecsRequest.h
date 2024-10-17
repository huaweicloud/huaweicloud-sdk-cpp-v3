
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowFlavorExtraSpecsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowFlavorExtraSpecsRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaShowFlavorExtraSpecsRequest
    : public ModelBase
{
public:
    NovaShowFlavorExtraSpecsRequest();
    virtual ~NovaShowFlavorExtraSpecsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaShowFlavorExtraSpecsRequest members

    /// <summary>
    /// 规格id。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);


protected:
    std::string flavorId_;
    bool flavorIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaShowFlavorExtraSpecsRequest& dereference_from_shared_ptr(std::shared_ptr<NovaShowFlavorExtraSpecsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowFlavorExtraSpecsRequest_H_
