
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedCoreAccountRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedCoreAccountRequest_H_


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
class HUAWEICLOUD_RGC_V1_EXPORT  ShowManagedCoreAccountRequest
    : public ModelBase
{
public:
    ShowManagedCoreAccountRequest();
    virtual ~ShowManagedCoreAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowManagedCoreAccountRequest members

    /// <summary>
    /// 纳管账号类型。类型包括LOGGING，SECURITY和PRIMARY。
    /// </summary>

    std::string getAccountType() const;
    bool accountTypeIsSet() const;
    void unsetaccountType();
    void setAccountType(const std::string& value);


protected:
    std::string accountType_;
    bool accountTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowManagedCoreAccountRequest& dereference_from_shared_ptr(std::shared_ptr<ShowManagedCoreAccountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedCoreAccountRequest_H_
