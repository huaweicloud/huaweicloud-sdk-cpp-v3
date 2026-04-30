
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_token_user_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_token_user_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/SwitchTokenResponse_token_user_domain.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户信息
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  SwitchTokenResponse_token_user
    : public ModelBase
{
public:
    SwitchTokenResponse_token_user();
    virtual ~SwitchTokenResponse_token_user();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchTokenResponse_token_user members

    /// <summary>
    /// 
    /// </summary>

    SwitchTokenResponse_token_user_domain getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const SwitchTokenResponse_token_user_domain& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    SwitchTokenResponse_token_user_domain domain_;
    bool domainIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_token_user_H_
