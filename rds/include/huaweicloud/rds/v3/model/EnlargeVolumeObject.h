
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_EnlargeVolumeObject_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_EnlargeVolumeObject_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 扩容实例磁盘时必填。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  EnlargeVolumeObject
    : public ModelBase
{
public:
    EnlargeVolumeObject();
    virtual ~EnlargeVolumeObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EnlargeVolumeObject members

    /// <summary>
    /// 每次扩容最小容量为10GB，实例所选容量大小必须为10的整数倍，取值范围：40GB~4000GB。 - MySQL部分用户支持11GB~10000GB，如果您想开通该功能，请联系客服。 - PostgreSQL部分用户支持40GB~15000GB，如果您想开通该功能，请联系客服。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 变更包周期实例的规格时可指定，表示是否自动从客户的账户中支付。 - true，为自动支付。 - false，为手动支付，默认该方式。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_EnlargeVolumeObject_H_
