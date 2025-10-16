
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_auth_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_auth_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/AuthObject_auth_accessKey.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 鉴权信息
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  AuthObject_auth
    : public ModelBase
{
public:
    AuthObject_auth();
    virtual ~AuthObject_auth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthObject_auth members

    /// <summary>
    /// 
    /// </summary>

    AuthObject_auth_accessKey getAccessKey() const;
    bool accessKeyIsSet() const;
    void unsetaccessKey();
    void setAccessKey(const AuthObject_auth_accessKey& value);


protected:
    AuthObject_auth_accessKey accessKey_;
    bool accessKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_auth_H_
