
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedAccountRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedAccountRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowManagedAccountRequest
    : public ModelBase
{
public:
    ShowManagedAccountRequest();
    virtual ~ShowManagedAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowManagedAccountRequest members

    /// <summary>
    /// 纳管账号ID。
    /// </summary>

    std::string getManagedAccountId() const;
    bool managedAccountIdIsSet() const;
    void unsetmanagedAccountId();
    void setManagedAccountId(const std::string& value);


protected:
    std::string managedAccountId_;
    bool managedAccountIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowManagedAccountRequest& dereference_from_shared_ptr(std::shared_ptr<ShowManagedAccountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedAccountRequest_H_
