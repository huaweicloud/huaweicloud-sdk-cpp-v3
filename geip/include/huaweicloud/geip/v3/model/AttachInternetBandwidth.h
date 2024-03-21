
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AttachInternetBandwidth_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AttachInternetBandwidth_H_


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
class HUAWEICLOUD_GEIP_V3_EXPORT  AttachInternetBandwidth
    : public ModelBase
{
public:
    AttachInternetBandwidth();
    virtual ~AttachInternetBandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachInternetBandwidth members

    /// <summary>
    /// 全域弹性公网IP段的ID
    /// </summary>

    std::string getGlobalEipSegmentId() const;
    bool globalEipSegmentIdIsSet() const;
    void unsetglobalEipSegmentId();
    void setGlobalEipSegmentId(const std::string& value);

    /// <summary>
    /// 全域公网带宽的ID
    /// </summary>

    std::string getInternetBandwidthId() const;
    bool internetBandwidthIdIsSet() const;
    void unsetinternetBandwidthId();
    void setInternetBandwidthId(const std::string& value);


protected:
    std::string globalEipSegmentId_;
    bool globalEipSegmentIdIsSet_;
    std::string internetBandwidthId_;
    bool internetBandwidthIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AttachInternetBandwidth_H_
