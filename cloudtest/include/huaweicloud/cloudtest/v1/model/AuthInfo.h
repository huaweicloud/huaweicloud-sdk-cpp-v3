
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AuthInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AuthInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AuthInfo
    : public ModelBase
{
public:
    AuthInfo();
    virtual ~AuthInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthInfo members

    /// <summary>
    /// 访问密钥
    /// </summary>

    std::string getAccessKey() const;
    bool accessKeyIsSet() const;
    void unsetaccessKey();
    void setAccessKey(const std::string& value);

    /// <summary>
    /// 私钥
    /// </summary>

    std::string getSecretKey() const;
    bool secretKeyIsSet() const;
    void unsetsecretKey();
    void setSecretKey(const std::string& value);


protected:
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AuthInfo_H_
