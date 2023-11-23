
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlPreCheckUpgradeMajorVersionReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlPreCheckUpgradeMajorVersionReq_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgresqlPreCheckUpgradeMajorVersionReq
    : public ModelBase
{
public:
    PostgresqlPreCheckUpgradeMajorVersionReq();
    virtual ~PostgresqlPreCheckUpgradeMajorVersionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgresqlPreCheckUpgradeMajorVersionReq members

    /// <summary>
    /// 目标版本。
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlPreCheckUpgradeMajorVersionReq_H_
