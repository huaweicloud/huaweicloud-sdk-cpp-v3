
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupRulesRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupRulesRequest_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

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
class HUAWEICLOUD_VPC_EXPORT  ListSecurityGroupRulesRequest
    : public ModelBase
{
public:
    ListSecurityGroupRulesRequest();
    virtual ~ListSecurityGroupRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSecurityGroupRulesRequest members

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

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSecurityGroupRulesRequest& dereference_from_shared_ptr(std::shared_ptr<ListSecurityGroupRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupRulesRequest_H_
