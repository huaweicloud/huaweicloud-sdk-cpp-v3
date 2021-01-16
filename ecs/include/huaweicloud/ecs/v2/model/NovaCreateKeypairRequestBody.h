
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaCreateKeypairOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaCreateKeypairRequestBody
    : public ModelBase
{
public:
    NovaCreateKeypairRequestBody();
    virtual ~NovaCreateKeypairRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateKeypairRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NovaCreateKeypairOption getKeypair() const;
    bool keypairIsSet() const;
    void unsetkeypair();
    void setKeypair(const NovaCreateKeypairOption& value);


protected:
    NovaCreateKeypairOption keypair_;
    bool keypairIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequestBody_H_
