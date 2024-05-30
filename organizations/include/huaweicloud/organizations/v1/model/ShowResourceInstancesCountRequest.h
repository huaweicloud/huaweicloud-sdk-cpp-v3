
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowResourceInstancesCountRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowResourceInstancesCountRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/ResourceInstanceReqBody.h>
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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ShowResourceInstancesCountRequest
    : public ModelBase
{
public:
    ShowResourceInstancesCountRequest();
    virtual ~ShowResourceInstancesCountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceInstancesCountRequest members

    /// <summary>
    /// 资源类型 organizations:policies服务策略 organizations:ous组织OU organizations:accounts账号信息 organizations:roots根
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceInstanceReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResourceInstanceReqBody& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    ResourceInstanceReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowResourceInstancesCountRequest& dereference_from_shared_ptr(std::shared_ptr<ShowResourceInstancesCountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowResourceInstancesCountRequest_H_
