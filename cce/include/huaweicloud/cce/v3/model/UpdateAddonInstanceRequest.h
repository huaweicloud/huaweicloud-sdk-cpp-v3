
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAddonInstanceRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAddonInstanceRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/InstanceRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateAddonInstanceRequest
    : public ModelBase
{
public:
    UpdateAddonInstanceRequest();
    virtual ~UpdateAddonInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAddonInstanceRequest members

    /// <summary>
    /// 插件实例id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const InstanceRequest& value);


protected:
    std::string id_;
    bool idIsSet_;
    InstanceRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAddonInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAddonInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAddonInstanceRequest_H_
