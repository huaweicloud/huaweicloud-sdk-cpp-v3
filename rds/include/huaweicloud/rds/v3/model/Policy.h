
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Policy_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Policy_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  Policy
    : public ModelBase
{
public:
    Policy();
    virtual ~Policy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Policy members

    /// <summary>
    /// 备份周期的crontab表达式
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 保留时长（天）
    /// </summary>

    std::string getRetentionDays() const;
    bool retentionDaysIsSet() const;
    void unsetretentionDays();
    void setRetentionDays(const std::string& value);


protected:
    std::string period_;
    bool periodIsSet_;
    std::string retentionDays_;
    bool retentionDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Policy_H_
