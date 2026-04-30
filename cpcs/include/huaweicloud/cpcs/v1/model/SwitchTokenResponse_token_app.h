
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_token_app_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_token_app_H_


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
/// 应用信息
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  SwitchTokenResponse_token_app
    : public ModelBase
{
public:
    SwitchTokenResponse_token_app();
    virtual ~SwitchTokenResponse_token_app();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchTokenResponse_token_app members

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 应用状态
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string appName_;
    bool appNameIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_token_app_H_
