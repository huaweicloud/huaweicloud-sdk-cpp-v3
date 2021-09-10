
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTopStatisticsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTopStatisticsResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/TopUrl.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ListTopStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTopStatisticsResponse();
    virtual ~ListTopStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTopStatisticsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TopUrl>& getTopUrls();
    bool topUrlsIsSet() const;
    void unsettopUrls();
    void setTopUrls(const std::vector<TopUrl>& value);


protected:
    std::vector<TopUrl> topUrls_;
    bool topUrlsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTopStatisticsResponse_H_
