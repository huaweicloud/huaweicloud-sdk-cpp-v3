
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthorizeAccessKeysRequestBody_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthorizeAccessKeysRequestBody_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  AuthorizeAccessKeysRequestBody
    : public ModelBase
{
public:
    AuthorizeAccessKeysRequestBody();
    virtual ~AuthorizeAccessKeysRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthorizeAccessKeysRequestBody members

    /// <summary>
    /// 所需要绑定的应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 需要被授权的应用访问密钥的ID列表，若需要授予应用所有访问密钥权限，则仅传入一个元素，且该元素值为“all”，如body为“{\&quot;access_key_ids\&quot;: [\&quot;all\&quot;]}”
    /// </summary>

    std::vector<std::string>& getAccessKeyIds();
    bool accessKeyIdsIsSet() const;
    void unsetaccessKeyIds();
    void setAccessKeyIds(const std::vector<std::string>& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::vector<std::string> accessKeyIds_;
    bool accessKeyIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthorizeAccessKeysRequestBody_H_
