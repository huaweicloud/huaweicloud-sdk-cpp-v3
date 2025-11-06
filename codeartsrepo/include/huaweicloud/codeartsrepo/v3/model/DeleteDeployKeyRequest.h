
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_DeleteDeployKeyRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_DeleteDeployKeyRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  DeleteDeployKeyRequest
    : public ModelBase
{
public:
    DeleteDeployKeyRequest();
    virtual ~DeleteDeployKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDeployKeyRequest members

    /// <summary>
    /// 部署密钥id
    /// </summary>

    int32_t getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(int32_t value);

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);


protected:
    int32_t keyId_;
    bool keyIdIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteDeployKeyRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteDeployKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_DeleteDeployKeyRequest_H_
