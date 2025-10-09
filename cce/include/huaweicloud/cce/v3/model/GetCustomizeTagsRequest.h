
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetCustomizeTagsRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetCustomizeTagsRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  GetCustomizeTagsRequest
    : public ModelBase
{
public:
    GetCustomizeTagsRequest();
    virtual ~GetCustomizeTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetCustomizeTagsRequest members

    /// <summary>
    /// **参数解释**： 资源类型 **约束限制：** 不涉及 **取值范围：** - cce-cluster：集群  **默认取值：** 不涉及
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GetCustomizeTagsRequest& dereference_from_shared_ptr(std::shared_ptr<GetCustomizeTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetCustomizeTagsRequest_H_
