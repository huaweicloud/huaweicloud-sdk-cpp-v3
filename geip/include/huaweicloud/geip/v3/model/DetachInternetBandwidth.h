
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_DetachInternetBandwidth_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_DetachInternetBandwidth_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  DetachInternetBandwidth
    : public ModelBase
{
public:
    DetachInternetBandwidth();
    virtual ~DetachInternetBandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachInternetBandwidth members

    /// <summary>
    /// 全局IP段id
    /// </summary>

    std::string getGlobalEipSegmentId() const;
    bool globalEipSegmentIdIsSet() const;
    void unsetglobalEipSegmentId();
    void setGlobalEipSegmentId(const std::string& value);


protected:
    std::string globalEipSegmentId_;
    bool globalEipSegmentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_DetachInternetBandwidth_H_
