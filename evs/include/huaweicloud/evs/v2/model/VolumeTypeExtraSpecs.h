
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeTypeExtraSpecs_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeTypeExtraSpecs_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 云硬盘类型的规格
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  VolumeTypeExtraSpecs
    : public ModelBase
{
public:
    VolumeTypeExtraSpecs();
    virtual ~VolumeTypeExtraSpecs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VolumeTypeExtraSpecs members

    /// <summary>
    /// 支持当前云硬盘类型的可用区列表。
    /// </summary>

    std::string getRESKEYavailabilityZones() const;
    bool rESKEYavailabilityZonesIsSet() const;
    void unsetrESKEYavailabilityZones();
    void setRESKEYavailabilityZones(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 当前云硬盘类型已售罄的可用区列表。
    /// </summary>

    std::string getOsVendorExtendedsoldOutAvailabilityZones() const;
    bool osVendorExtendedsoldOutAvailabilityZonesIsSet() const;
    void unsetosVendorExtendedsoldOutAvailabilityZones();
    void setOsVendorExtendedsoldOutAvailabilityZones(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getVolumeBackendName() const;
    bool volumeBackendNameIsSet() const;
    void unsetvolumeBackendName();
    void setVolumeBackendName(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getHWavailabilityZone() const;
    bool hWavailabilityZoneIsSet() const;
    void unsethWavailabilityZone();
    void setHWavailabilityZone(const std::string& value);


protected:
    std::string rESKEYavailabilityZones_;
    bool rESKEYavailabilityZonesIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string osVendorExtendedsoldOutAvailabilityZones_;
    bool osVendorExtendedsoldOutAvailabilityZonesIsSet_;
    std::string volumeBackendName_;
    bool volumeBackendNameIsSet_;
    std::string hWavailabilityZone_;
    bool hWavailabilityZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeTypeExtraSpecs_H_
