
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowVodRetrievalRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowVodRetrievalRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowVodRetrievalRequest
    : public ModelBase
{
public:
    ShowVodRetrievalRequest();
    virtual ~ShowVodRetrievalRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVodRetrievalRequest members

    /// <summary>
    /// 开始时间 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 采样间隔，单位：秒，取值说明： 时间跨度1天：1小时、4小时、8小时，分别对应3600秒、14400秒和28800秒。 时间跨度2~7天：1小时、4小时、8小时、1天，分别对应3600秒、14400秒、28800秒和86400秒。 时间跨度8~31天：4小时、8小时、1天，分别对应14400秒、28800秒和86400秒。 如果不传，默认取对应时间跨度的最小间隔。 
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t interval_;
    bool intervalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVodRetrievalRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVodRetrievalRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowVodRetrievalRequest_H_
