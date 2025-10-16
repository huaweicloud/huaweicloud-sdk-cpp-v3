
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_auth_accessKey_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_auth_accessKey_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ak/sk信息
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  AuthObject_auth_accessKey
    : public ModelBase
{
public:
    AuthObject_auth_accessKey();
    virtual ~AuthObject_auth_accessKey();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthObject_auth_accessKey members

    /// <summary>
    /// ak id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// sk id
    /// </summary>

    std::string getSecret() const;
    bool secretIsSet() const;
    void unsetsecret();
    void setSecret(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string secret_;
    bool secretIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_auth_accessKey_H_
