
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ListNewConfigsRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ListNewConfigsRequest_H_


#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  ListNewConfigsRequest
    : public ModelBase
{
public:
    ListNewConfigsRequest();
    virtual ~ListNewConfigsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNewConfigsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListNewConfigsRequest& dereference_from_shared_ptr(std::shared_ptr<ListNewConfigsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ListNewConfigsRequest_H_
