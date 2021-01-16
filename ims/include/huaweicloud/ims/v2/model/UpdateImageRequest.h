
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_UpdateImageRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_UpdateImageRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/UpdateImageRequestBody.h>
#include <string>
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
class HUAWEICLOUD_IMS_V2_EXPORT  UpdateImageRequest
    : public ModelBase
{
public:
    UpdateImageRequest();
    virtual ~UpdateImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateImageRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<UpdateImageRequestBody>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<UpdateImageRequestBody>& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::vector<UpdateImageRequestBody> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateImageRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_UpdateImageRequest_H_
