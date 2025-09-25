
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteSshKeyRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteSshKeyRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  DeleteSshKeyRequest
    : public ModelBase
{
public:
    DeleteSshKeyRequest();
    virtual ~DeleteSshKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSshKeyRequest members

    /// <summary>
    /// **参数解释：** 资源Id，通过获取代码组权限资源点列表获取的数据中的Id
    /// </summary>

    int32_t getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(int32_t value);


protected:
    int32_t keyId_;
    bool keyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteSshKeyRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteSshKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteSshKeyRequest_H_
