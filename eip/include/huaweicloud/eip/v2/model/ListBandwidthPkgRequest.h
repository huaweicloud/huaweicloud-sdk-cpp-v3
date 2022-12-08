
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthPkgRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthPkgRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ListBandwidthPkgRequest
    : public ModelBase
{
public:
    ListBandwidthPkgRequest();
    virtual ~ListBandwidthPkgRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListBandwidthPkgRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBandwidthPkgRequest& dereference_from_shared_ptr(std::shared_ptr<ListBandwidthPkgRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthPkgRequest_H_
