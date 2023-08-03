
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ChargeInfoResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ChargeInfoResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 计费类型信息，支持包年包月和按需，默认为按需。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ChargeInfoResponse
    : public ModelBase
{
public:
    ChargeInfoResponse();
    virtual ~ChargeInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChargeInfoResponse members

    /// <summary>
    /// 计费模式。  取值范围：  - prePaid：预付费，即包年/包月。 - postPaid：后付费，即按需付费。
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);


protected:
    std::string chargeMode_;
    bool chargeModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ChargeInfoResponse_H_
