
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RdsUpgradePrecheckV3Req_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RdsUpgradePrecheckV3Req_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// mysql5.7升级mysql8.0预检查请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RdsUpgradePrecheckV3Req
    : public ModelBase
{
public:
    RdsUpgradePrecheckV3Req();
    virtual ~RdsUpgradePrecheckV3Req();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RdsUpgradePrecheckV3Req members

    /// <summary>
    /// 特定场景使用，普通用户无需填写该字段。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);


protected:
    std::string targetVersion_;
    bool targetVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RdsUpgradePrecheckV3Req_H_
