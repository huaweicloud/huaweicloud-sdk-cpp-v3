
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_EnrollAccountRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_EnrollAccountRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rgc/v1/model/EnrollAccountRequestBody.h>

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
class HUAWEICLOUD_RGC_V1_EXPORT  EnrollAccountRequest
    : public ModelBase
{
public:
    EnrollAccountRequest();
    virtual ~EnrollAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnrollAccountRequest members

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

    EnrollAccountRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EnrollAccountRequestBody& value);


protected:
    std::string managedAccountId_;
    bool managedAccountIdIsSet_;
    EnrollAccountRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    EnrollAccountRequest& dereference_from_shared_ptr(std::shared_ptr<EnrollAccountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_EnrollAccountRequest_H_
