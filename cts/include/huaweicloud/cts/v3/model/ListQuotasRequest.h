
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListQuotasRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListQuotasRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListQuotasRequest
    : public ModelBase
{
public:
    ListQuotasRequest();
    virtual ~ListQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQuotasRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<ListQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListQuotasRequest_H_
