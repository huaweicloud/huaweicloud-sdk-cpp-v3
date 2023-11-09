
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobStatisticsRequest_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobStatisticsRequest_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ShowJobStatisticsRequest
    : public ModelBase
{
public:
    ShowJobStatisticsRequest();
    virtual ~ShowJobStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobStatisticsRequest members

    /// <summary>
    /// 联盟id，最大32位，字母和数字组成
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 开始日期
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 结束日期
    /// </summary>

    std::string getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const std::string& value);


protected:
    std::string leagueId_;
    bool leagueIdIsSet_;
    std::string startDate_;
    bool startDateIsSet_;
    std::string endDate_;
    bool endDateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowJobStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowJobStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobStatisticsRequest_H_
