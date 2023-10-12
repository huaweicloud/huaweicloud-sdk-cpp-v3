
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ResizeColdVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ResizeColdVolumeRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ResizeColdVolumeRequestBody
    : public ModelBase
{
public:
    ResizeColdVolumeRequestBody();
    virtual ~ResizeColdVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeColdVolumeRequestBody members

    /// <summary>
    /// 待扩容后冷存储空间大小,单位：GB。用户每次至少选择1GB扩容量，且必须为整数。待扩容后的最大存储空间为100000GB。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 扩容包年包月实例的冷数据存储容量时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。 ·true，表示自动从账户中支付。 ·false，表示手动从账户中支付，默认为该方式。
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ResizeColdVolumeRequestBody_H_
