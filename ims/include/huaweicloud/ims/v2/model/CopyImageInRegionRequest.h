
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_CopyImageInRegionRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_CopyImageInRegionRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/CopyImageInRegionRequestBody.h>

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
class HUAWEICLOUD_IMS_V2_EXPORT  CopyImageInRegionRequest
    : public ModelBase
{
public:
    CopyImageInRegionRequest();
    virtual ~CopyImageInRegionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CopyImageInRegionRequest members

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

    CopyImageInRegionRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CopyImageInRegionRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    CopyImageInRegionRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CopyImageInRegionRequest& dereference_from_shared_ptr(std::shared_ptr<CopyImageInRegionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_CopyImageInRegionRequest_H_
