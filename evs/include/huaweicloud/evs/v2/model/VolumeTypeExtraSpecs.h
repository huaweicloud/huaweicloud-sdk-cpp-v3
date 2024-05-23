
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeTypeExtraSpecs_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeTypeExtraSpecs_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
    /// 支持当前云硬盘类型的可用区列表，列表的元素以逗号分隔。
    /// </summary>

    std::string getRESKEYAvailabilityZones() const;
    bool rESKEYAvailabilityZonesIsSet() const;
    void unsetrESKEYAvailabilityZones();
    void setRESKEYAvailabilityZones(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 当前云硬盘类型已售罄的可用区列表，列表的元素以逗号分隔。
    /// </summary>

    std::string getOsVendorExtendedSoldOutAvailabilityZones() const;
    bool osVendorExtendedSoldOutAvailabilityZonesIsSet() const;
    void unsetosVendorExtendedSoldOutAvailabilityZones();
    void setOsVendorExtendedSoldOutAvailabilityZones(const std::string& value);

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

    std::string getHWAvailabilityZone() const;
    bool hWAvailabilityZoneIsSet() const;
    void unsethWAvailabilityZone();
    void setHWAvailabilityZone(const std::string& value);


protected:
    std::string rESKEYAvailabilityZones_;
    bool rESKEYAvailabilityZonesIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string osVendorExtendedSoldOutAvailabilityZones_;
    bool osVendorExtendedSoldOutAvailabilityZonesIsSet_;
    std::string volumeBackendName_;
    bool volumeBackendNameIsSet_;
    std::string hWAvailabilityZone_;
    bool hWAvailabilityZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeTypeExtraSpecs_H_
