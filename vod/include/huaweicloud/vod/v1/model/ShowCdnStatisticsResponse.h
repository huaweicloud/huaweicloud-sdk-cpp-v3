
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowCdnStatisticsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowCdnStatisticsResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowCdnStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCdnStatisticsResponse();
    virtual ~ShowCdnStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCdnStatisticsResponse members

    /// <summary>
    /// 统计起始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 统计间隔。
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// 采样数据数组。  从start_time开始，每个间隔对应一个采样数据。
    /// </summary>

    std::vector<int64_t>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(std::vector<int64_t> value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    std::vector<int64_t> values_;
    bool valuesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowCdnStatisticsResponse_H_
