
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_DeleteGlobalEipRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_DeleteGlobalEipRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  DeleteGlobalEipRequest
    : public ModelBase
{
public:
    DeleteGlobalEipRequest();
    virtual ~DeleteGlobalEipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteGlobalEipRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getGlobalEipId() const;
    bool globalEipIdIsSet() const;
    void unsetglobalEipId();
    void setGlobalEipId(const std::string& value);


protected:
    std::string globalEipId_;
    bool globalEipIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteGlobalEipRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteGlobalEipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_DeleteGlobalEipRequest_H_
