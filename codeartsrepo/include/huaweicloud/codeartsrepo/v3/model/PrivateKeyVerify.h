
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_PrivateKeyVerify_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_PrivateKeyVerify_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  PrivateKeyVerify
    : public ModelBase
{
public:
    PrivateKeyVerify();
    virtual ~PrivateKeyVerify();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrivateKeyVerify members

    /// <summary>
    /// 仓库UUID(由CreateRepository接口返回)
    /// </summary>

    std::string getRepositoryUuid() const;
    bool repositoryUuidIsSet() const;
    void unsetrepositoryUuid();
    void setRepositoryUuid(const std::string& value);

    /// <summary>
    /// 私钥
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);


protected:
    std::string repositoryUuid_;
    bool repositoryUuidIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_PrivateKeyVerify_H_
