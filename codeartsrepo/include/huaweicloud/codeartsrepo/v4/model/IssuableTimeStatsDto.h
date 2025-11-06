
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_IssuableTimeStatsDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_IssuableTimeStatsDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 合并请求的时间统计信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  IssuableTimeStatsDto
    : public ModelBase
{
public:
    IssuableTimeStatsDto();
    virtual ~IssuableTimeStatsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssuableTimeStatsDto members

    /// <summary>
    /// 合并请求时间估计
    /// </summary>

    int32_t getTimeEstimate() const;
    bool timeEstimateIsSet() const;
    void unsettimeEstimate();
    void setTimeEstimate(int32_t value);

    /// <summary>
    /// 合并请求总时长
    /// </summary>

    int32_t getTotalTimeSpent() const;
    bool totalTimeSpentIsSet() const;
    void unsettotalTimeSpent();
    void setTotalTimeSpent(int32_t value);

    /// <summary>
    /// 合并请求人类时间估计
    /// </summary>

    std::string getHumanTimeEstimate() const;
    bool humanTimeEstimateIsSet() const;
    void unsethumanTimeEstimate();
    void setHumanTimeEstimate(const std::string& value);

    /// <summary>
    /// 合并请求人类总时长
    /// </summary>

    std::string getHumanTotalTimeSpent() const;
    bool humanTotalTimeSpentIsSet() const;
    void unsethumanTotalTimeSpent();
    void setHumanTotalTimeSpent(const std::string& value);


protected:
    int32_t timeEstimate_;
    bool timeEstimateIsSet_;
    int32_t totalTimeSpent_;
    bool totalTimeSpentIsSet_;
    std::string humanTimeEstimate_;
    bool humanTimeEstimateIsSet_;
    std::string humanTotalTimeSpent_;
    bool humanTotalTimeSpentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_IssuableTimeStatsDto_H_
