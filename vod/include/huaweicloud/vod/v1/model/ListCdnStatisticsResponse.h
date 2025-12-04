
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListCdnStatisticsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListCdnStatisticsResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ListCdnStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCdnStatisticsResponse();
    virtual ~ListCdnStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCdnStatisticsResponse members

    /// <summary>
    /// 统计起始时间 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 采样时间间隔 
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// cdn数据查询结果 
    /// </summary>

    std::map<std::string, std::vector<int64_t>>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::map<std::string, std::vector<int64_t>>& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    std::map<std::string, std::vector<int64_t>> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListCdnStatisticsResponse_H_
