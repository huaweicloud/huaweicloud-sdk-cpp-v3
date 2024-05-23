
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_UpdateResourceShareResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_UpdateResourceShareResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/ResourceShare.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  UpdateResourceShareResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateResourceShareResponse();
    virtual ~UpdateResourceShareResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateResourceShareResponse members

    /// <summary>
    /// 
    /// </summary>

    ResourceShare getResourceShare() const;
    bool resourceShareIsSet() const;
    void unsetresourceShare();
    void setResourceShare(const ResourceShare& value);


protected:
    ResourceShare resourceShare_;
    bool resourceShareIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_UpdateResourceShareResponse_H_
