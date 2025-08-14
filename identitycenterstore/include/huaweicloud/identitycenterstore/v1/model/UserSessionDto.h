
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UserSessionDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UserSessionDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户session详情
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  UserSessionDto
    : public ModelBase
{
public:
    UserSessionDto();
    virtual ~UserSessionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserSessionDto members

    /// <summary>
    /// 会话创建时间
    /// </summary>

    int64_t getCreationTime() const;
    bool creationTimeIsSet() const;
    void unsetcreationTime();
    void setCreationTime(int64_t value);

    /// <summary>
    /// 用户IP地址
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 会话ID
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// 会话失效时间
    /// </summary>

    int64_t getSessionNotValidAfter() const;
    bool sessionNotValidAfterIsSet() const;
    void unsetsessionNotValidAfter();
    void setSessionNotValidAfter(int64_t value);

    /// <summary>
    /// 用户客户端信息
    /// </summary>

    std::string getUserAgent() const;
    bool userAgentIsSet() const;
    void unsetuserAgent();
    void setUserAgent(const std::string& value);

    /// <summary>
    /// 用户唯一标识ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    int64_t creationTime_;
    bool creationTimeIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string sessionId_;
    bool sessionIdIsSet_;
    int64_t sessionNotValidAfter_;
    bool sessionNotValidAfterIsSet_;
    std::string userAgent_;
    bool userAgentIsSet_;
    std::string userId_;
    bool userIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UserSessionDto_H_
