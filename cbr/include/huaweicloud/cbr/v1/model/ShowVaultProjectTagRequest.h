
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultProjectTagRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultProjectTagRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowVaultProjectTagRequest
    : public ModelBase
{
public:
    ShowVaultProjectTagRequest();
    virtual ~ShowVaultProjectTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVaultProjectTagRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVaultProjectTagRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVaultProjectTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultProjectTagRequest_H_
