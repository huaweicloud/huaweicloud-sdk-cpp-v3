
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListExternalConfigRuleCompliancesRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListExternalConfigRuleCompliancesRequest_H_


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
class HUAWEICLOUD_RGC_V1_EXPORT  ListExternalConfigRuleCompliancesRequest
    : public ModelBase
{
public:
    ListExternalConfigRuleCompliancesRequest();
    virtual ~ListExternalConfigRuleCompliancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListExternalConfigRuleCompliancesRequest members

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
    ListExternalConfigRuleCompliancesRequest& dereference_from_shared_ptr(std::shared_ptr<ListExternalConfigRuleCompliancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListExternalConfigRuleCompliancesRequest_H_
