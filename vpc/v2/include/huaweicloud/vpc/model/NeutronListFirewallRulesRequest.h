
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesRequest_H_

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
class HUAWEICLOUD_VPC_EXPORT  NeutronListFirewallRulesRequest
    : public ModelBase
{
public:
    NeutronListFirewallRulesRequest();
    virtual ~NeutronListFirewallRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListFirewallRulesRequest members

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

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

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

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;
    std::vector<std::string> name_;
    bool nameIsSet_;
    std::vector<std::string> description_;
    bool descriptionIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListFirewallRulesRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListFirewallRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesRequest_H_
