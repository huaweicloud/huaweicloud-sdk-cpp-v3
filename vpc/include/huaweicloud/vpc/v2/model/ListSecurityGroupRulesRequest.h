
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupRulesRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupRulesRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  ListSecurityGroupRulesRequest
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
    /// 功能说明：分页查询起始的资源ID，为空时查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 每页返回的个数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 安全组ID
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 功能说明：远端IP地址 取值范围：cidr格式
    /// </summary>

    std::string getRemoteIpPrefix() const;
    bool remoteIpPrefixIsSet() const;
    void unsetremoteIpPrefix();
    void setRemoteIpPrefix(const std::string& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string remoteIpPrefix_;
    bool remoteIpPrefixIsSet_;

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
