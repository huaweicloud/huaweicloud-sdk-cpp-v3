
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAvailabilityZoneInfosResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAvailabilityZoneInfosResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/AzInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAvailabilityZoneInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAvailabilityZoneInfosResponse();
    virtual ~ListAvailabilityZoneInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAvailabilityZoneInfosResponse members

    /// <summary>
    /// 可用区集合
    /// </summary>

    std::vector<AzInfo>& getAzs();
    bool azsIsSet() const;
    void unsetazs();
    void setAzs(const std::vector<AzInfo>& value);


protected:
    std::vector<AzInfo> azs_;
    bool azsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAvailabilityZoneInfosResponse_H_
