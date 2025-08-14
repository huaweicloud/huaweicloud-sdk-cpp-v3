
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListCatalogApplicationsRequest_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListCatalogApplicationsRequest_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListCatalogApplicationsRequest
    : public ModelBase
{
public:
    ListCatalogApplicationsRequest();
    virtual ~ListCatalogApplicationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCatalogApplicationsRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 每个请求返回的最大结果数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页标记
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCatalogApplicationsRequest& dereference_from_shared_ptr(std::shared_ptr<ListCatalogApplicationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListCatalogApplicationsRequest_H_
