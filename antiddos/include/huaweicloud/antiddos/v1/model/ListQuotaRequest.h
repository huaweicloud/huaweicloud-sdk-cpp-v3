
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListQuotaRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListQuotaRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ListQuotaRequest
    : public ModelBase
{
public:
    ListQuotaRequest();
    virtual ~ListQuotaRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQuotaRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListQuotaRequest& dereference_from_shared_ptr(std::shared_ptr<ListQuotaRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListQuotaRequest_H_
