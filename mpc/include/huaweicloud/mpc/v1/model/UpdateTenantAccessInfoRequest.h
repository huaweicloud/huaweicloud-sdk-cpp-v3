
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateTenantAccessInfoRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateTenantAccessInfoRequest_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/mpc/v1/model/UpdateTenantAccessInfoReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  UpdateTenantAccessInfoRequest
    : public ModelBase
{
public:
    UpdateTenantAccessInfoRequest();
    virtual ~UpdateTenantAccessInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTenantAccessInfoRequest members

    /// <summary>
    /// 客户端语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateTenantAccessInfoReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateTenantAccessInfoReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    UpdateTenantAccessInfoReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTenantAccessInfoRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTenantAccessInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateTenantAccessInfoRequest_H_
