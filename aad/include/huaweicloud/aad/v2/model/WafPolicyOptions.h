
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_WafPolicyOptions_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_WafPolicyOptions_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  WafPolicyOptions
    : public ModelBase
{
public:
    WafPolicyOptions();
    virtual ~WafPolicyOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WafPolicyOptions members

    /// <summary>
    /// 是否开启CC（频率控制）
    /// </summary>

    bool isCc() const;
    bool ccIsSet() const;
    void unsetcc();
    void setCc(bool value);

    /// <summary>
    /// 是否开启精准访问防护
    /// </summary>

    bool isCustom() const;
    bool customIsSet() const;
    void unsetcustom();
    void setCustom(bool value);

    /// <summary>
    /// 是否开启区域封禁防护
    /// </summary>

    bool isGeoip() const;
    bool geoipIsSet() const;
    void unsetgeoip();
    void setGeoip(bool value);

    /// <summary>
    /// 是否开启黑白名单防护
    /// </summary>

    bool isWhiteblackip() const;
    bool whiteblackipIsSet() const;
    void unsetwhiteblackip();
    void setWhiteblackip(bool value);

    /// <summary>
    /// 是否开启智能CC防护
    /// </summary>

    bool isModulexEnabled() const;
    bool modulexEnabledIsSet() const;
    void unsetmodulexEnabled();
    void setModulexEnabled(bool value);


protected:
    bool cc_;
    bool ccIsSet_;
    bool custom_;
    bool customIsSet_;
    bool geoip_;
    bool geoipIsSet_;
    bool whiteblackip_;
    bool whiteblackipIsSet_;
    bool modulexEnabled_;
    bool modulexEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_WafPolicyOptions_H_
