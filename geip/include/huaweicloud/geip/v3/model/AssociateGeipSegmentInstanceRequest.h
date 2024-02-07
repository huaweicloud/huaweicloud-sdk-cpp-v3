
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateGeipSegmentInstanceRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateGeipSegmentInstanceRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/geip/v3/model/AssociateInstanceGlobalEipSegmentRequestBody.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  AssociateGeipSegmentInstanceRequest
    : public ModelBase
{
public:
    AssociateGeipSegmentInstanceRequest();
    virtual ~AssociateGeipSegmentInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateGeipSegmentInstanceRequest members

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

    AssociateInstanceGlobalEipSegmentRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AssociateInstanceGlobalEipSegmentRequestBody& value);


protected:
    std::string globalEipSegmentId_;
    bool globalEipSegmentIdIsSet_;
    AssociateInstanceGlobalEipSegmentRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateGeipSegmentInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateGeipSegmentInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateGeipSegmentInstanceRequest_H_
