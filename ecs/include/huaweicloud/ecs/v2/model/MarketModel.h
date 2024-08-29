
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_MarketModel_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_MarketModel_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/MarketModel_prepaid_info.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  MarketModel
    : public ModelBase
{
public:
    MarketModel();
    virtual ~MarketModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MarketModel members

    /// <summary>
    /// 计费类型
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MarketModel_prepaid_info getPrepaidInfo() const;
    bool prepaidInfoIsSet() const;
    void unsetprepaidInfo();
    void setPrepaidInfo(const MarketModel_prepaid_info& value);


protected:
    std::string chargeMode_;
    bool chargeModeIsSet_;
    MarketModel_prepaid_info prepaidInfo_;
    bool prepaidInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_MarketModel_H_
