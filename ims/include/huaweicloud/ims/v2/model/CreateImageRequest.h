
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateImageRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateImageRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/CreateImageRequestBody.h>

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
class HUAWEICLOUD_IMS_V2_EXPORT  CreateImageRequest
    : public ModelBase
{
public:
    CreateImageRequest();
    virtual ~CreateImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateImageRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateImageRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateImageRequestBody& value);


protected:
    CreateImageRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateImageRequest& dereference_from_shared_ptr(std::shared_ptr<CreateImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateImageRequest_H_
