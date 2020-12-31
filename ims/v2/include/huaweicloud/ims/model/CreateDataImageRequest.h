
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateDataImageRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateDataImageRequest_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ims/model/CreateDataImageRequestBody.h"

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
class HUAWEICLOUD_IMS_EXPORT  CreateDataImageRequest
    : public ModelBase
{
public:
    CreateDataImageRequest();
    virtual ~CreateDataImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDataImageRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateDataImageRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateDataImageRequestBody& value);


protected:
    CreateDataImageRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDataImageRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDataImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateDataImageRequest_H_
