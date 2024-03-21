
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/AssociateInstanceGlobalEipRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  AssociateInstanceRequest
    : public ModelBase
{
public:
    AssociateInstanceRequest();
    virtual ~AssociateInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateInstanceRequest members

    /// <summary>
    /// 绑定接口可以加，标识请求是从哪个服务调过来的
    /// </summary>

    std::string getBindingInstanceService() const;
    bool bindingInstanceServiceIsSet() const;
    void unsetbindingInstanceService();
    void setBindingInstanceService(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getGlobalEipId() const;
    bool globalEipIdIsSet() const;
    void unsetglobalEipId();
    void setGlobalEipId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AssociateInstanceGlobalEipRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AssociateInstanceGlobalEipRequestBody& value);


protected:
    std::string bindingInstanceService_;
    bool bindingInstanceServiceIsSet_;
    std::string globalEipId_;
    bool globalEipIdIsSet_;
    AssociateInstanceGlobalEipRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceRequest_H_
