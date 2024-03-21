
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthLimits_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthLimits_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/geip/v3/model/ExtLimitPojo.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  ListInternetBandwidthLimits
    : public ModelBase
{
public:
    ListInternetBandwidthLimits();
    virtual ~ListInternetBandwidthLimits();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInternetBandwidthLimits members

    /// <summary>
    /// 全域公网带宽限制的ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 全域公网带宽的计费模式
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 该类型全域公网带宽可购买的最小size
    /// </summary>

    int32_t getMinSize() const;
    bool minSizeIsSet() const;
    void unsetminSize();
    void setMinSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ExtLimitPojo getExtLimit() const;
    bool extLimitIsSet() const;
    void unsetextLimit();
    void setExtLimit(const ExtLimitPojo& value);

    /// <summary>
    /// 该类型全域公网带宽可购买的最大size
    /// </summary>

    int32_t getMaxSize() const;
    bool maxSizeIsSet() const;
    void unsetmaxSize();
    void setMaxSize(int32_t value);

    /// <summary>
    /// 全域公网带宽类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    int32_t minSize_;
    bool minSizeIsSet_;
    ExtLimitPojo extLimit_;
    bool extLimitIsSet_;
    int32_t maxSize_;
    bool maxSizeIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthLimits_H_
