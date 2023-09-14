
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ApplicationEndpoint_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ApplicationEndpoint_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ApplicationEndpoint
    : public ModelBase
{
public:
    ApplicationEndpoint();
    virtual ~ApplicationEndpoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ApplicationEndpoint members

    /// <summary>
    /// 创建application的时间 时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// Application endpoint的唯一资源标识。
    /// </summary>

    std::string getEndpointUrn() const;
    bool endpointUrnIsSet() const;
    void unsetendpointUrn();
    void setEndpointUrn(const std::string& value);

    /// <summary>
    /// 用户自定义数据 最大长度支持UTF-8编码后2048字节。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// endpoint启用开关 true或false字符串。
    /// </summary>

    std::string getEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(const std::string& value);

    /// <summary>
    /// 设备token 最大长度512个字节。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);


protected:
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endpointUrn_;
    bool endpointUrnIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string enabled_;
    bool enabledIsSet_;
    std::string token_;
    bool tokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ApplicationEndpoint_H_
