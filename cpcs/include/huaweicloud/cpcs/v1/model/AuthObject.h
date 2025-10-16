
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/AuthObject_auth.h>
#include <huaweicloud/cpcs/v1/model/AuthObject_scope.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 鉴权对象
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  AuthObject
    : public ModelBase
{
public:
    AuthObject();
    virtual ~AuthObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthObject members

    /// <summary>
    /// 
    /// </summary>

    AuthObject_auth getAuth() const;
    bool authIsSet() const;
    void unsetauth();
    void setAuth(const AuthObject_auth& value);

    /// <summary>
    /// 
    /// </summary>

    AuthObject_scope getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const AuthObject_scope& value);


protected:
    AuthObject_auth auth_;
    bool authIsSet_;
    AuthObject_scope scope_;
    bool scopeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_H_
