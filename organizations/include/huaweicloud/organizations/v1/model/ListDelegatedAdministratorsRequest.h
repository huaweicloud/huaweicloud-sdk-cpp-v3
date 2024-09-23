
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListDelegatedAdministratorsRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListDelegatedAdministratorsRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListDelegatedAdministratorsRequest
    : public ModelBase
{
public:
    ListDelegatedAdministratorsRequest();
    virtual ~ListDelegatedAdministratorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDelegatedAdministratorsRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 服务主体的名称。
    /// </summary>

    std::string getServicePrincipal() const;
    bool servicePrincipalIsSet() const;
    void unsetservicePrincipal();
    void setServicePrincipal(const std::string& value);

    /// <summary>
    /// 页面中最大结果数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页标记。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    std::string servicePrincipal_;
    bool servicePrincipalIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDelegatedAdministratorsRequest& dereference_from_shared_ptr(std::shared_ptr<ListDelegatedAdministratorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListDelegatedAdministratorsRequest_H_
