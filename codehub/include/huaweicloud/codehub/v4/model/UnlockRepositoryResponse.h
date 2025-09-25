
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UnlockRepositoryResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UnlockRepositoryResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UnlockRepositoryResponse
    : public ModelBase, public HttpResponse
{
public:
    UnlockRepositoryResponse();
    virtual ~UnlockRepositoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnlockRepositoryResponse members

    /// <summary>
    /// 锁定状态 - true 已锁定 - false 未锁定 
    /// </summary>

    std::string getLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(const std::string& value);


protected:
    std::string locked_;
    bool lockedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UnlockRepositoryResponse_H_
