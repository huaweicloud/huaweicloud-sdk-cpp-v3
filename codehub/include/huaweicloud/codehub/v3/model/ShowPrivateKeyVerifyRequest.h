
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowPrivateKeyVerifyRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowPrivateKeyVerifyRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/PrivateKeyVerify.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ShowPrivateKeyVerifyRequest
    : public ModelBase
{
public:
    ShowPrivateKeyVerifyRequest();
    virtual ~ShowPrivateKeyVerifyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPrivateKeyVerifyRequest members

    /// <summary>
    /// 
    /// </summary>

    PrivateKeyVerify getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PrivateKeyVerify& value);


protected:
    PrivateKeyVerify body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPrivateKeyVerifyRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPrivateKeyVerifyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowPrivateKeyVerifyRequest_H_
