
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_AssociateResourceShareRequest_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_AssociateResourceShareRequest_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/ResourceShareAssociationReqBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  AssociateResourceShareRequest
    : public ModelBase
{
public:
    AssociateResourceShareRequest();
    virtual ~AssociateResourceShareRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateResourceShareRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 资源共享实例的ID。
    /// </summary>

    std::string getResourceShareId() const;
    bool resourceShareIdIsSet() const;
    void unsetresourceShareId();
    void setResourceShareId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceShareAssociationReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResourceShareAssociationReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    std::string resourceShareId_;
    bool resourceShareIdIsSet_;
    ResourceShareAssociationReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateResourceShareRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateResourceShareRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_AssociateResourceShareRequest_H_
