
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ValidateInstanceConnectionRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ValidateInstanceConnectionRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ValidateConnectionUserInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户登录连接测试信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ValidateInstanceConnectionRequestBody
    : public ModelBase
{
public:
    ValidateInstanceConnectionRequestBody();
    virtual ~ValidateInstanceConnectionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateInstanceConnectionRequestBody members

    /// <summary>
    /// 连接目标实例id
    /// </summary>

    std::string getTargetInstanceId() const;
    bool targetInstanceIdIsSet() const;
    void unsettargetInstanceId();
    void setTargetInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ValidateConnectionUserInfo getUserInfo() const;
    bool userInfoIsSet() const;
    void unsetuserInfo();
    void setUserInfo(const ValidateConnectionUserInfo& value);


protected:
    std::string targetInstanceId_;
    bool targetInstanceIdIsSet_;
    ValidateConnectionUserInfo userInfo_;
    bool userInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ValidateInstanceConnectionRequestBody_H_
