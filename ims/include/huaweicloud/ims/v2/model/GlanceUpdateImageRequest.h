
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageRequest_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/GlanceUpdateImageRequestBody.h>
#include <vector>

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
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceUpdateImageRequest
    : public ModelBase
{
public:
    GlanceUpdateImageRequest();
    virtual ~GlanceUpdateImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlanceUpdateImageRequest members

    /// <summary>
    /// 镜像ID
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<GlanceUpdateImageRequestBody>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<GlanceUpdateImageRequestBody>& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::vector<GlanceUpdateImageRequestBody> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceUpdateImageRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceUpdateImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageRequest_H_
