
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaListKeypairsResult.h>
#include <vector>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListKeypairsResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaListKeypairsResponse();
    virtual ~NovaListKeypairsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaListKeypairsResponse members

    /// <summary>
    /// 密钥信息列表。
    /// </summary>

    std::vector<NovaListKeypairsResult>& getKeypairs();
    bool keypairsIsSet() const;
    void unsetkeypairs();
    void setKeypairs(const std::vector<NovaListKeypairsResult>& value);


protected:
    std::vector<NovaListKeypairsResult> keypairs_;
    bool keypairsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsResponse_H_
