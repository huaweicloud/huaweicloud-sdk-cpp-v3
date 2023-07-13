
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_DomainMigrate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_DomainMigrate_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  DomainMigrate
    : public ModelBase
{
public:
    DomainMigrate();
    virtual ~DomainMigrate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DomainMigrate members

    /// <summary>
    /// 是否触发其他区域迁移
    /// </summary>

    bool isAllRegions() const;
    bool allRegionsIsSet() const;
    void unsetallRegions();
    void setAllRegions(bool value);

    /// <summary>
    /// 存储库默认扩容比，取值范围0到1
    /// </summary>

    float getReservation() const;
    bool reservationIsSet() const;
    void unsetreservation();
    void setReservation(float value);


protected:
    bool allRegions_;
    bool allRegionsIsSet_;
    float reservation_;
    bool reservationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_DomainMigrate_H_
