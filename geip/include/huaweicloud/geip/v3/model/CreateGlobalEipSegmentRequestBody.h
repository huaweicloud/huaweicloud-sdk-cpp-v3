
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipSegmentRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipSegmentRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/CreateGlobalEipSegmentRequestBody_global_eip_segment.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  CreateGlobalEipSegmentRequestBody
    : public ModelBase
{
public:
    CreateGlobalEipSegmentRequestBody();
    virtual ~CreateGlobalEipSegmentRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGlobalEipSegmentRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateGlobalEipSegmentRequestBody_global_eip_segment getGlobalEipSegment() const;
    bool globalEipSegmentIsSet() const;
    void unsetglobalEipSegment();
    void setGlobalEipSegment(const CreateGlobalEipSegmentRequestBody_global_eip_segment& value);


protected:
    CreateGlobalEipSegmentRequestBody_global_eip_segment globalEipSegment_;
    bool globalEipSegmentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipSegmentRequestBody_H_
