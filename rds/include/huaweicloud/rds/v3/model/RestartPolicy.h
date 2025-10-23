
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestartPolicy_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestartPolicy_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  RestartPolicy
    : public ModelBase
{
public:
    RestartPolicy();
    virtual ~RestartPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestartPolicy members

    /// <summary>
    /// 重启周期配置，在重启周期内的可维护时间窗进行重启，时区为UTC，取值范围： begin: 每月的第一天 middle：每月的15号 end：每月的最后一天 空列表，表示该功能关闭。
    /// </summary>

    std::vector<std::string>& getPeriod();
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::vector<std::string>& value);

    /// <summary>
    /// 所在时区相较于UTC时间的偏移量，取值范围：格式必须为+hh:mm，或者-hh:mm，例如+08:00。
    /// </summary>

    std::string getUtcOffset() const;
    bool utcOffsetIsSet() const;
    void unsetutcOffset();
    void setUtcOffset(const std::string& value);


protected:
    std::vector<std::string> period_;
    bool periodIsSet_;
    std::string utcOffset_;
    bool utcOffsetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestartPolicy_H_
