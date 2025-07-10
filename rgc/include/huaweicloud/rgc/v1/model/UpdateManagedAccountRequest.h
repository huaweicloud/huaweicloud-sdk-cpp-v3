
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_UpdateManagedAccountRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_UpdateManagedAccountRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/UpdateManagedAccountRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  UpdateManagedAccountRequest
    : public ModelBase
{
public:
    UpdateManagedAccountRequest();
    virtual ~UpdateManagedAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateManagedAccountRequest members

    /// <summary>
    /// 纳管账号ID。
    /// </summary>

    std::string getManagedAccountId() const;
    bool managedAccountIdIsSet() const;
    void unsetmanagedAccountId();
    void setManagedAccountId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateManagedAccountRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateManagedAccountRequestBody& value);


protected:
    std::string managedAccountId_;
    bool managedAccountIdIsSet_;
    UpdateManagedAccountRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateManagedAccountRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateManagedAccountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_UpdateManagedAccountRequest_H_
