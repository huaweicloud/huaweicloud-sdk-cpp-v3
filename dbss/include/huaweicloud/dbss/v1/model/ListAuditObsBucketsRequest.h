
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditObsBucketsRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditObsBucketsRequest_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditObsBucketsRequest
    : public ModelBase
{
public:
    ListAuditObsBucketsRequest();
    virtual ~ListAuditObsBucketsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditObsBucketsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAuditObsBucketsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAuditObsBucketsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditObsBucketsRequest_H_
