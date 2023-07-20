
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowQuotasRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowQuotasRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowQuotasRequest
    : public ModelBase
{
public:
    ShowQuotasRequest();
    virtual ~ShowQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowQuotasRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<ShowQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowQuotasRequest_H_
