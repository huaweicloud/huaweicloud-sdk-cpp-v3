
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_ShowImageCacheRequest_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_ShowImageCacheRequest_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  ShowImageCacheRequest
    : public ModelBase
{
public:
    ShowImageCacheRequest();
    virtual ~ShowImageCacheRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowImageCacheRequest members

    /// <summary>
    /// **参数解释：** 镜像缓存ID。 **约束限制：** 不涉及 **取值范围：** 镜像缓存ID。 **默认取值：** 不涉及 
    /// </summary>

    std::string getImageCacheId() const;
    bool imageCacheIdIsSet() const;
    void unsetimageCacheId();
    void setImageCacheId(const std::string& value);


protected:
    std::string imageCacheId_;
    bool imageCacheIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowImageCacheRequest& dereference_from_shared_ptr(std::shared_ptr<ShowImageCacheRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_ShowImageCacheRequest_H_
