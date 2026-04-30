
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchCpcsTokenResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchCpcsTokenResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/SwitchTokenResponse_token.h>

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
    /// 
    /// </summary>

    SwitchTokenResponse_token getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const SwitchTokenResponse_token& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXCPCSToken() const;
    bool xCPCSTokenIsSet() const;
    void unsetxCPCSToken();
    void setXCPCSToken(const std::string& value);


protected:
    SwitchTokenResponse_token token_;
    bool tokenIsSet_;
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
