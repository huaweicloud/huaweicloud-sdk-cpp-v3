
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchCpcsTokenResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchCpcsTokenResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/SwitchTokenResponse_user.h>
#include <string>
#include <vector>
#include <huaweicloud/cpcs/v1/model/SwitchTokenResponse_ak.h>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  SwitchCpcsTokenResponse
    : public ModelBase, public HttpResponse
{
public:
    SwitchCpcsTokenResponse();
    virtual ~SwitchCpcsTokenResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchCpcsTokenResponse members

    /// <summary>
    /// 角色列表
    /// </summary>

    std::vector<std::string>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    SwitchTokenResponse_ak getAk() const;
    bool akIsSet() const;
    void unsetak();
    void setAk(const SwitchTokenResponse_ak& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    std::string getExpiredAt() const;
    bool expiredAtIsSet() const;
    void unsetexpiredAt();
    void setExpiredAt(const std::string& value);

    /// <summary>
    /// 签发时间
    /// </summary>

    std::string getIssuedAt() const;
    bool issuedAtIsSet() const;
    void unsetissuedAt();
    void setIssuedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SwitchTokenResponse_user getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const SwitchTokenResponse_user& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXCPCSToken() const;
    bool xCPCSTokenIsSet() const;
    void unsetxCPCSToken();
    void setXCPCSToken(const std::string& value);


protected:
    std::vector<std::string> roles_;
    bool rolesIsSet_;
    SwitchTokenResponse_ak ak_;
    bool akIsSet_;
    std::string expiredAt_;
    bool expiredAtIsSet_;
    std::string issuedAt_;
    bool issuedAtIsSet_;
    SwitchTokenResponse_user user_;
    bool userIsSet_;
    std::string xCPCSToken_;
    bool xCPCSTokenIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchCpcsTokenResponse_H_
