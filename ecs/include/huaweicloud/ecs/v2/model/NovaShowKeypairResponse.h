
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowKeypairResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowKeypairResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaKeypairDetail.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaShowKeypairResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaShowKeypairResponse();
    virtual ~NovaShowKeypairResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaShowKeypairResponse members

    /// <summary>
    /// 
    /// </summary>

    NovaKeypairDetail getKeypair() const;
    bool keypairIsSet() const;
    void unsetkeypair();
    void setKeypair(const NovaKeypairDetail& value);


protected:
    NovaKeypairDetail keypair_;
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowKeypairResponse_H_
