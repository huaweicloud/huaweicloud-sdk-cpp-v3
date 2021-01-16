
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/GlanceCreateImageMetadataRequestBody.h>

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
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceCreateImageMetadataRequest
    : public ModelBase
{
public:
    GlanceCreateImageMetadataRequest();
    virtual ~GlanceCreateImageMetadataRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceCreateImageMetadataRequest members

    /// <summary>
    /// 
    /// </summary>

    GlanceCreateImageMetadataRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GlanceCreateImageMetadataRequestBody& value);


protected:
    GlanceCreateImageMetadataRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceCreateImageMetadataRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceCreateImageMetadataRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataRequest_H_
