
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_AvailabilityZoneDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_AvailabilityZoneDetail_H_


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
/// 主备版的多AZ可用区详情
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  AvailabilityZoneDetail
    : public ModelBase
{
public:
    AvailabilityZoneDetail();
    virtual ~AvailabilityZoneDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AvailabilityZoneDetail members

    /// <summary>
    /// 主可用区，应为单可用区且和备可用区不同
    /// </summary>

    std::string getPrimaryAvailabilityZone() const;
    bool primaryAvailabilityZoneIsSet() const;
    void unsetprimaryAvailabilityZone();
    void setPrimaryAvailabilityZone(const std::string& value);

    /// <summary>
    /// 备可用区，应为单可用区且和主可用区不同
    /// </summary>

    std::string getSecondaryAvailabilityZone() const;
    bool secondaryAvailabilityZoneIsSet() const;
    void unsetsecondaryAvailabilityZone();
    void setSecondaryAvailabilityZone(const std::string& value);


protected:
    std::string primaryAvailabilityZone_;
    bool primaryAvailabilityZoneIsSet_;
    std::string secondaryAvailabilityZone_;
    bool secondaryAvailabilityZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_AvailabilityZoneDetail_H_
