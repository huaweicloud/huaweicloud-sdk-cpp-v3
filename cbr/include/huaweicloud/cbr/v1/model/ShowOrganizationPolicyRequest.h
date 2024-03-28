
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowOrganizationPolicyRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowOrganizationPolicyRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CBR_V1_EXPORT  ShowOrganizationPolicyRequest
    : public ModelBase
{
public:
    ShowOrganizationPolicyRequest();
    virtual ~ShowOrganizationPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOrganizationPolicyRequest members

    /// <summary>
    /// 组织策略ID
    /// </summary>

    std::string getOrganizationPolicyId() const;
    bool organizationPolicyIdIsSet() const;
    void unsetorganizationPolicyId();
    void setOrganizationPolicyId(const std::string& value);


protected:
    std::string organizationPolicyId_;
    bool organizationPolicyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowOrganizationPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<ShowOrganizationPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowOrganizationPolicyRequest_H_
