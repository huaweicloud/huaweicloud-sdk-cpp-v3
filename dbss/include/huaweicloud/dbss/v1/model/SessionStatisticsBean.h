
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SessionStatisticsBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SessionStatisticsBean_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  SessionStatisticsBean
    : public ModelBase
{
public:
    SessionStatisticsBean();
    virtual ~SessionStatisticsBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SessionStatisticsBean members

    /// <summary>
    /// 活跃SESSION数量
    /// </summary>

    int64_t getActiveSessionNum() const;
    bool activeSessionNumIsSet() const;
    void unsetactiveSessionNum();
    void setActiveSessionNum(int64_t value);

    /// <summary>
    /// 失败SESSION数量
    /// </summary>

    int64_t getFailSessionNum() const;
    bool failSessionNumIsSet() const;
    void unsetfailSessionNum();
    void setFailSessionNum(int64_t value);

    /// <summary>
    /// 新增SESSION数量
    /// </summary>

    int64_t getNewSessionNum() const;
    bool newSessionNumIsSet() const;
    void unsetnewSessionNum();
    void setNewSessionNum(int64_t value);

    /// <summary>
    /// 周期
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);


protected:
    int64_t activeSessionNum_;
    bool activeSessionNumIsSet_;
    int64_t failSessionNum_;
    bool failSessionNumIsSet_;
    int64_t newSessionNum_;
    bool newSessionNumIsSet_;
    std::string period_;
    bool periodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SessionStatisticsBean_H_
