
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequest_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/NovaCreateKeypairRequestBody.h"
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
class HUAWEICLOUD_ECS_EXPORT  NovaCreateKeypairRequest
    : public ModelBase
{
public:
    NovaCreateKeypairRequest();
    virtual ~NovaCreateKeypairRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateKeypairRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getOpenStackAPIVersion() const;
    bool openStackAPIVersionIsSet() const;
    void unsetopenStackAPIVersion();
    void setOpenStackAPIVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NovaCreateKeypairRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NovaCreateKeypairRequestBody& value);


protected:
    std::string openStackAPIVersion_;
    bool openStackAPIVersionIsSet_;
    NovaCreateKeypairRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaCreateKeypairRequest& dereference_from_shared_ptr(std::shared_ptr<NovaCreateKeypairRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequest_H_
