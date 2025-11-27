
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowSpecialUserRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowSpecialUserRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowSpecialUserRequest
    : public ModelBase
{
public:
    ShowSpecialUserRequest();
    virtual ~ShowSpecialUserRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSpecialUserRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSpecialUserRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSpecialUserRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowSpecialUserRequest_H_
