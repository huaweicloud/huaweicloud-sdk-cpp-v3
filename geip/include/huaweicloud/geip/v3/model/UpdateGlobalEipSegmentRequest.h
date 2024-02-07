
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipSegmentRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipSegmentRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/UpdateGlobalEipSegmentRequestBody.h>
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
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateGlobalEipSegmentRequest
    : public ModelBase
{
public:
    UpdateGlobalEipSegmentRequest();
    virtual ~UpdateGlobalEipSegmentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGlobalEipSegmentRequest members

    /// <summary>
    /// global_eip_segment_id
    /// </summary>

    std::string getGlobalEipSegmentId() const;
    bool globalEipSegmentIdIsSet() const;
    void unsetglobalEipSegmentId();
    void setGlobalEipSegmentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateGlobalEipSegmentRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateGlobalEipSegmentRequestBody& value);


protected:
    std::string globalEipSegmentId_;
    bool globalEipSegmentIdIsSet_;
    UpdateGlobalEipSegmentRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateGlobalEipSegmentRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateGlobalEipSegmentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipSegmentRequest_H_
