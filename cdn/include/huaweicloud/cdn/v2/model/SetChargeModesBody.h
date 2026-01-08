
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_SetChargeModesBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_SetChargeModesBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置计费模式请求体
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  SetChargeModesBody
    : public ModelBase
{
public:
    SetChargeModesBody();
    virtual ~SetChargeModesBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetChargeModesBody members

    /// <summary>
    /// 计费模式，支持flux（流量），v2及以上客户支持bw（带宽）
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 产品模式。取值意义： - base：基础加速
    /// </summary>

    std::string getProductType() const;
    bool productTypeIsSet() const;
    void unsetproductType();
    void setProductType(const std::string& value);

    /// <summary>
    /// 服务区域，仅支持mainland_china（国内）
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);


protected:
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string productType_;
    bool productTypeIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_SetChargeModesBody_H_
