
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleDurationInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleDurationInfo_H_


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
/// 策略有效期。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  JobScheduleDurationInfo
    : public ModelBase
{
public:
    JobScheduleDurationInfo();
    virtual ~JobScheduleDurationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobScheduleDurationInfo members

    /// <summary>
    /// 第一次执行日期 yyyy-MM-dd。取值范围1990-01-01至2099-12-31
    /// </summary>

    std::string getActiveStartDate() const;
    bool activeStartDateIsSet() const;
    void unsetactiveStartDate();
    void setActiveStartDate(const std::string& value);

    /// <summary>
    /// 最后一次执行日期。默认不会结束 yyyy-MM-dd
    /// </summary>

    std::string getActiveEndDate() const;
    bool activeEndDateIsSet() const;
    void unsetactiveEndDate();
    void setActiveEndDate(const std::string& value);


protected:
    std::string activeStartDate_;
    bool activeStartDateIsSet_;
    std::string activeEndDate_;
    bool activeEndDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_JobScheduleDurationInfo_H_
