
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertStatisticsDto_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertStatisticsDto_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AlertStatisticsDto
    : public ModelBase
{
public:
    AlertStatisticsDto();
    virtual ~AlertStatisticsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlertStatisticsDto members

    /// <summary>
    /// 阻塞告警次数
    /// </summary>

    int32_t getBlockAlertCount() const;
    bool blockAlertCountIsSet() const;
    void unsetblockAlertCount();
    void setBlockAlertCount(int32_t value);

    /// <summary>
    /// 异常告警次数
    /// </summary>

    int32_t getExceptionAlertCount() const;
    bool exceptionAlertCountIsSet() const;
    void unsetexceptionAlertCount();
    void setExceptionAlertCount(int32_t value);

    /// <summary>
    /// 失败告警次数
    /// </summary>

    int32_t getFailAlertCount() const;
    bool failAlertCountIsSet() const;
    void unsetfailAlertCount();
    void setFailAlertCount(int32_t value);

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 统计时间
    /// </summary>

    int64_t getStatisticsTime() const;
    bool statisticsTimeIsSet() const;
    void unsetstatisticsTime();
    void setStatisticsTime(int64_t value);

    /// <summary>
    /// 超时告警次数
    /// </summary>

    int32_t getTimeoutAlertCount() const;
    bool timeoutAlertCountIsSet() const;
    void unsettimeoutAlertCount();
    void setTimeoutAlertCount(int32_t value);


protected:
    int32_t blockAlertCount_;
    bool blockAlertCountIsSet_;
    int32_t exceptionAlertCount_;
    bool exceptionAlertCountIsSet_;
    int32_t failAlertCount_;
    bool failAlertCountIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    int64_t statisticsTime_;
    bool statisticsTimeIsSet_;
    int32_t timeoutAlertCount_;
    bool timeoutAlertCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertStatisticsDto_H_
