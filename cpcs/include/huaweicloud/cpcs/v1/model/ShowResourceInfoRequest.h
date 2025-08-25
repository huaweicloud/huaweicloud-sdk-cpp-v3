
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceInfoRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceInfoRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowResourceInfoRequest
    : public ModelBase
{
public:
    ShowResourceInfoRequest();
    virtual ~ShowResourceInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceInfoRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowResourceInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowResourceInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceInfoRequest_H_
