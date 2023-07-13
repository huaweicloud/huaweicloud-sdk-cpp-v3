
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaCreateServersRequestBody.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaCreateServersRequest
    : public ModelBase
{
public:
    NovaCreateServersRequest();
    virtual ~NovaCreateServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateServersRequest members

    /// <summary>
    /// 微版本头
    /// </summary>

    std::string getOpenStackAPIVersion() const;
    bool openStackAPIVersionIsSet() const;
    void unsetopenStackAPIVersion();
    void setOpenStackAPIVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NovaCreateServersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NovaCreateServersRequestBody& value);


protected:
    std::string openStackAPIVersion_;
    bool openStackAPIVersionIsSet_;
    NovaCreateServersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaCreateServersRequest& dereference_from_shared_ptr(std::shared_ptr<NovaCreateServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersRequest_H_
