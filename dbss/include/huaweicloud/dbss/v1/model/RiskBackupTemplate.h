
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskBackupTemplate_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskBackupTemplate_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  RiskBackupTemplate
    : public ModelBase
{
public:
    RiskBackupTemplate();
    virtual ~RiskBackupTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RiskBackupTemplate members

    /// <summary>
    /// 备份周期 - PER_DAY: 每天 - PER_WEEK: 每周 - PER_MONTH: 每月 - PER_HOUR: 每小时 - FIVE_MIN: 每5分钟
    /// </summary>

    std::string getCycle() const;
    bool cycleIsSet() const;
    void unsetcycle();
    void setCycle(const std::string& value);

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::string& value);

    /// <summary>
    /// 备份开关    - 0：关闭    - 1：开启
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string cycle_;
    bool cycleIsSet_;
    std::string dbId_;
    bool dbIdIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskBackupTemplate_H_
