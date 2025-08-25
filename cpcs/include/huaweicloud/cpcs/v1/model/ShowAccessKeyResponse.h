
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAccessKeyResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAccessKeyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAccessKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAccessKeyResponse();
    virtual ~ShowAccessKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAccessKeyResponse members

    /// <summary>
    /// 访问密钥的access key
    /// </summary>

    std::string getAccessKey() const;
    bool accessKeyIsSet() const;
    void unsetaccessKey();
    void setAccessKey(const std::string& value);

    /// <summary>
    /// 访问密钥的secret key
    /// </summary>

    std::string getSecretKey() const;
    bool secretKeyIsSet() const;
    void unsetsecretKey();
    void setSecretKey(const std::string& value);

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 密钥名称
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 是否导入
    /// </summary>

    bool isIsImported() const;
    bool isImportedIsSet() const;
    void unsetisImported();
    void setIsImported(bool value);


protected:
    std::string accessKey_;
    bool accessKeyIsSet_;
    std::string secretKey_;
    bool secretKeyIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    bool isImported_;
    bool isImportedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAccessKeyResponse_H_
