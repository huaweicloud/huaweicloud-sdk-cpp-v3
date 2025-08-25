
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateAppAccessKeyRequestBody_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateAppAccessKeyRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  CreateAppAccessKeyRequestBody
    : public ModelBase
{
public:
    CreateAppAccessKeyRequestBody();
    virtual ~CreateAppAccessKeyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAppAccessKeyRequestBody members

    /// <summary>
    /// 访问密钥名称
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 访问密钥ak，默认为空，系统自动生成
    /// </summary>

    std::string getAccessKey() const;
    bool accessKeyIsSet() const;
    void unsetaccessKey();
    void setAccessKey(const std::string& value);

    /// <summary>
    /// 访问密钥sk，默认为空，系统自动生成
    /// </summary>

    std::string getSecretKey() const;
    bool secretKeyIsSet() const;
    void unsetsecretKey();
    void setSecretKey(const std::string& value);


protected:
    std::string keyName_;
    bool keyNameIsSet_;
    std::string accessKey_;
    bool accessKeyIsSet_;
    std::string secretKey_;
    bool secretKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateAppAccessKeyRequestBody_H_
