
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsResult_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsResult_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaSimpleKeypair.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListKeypairsResult
    : public ModelBase
{
public:
    NovaListKeypairsResult();
    virtual ~NovaListKeypairsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListKeypairsResult members

    /// <summary>
    /// 
    /// </summary>

    NovaSimpleKeypair getKeypair() const;
    bool keypairIsSet() const;
    void unsetkeypair();
    void setKeypair(const NovaSimpleKeypair& value);


protected:
    NovaSimpleKeypair keypair_;
    bool keypairIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsResult_H_
