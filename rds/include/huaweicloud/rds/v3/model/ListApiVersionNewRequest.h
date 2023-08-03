
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListApiVersionNewRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListApiVersionNewRequest_H_

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
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListApiVersionNewRequest
    : public ModelBase
{
public:
    ListApiVersionNewRequest();
    virtual ~ListApiVersionNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListApiVersionNewRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListApiVersionNewRequest& dereference_from_shared_ptr(std::shared_ptr<ListApiVersionNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListApiVersionNewRequest_H_
