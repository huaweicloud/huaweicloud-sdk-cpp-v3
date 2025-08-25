
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_CreateImageCacheRequest_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_CreateImageCacheRequest_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v5/model/CreateImageCacheRequestBody.h>

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
class HUAWEICLOUD_CCE_V5_EXPORT  CreateImageCacheRequest
    : public ModelBase
{
public:
    CreateImageCacheRequest();
    virtual ~CreateImageCacheRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateImageCacheRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateImageCacheRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateImageCacheRequestBody& value);


protected:
    CreateImageCacheRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateImageCacheRequest& dereference_from_shared_ptr(std::shared_ptr<CreateImageCacheRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_CreateImageCacheRequest_H_
