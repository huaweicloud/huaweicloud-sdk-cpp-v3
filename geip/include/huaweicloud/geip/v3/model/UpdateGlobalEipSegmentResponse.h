
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipSegmentResponse_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipSegmentResponse_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/ShortGlobalEipSegment.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateGlobalEipSegmentResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateGlobalEipSegmentResponse();
    virtual ~UpdateGlobalEipSegmentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGlobalEipSegmentResponse members

    /// <summary>
    /// 本次请求的job id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ShortGlobalEipSegment getGlobalEipSegment() const;
    bool globalEipSegmentIsSet() const;
    void unsetglobalEipSegment();
    void setGlobalEipSegment(const ShortGlobalEipSegment& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    ShortGlobalEipSegment globalEipSegment_;
    bool globalEipSegmentIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipSegmentResponse_H_
