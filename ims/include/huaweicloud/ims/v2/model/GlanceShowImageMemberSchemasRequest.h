
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageMemberSchemasRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageMemberSchemasRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceShowImageMemberSchemasRequest
    : public ModelBase
{
public:
    GlanceShowImageMemberSchemasRequest();
    virtual ~GlanceShowImageMemberSchemasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceShowImageMemberSchemasRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceShowImageMemberSchemasRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceShowImageMemberSchemasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageMemberSchemasRequest_H_
