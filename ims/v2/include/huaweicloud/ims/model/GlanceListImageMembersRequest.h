
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImageMembersRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImageMembersRequest_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  GlanceListImageMembersRequest
    : public ModelBase
{
public:
    GlanceListImageMembersRequest();
    virtual ~GlanceListImageMembersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceListImageMembersRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceListImageMembersRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceListImageMembersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImageMembersRequest_H_
