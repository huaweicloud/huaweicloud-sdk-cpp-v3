
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDeviceAuthorizerResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDeviceAuthorizerResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowDeviceAuthorizerResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDeviceAuthorizerResponse();
    virtual ~ShowDeviceAuthorizerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDeviceAuthorizerResponse members

    /// <summary>
    /// **参数说明**：自定义鉴权ID。
    /// </summary>

    std::string getAuthorizerId() const;
    bool authorizerIdIsSet() const;
    void unsetauthorizerId();
    void setAuthorizerId(const std::string& value);

    /// <summary>
    /// **参数说明**：自定义鉴权器名称，同一租户下的自定义鉴权器名称不能重复。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAuthorizerName() const;
    bool authorizerNameIsSet() const;
    void unsetauthorizerName();
    void setAuthorizerName(const std::string& value);

    /// <summary>
    /// **参数说明**：函数名称。
    /// </summary>

    std::string getFuncName() const;
    bool funcNameIsSet() const;
    void unsetfuncName();
    void setFuncName(const std::string& value);

    /// <summary>
    /// **参数说明**：函数的URN（Uniform Resource Name），唯一标识函数，即自定义鉴权器对应的处理函数地址。
    /// </summary>

    std::string getFuncUrn() const;
    bool funcUrnIsSet() const;
    void unsetfuncUrn();
    void setFuncUrn(const std::string& value);

    /// <summary>
    /// **参数说明**：是否启动签名校验，启动签名校验后不满足签名要求的鉴权信息将被拒绝，以减少无效的函数调用。推荐用户进行安全的签名校验，默认开启。
    /// </summary>

    bool isSigningEnable() const;
    bool signingEnableIsSet() const;
    void unsetsigningEnable();
    void setSigningEnable(bool value);

    /// <summary>
    /// **参数说明**：签名校验的Key值，开启签名校验时使用。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getSigningToken() const;
    bool signingTokenIsSet() const;
    void unsetsigningToken();
    void setSigningToken(const std::string& value);

    /// <summary>
    /// **参数说明**：签名校验的公钥，开启签名校验时使用。用于认证设备携带的签名信息是否正确。
    /// </summary>

    std::string getSigningPublicKey() const;
    bool signingPublicKeyIsSet() const;
    void unsetsigningPublicKey();
    void setSigningPublicKey(const std::string& value);

    /// <summary>
    /// **参数说明**：是否为默认的鉴权方式，默认为false。
    /// </summary>

    bool isDefaultAuthorizer() const;
    bool defaultAuthorizerIsSet() const;
    void unsetdefaultAuthorizer();
    void setDefaultAuthorizer(bool value);

    /// <summary>
    /// **参数说明**：是否激活该鉴权方式 - ACTIVE：该鉴权为激活状态。 - INACTIVE：该鉴权为停用状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数说明**：是否开启缓存，默认为false，设备为true时，当设备入参（username，clientId，password，以及证书信息，函数urn）不变时，当缓存结果存在时，将直接使用缓存结果，建议在调试时设置为false，生产时设置为true，避免频繁调用函数。
    /// </summary>

    bool isCacheEnable() const;
    bool cacheEnableIsSet() const;
    void unsetcacheEnable();
    void setCacheEnable(bool value);

    /// <summary>
    /// 在物联网平台进行自定义鉴权相关操作的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如：20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 在物联网平台更新自定义鉴权相关操作的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如：20151212T121212Z。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string authorizerId_;
    bool authorizerIdIsSet_;
    std::string authorizerName_;
    bool authorizerNameIsSet_;
    std::string funcName_;
    bool funcNameIsSet_;
    std::string funcUrn_;
    bool funcUrnIsSet_;
    bool signingEnable_;
    bool signingEnableIsSet_;
    std::string signingToken_;
    bool signingTokenIsSet_;
    std::string signingPublicKey_;
    bool signingPublicKeyIsSet_;
    bool defaultAuthorizer_;
    bool defaultAuthorizerIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool cacheEnable_;
    bool cacheEnableIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDeviceAuthorizerResponse_H_
