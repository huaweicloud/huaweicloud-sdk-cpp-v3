
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceVolumeRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ResizeInstanceVolumeOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ResizeInstanceVolumeRequestBody
    : public ModelBase
{
public:
    ResizeInstanceVolumeRequestBody();
    virtual ~ResizeInstanceVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResizeInstanceVolumeRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ResizeInstanceVolumeOption getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const ResizeInstanceVolumeOption& value);

    /// <summary>
    /// 扩容包年包月实例的存储容量时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。 - true，表示自动从账户中支付。 - false，表示手动从账户中支付，默认为该方式。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    ResizeInstanceVolumeOption volume_;
    bool volumeIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceVolumeRequestBody_H_
