
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallPoliciesRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallPoliciesRequest_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  NeutronListFirewallPoliciesRequest
    : public ModelBase
{
public:
    NeutronListFirewallPoliciesRequest();
    virtual ~NeutronListFirewallPoliciesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListFirewallPoliciesRequest members

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getName();
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getDescription();
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;
    std::vector<std::string> name_;
    bool nameIsSet_;
    std::vector<std::string> description_;
    bool descriptionIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListFirewallPoliciesRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListFirewallPoliciesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallPoliciesRequest_H_
