
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAvailabilityZoneInfosNewRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAvailabilityZoneInfosNewRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAvailabilityZoneInfosNewRequest
    : public ModelBase
{
public:
    ListAvailabilityZoneInfosNewRequest();
    virtual ~ListAvailabilityZoneInfosNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAvailabilityZoneInfosNewRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAvailabilityZoneInfosNewRequest& dereference_from_shared_ptr(std::shared_ptr<ListAvailabilityZoneInfosNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAvailabilityZoneInfosNewRequest_H_
