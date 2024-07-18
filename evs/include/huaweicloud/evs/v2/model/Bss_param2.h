
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_Bss_param2_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_Bss_param2_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包周期参数:  1. 包年包月的计量属性 2. 包年包月的数量
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  Bss_param2
    : public ModelBase
{
public:
    Bss_param2();
    virtual ~Bss_param2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Bss_param2 members

    /// <summary>
    /// 云硬盘的计费模式转成包周期后，是否自动支付
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_Bss_param2_H_
