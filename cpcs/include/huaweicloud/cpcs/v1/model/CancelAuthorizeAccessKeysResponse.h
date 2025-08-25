
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CancelAuthorizeAccessKeysResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CancelAuthorizeAccessKeysResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  CancelAuthorizeAccessKeysResponse
    : public ModelBase, public HttpResponse
{
public:
    CancelAuthorizeAccessKeysResponse();
    virtual ~CancelAuthorizeAccessKeysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelAuthorizeAccessKeysResponse members

    /// <summary>
    /// 访问密钥ID列表
    /// </summary>

    std::vector<std::string>& getAccessKeys();
    bool accessKeysIsSet() const;
    void unsetaccessKeys();
    void setAccessKeys(const std::vector<std::string>& value);


protected:
    std::vector<std::string> accessKeys_;
    bool accessKeysIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CancelAuthorizeAccessKeysResponse_H_
