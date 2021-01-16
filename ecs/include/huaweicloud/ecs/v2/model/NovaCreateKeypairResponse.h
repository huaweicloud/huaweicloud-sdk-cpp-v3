
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaKeypair.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaCreateKeypairResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaCreateKeypairResponse();
    virtual ~NovaCreateKeypairResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateKeypairResponse members

    /// <summary>
    /// 
    /// </summary>

    NovaKeypair getKeypair() const;
    bool keypairIsSet() const;
    void unsetkeypair();
    void setKeypair(const NovaKeypair& value);


protected:
    NovaKeypair keypair_;
    bool keypairIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairResponse_H_
