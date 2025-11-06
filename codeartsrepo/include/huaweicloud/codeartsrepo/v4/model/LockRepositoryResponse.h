
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LockRepositoryResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LockRepositoryResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  LockRepositoryResponse
    : public ModelBase, public HttpResponse
{
public:
    LockRepositoryResponse();
    virtual ~LockRepositoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LockRepositoryResponse members

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

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LockRepositoryResponse_H_
