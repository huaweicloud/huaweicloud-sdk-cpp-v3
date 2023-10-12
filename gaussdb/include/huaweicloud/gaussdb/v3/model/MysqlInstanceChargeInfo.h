
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceChargeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceChargeInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 计费类型信息，支持包年包月和按需，默认为按需。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlInstanceChargeInfo
    : public ModelBase
{
public:
    MysqlInstanceChargeInfo();
    virtual ~MysqlInstanceChargeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlInstanceChargeInfo members

    /// <summary>
    /// 计费模式。
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 订单号。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);


protected:
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceChargeInfo_H_
