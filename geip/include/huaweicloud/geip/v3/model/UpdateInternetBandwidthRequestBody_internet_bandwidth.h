
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidthRequestBody_internet_bandwidth_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidthRequestBody_internet_bandwidth_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新全域公网带宽请求对象
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateInternetBandwidthRequestBody_internet_bandwidth
    : public ModelBase
{
public:
    UpdateInternetBandwidthRequestBody_internet_bandwidth();
    virtual ~UpdateInternetBandwidthRequestBody_internet_bandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInternetBandwidthRequestBody_internet_bandwidth members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户自定义的资源描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 全域公网带宽大小（出云方向）
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 计费模式
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 全域公网带宽大小（入云方向）
    /// </summary>

    int32_t getIngressSize() const;
    bool ingressSizeIsSet() const;
    void unsetingressSize();
    void setIngressSize(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    int32_t ingressSize_;
    bool ingressSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidthRequestBody_internet_bandwidth_H_
