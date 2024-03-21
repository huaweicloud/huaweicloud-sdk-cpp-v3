
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/UpdateGlobalEipRequestBody.h>
#include <string>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateGlobalEipRequest
    : public ModelBase
{
public:
    UpdateGlobalEipRequest();
    virtual ~UpdateGlobalEipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGlobalEipRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getGlobalEipId() const;
    bool globalEipIdIsSet() const;
    void unsetglobalEipId();
    void setGlobalEipId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateGlobalEipRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateGlobalEipRequestBody& value);


protected:
    std::string globalEipId_;
    bool globalEipIdIsSet_;
    UpdateGlobalEipRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateGlobalEipRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateGlobalEipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipRequest_H_
