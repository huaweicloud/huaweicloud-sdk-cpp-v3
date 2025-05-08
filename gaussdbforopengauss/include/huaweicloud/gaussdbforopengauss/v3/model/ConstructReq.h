
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ConstructReq_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ConstructReq_H_


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
/// 搭建容灾请求参数。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ConstructReq
    : public ModelBase
{
public:
    ConstructReq();
    virtual ~ConstructReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConstructReq members

    /// <summary>
    /// 容灾类型。
    /// </summary>

    std::string getDisasterType() const;
    bool disasterTypeIsSet() const;
    void unsetdisasterType();
    void setDisasterType(const std::string& value);

    /// <summary>
    /// 对端实例任意数据ip。
    /// </summary>

    std::string getDrIp() const;
    bool drIpIsSet() const;
    void unsetdrIp();
    void setDrIp(const std::string& value);

    /// <summary>
    /// 对端实例账户名称。
    /// </summary>

    std::string getDrUserName() const;
    bool drUserNameIsSet() const;
    void unsetdrUserName();
    void setDrUserName(const std::string& value);

    /// <summary>
    /// 对端实例账户密码。
    /// </summary>

    std::string getDrUserPassword() const;
    bool drUserPasswordIsSet() const;
    void unsetdrUserPassword();
    void setDrUserPassword(const std::string& value);

    /// <summary>
    /// 容灾任务名称
    /// </summary>

    std::string getDrTaskName() const;
    bool drTaskNameIsSet() const;
    void unsetdrTaskName();
    void setDrTaskName(const std::string& value);


protected:
    std::string disasterType_;
    bool disasterTypeIsSet_;
    std::string drIp_;
    bool drIpIsSet_;
    std::string drUserName_;
    bool drUserNameIsSet_;
    std::string drUserPassword_;
    bool drUserPasswordIsSet_;
    std::string drTaskName_;
    bool drTaskNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ConstructReq_H_
