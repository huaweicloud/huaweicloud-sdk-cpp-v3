
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowHandshakeRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowHandshakeRequest_H_


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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ShowHandshakeRequest
    : public ModelBase
{
public:
    ShowHandshakeRequest();
    virtual ~ShowHandshakeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHandshakeRequest members

    /// <summary>
    /// 邀请的唯一标识符（ID）。账号在发起邀请时创建ID。
    /// </summary>

    std::string getHandshakeId() const;
    bool handshakeIdIsSet() const;
    void unsethandshakeId();
    void setHandshakeId(const std::string& value);


protected:
    std::string handshakeId_;
    bool handshakeIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHandshakeRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHandshakeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowHandshakeRequest_H_
