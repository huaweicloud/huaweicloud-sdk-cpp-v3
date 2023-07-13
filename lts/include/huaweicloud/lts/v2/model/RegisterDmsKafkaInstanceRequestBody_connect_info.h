
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_RegisterDmsKafkaInstanceRequestBody_connect_info_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_RegisterDmsKafkaInstanceRequestBody_connect_info_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// kafka连接信息。购买kafka时，SASL_SSL是否配置，如果有，则需要填写账号密码
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  RegisterDmsKafkaInstanceRequestBody_connect_info
    : public ModelBase
{
public:
    RegisterDmsKafkaInstanceRequestBody_connect_info();
    virtual ~RegisterDmsKafkaInstanceRequestBody_connect_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RegisterDmsKafkaInstanceRequestBody_connect_info members

    /// <summary>
    /// 账号
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 密码
    /// </summary>

    std::string getPwd() const;
    bool pwdIsSet() const;
    void unsetpwd();
    void setPwd(const std::string& value);


protected:
    std::string userName_;
    bool userNameIsSet_;
    std::string pwd_;
    bool pwdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_RegisterDmsKafkaInstanceRequestBody_connect_info_H_
