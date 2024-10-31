
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateMySQLCompatibilityRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateMySQLCompatibilityRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpdateMySQLCompatibilityRequestBody
    : public ModelBase
{
public:
    UpdateMySQLCompatibilityRequestBody();
    virtual ~UpdateMySQLCompatibilityRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMySQLCompatibilityRequestBody members

    /// <summary>
    /// MySQL兼容端口，修改端口的时候必填，不填默认保持原有设定端口，可选范围为：0, 1024-39998。 - 取值为0，标识关闭MySQL兼容端口服务。 - 限制端口： 2378,2379,2380,4999,5000,5999,6000,6001,6500,8000-8006,8097,8098,12016,12017,20049,20050,21731,21732,32122,32123,32124。 - 与数据库对外端口互斥。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);


protected:
    std::string port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateMySQLCompatibilityRequestBody_H_
