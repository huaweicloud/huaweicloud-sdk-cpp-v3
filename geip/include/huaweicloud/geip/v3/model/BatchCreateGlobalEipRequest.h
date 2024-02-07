
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateGlobalEipRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateGlobalEipRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/BatchCreateGlobalEipRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchCreateGlobalEipRequest
    : public ModelBase
{
public:
    BatchCreateGlobalEipRequest();
    virtual ~BatchCreateGlobalEipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateGlobalEipRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchCreateGlobalEipRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateGlobalEipRequestBody& value);


protected:
    BatchCreateGlobalEipRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateGlobalEipRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateGlobalEipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateGlobalEipRequest_H_
