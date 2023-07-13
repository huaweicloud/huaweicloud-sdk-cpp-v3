
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_DownloadStatisticsExcelResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_DownloadStatisticsExcelResponse_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  DownloadStatisticsExcelResponse
    : public ModelBase, public HttpResponse
{
public:
    DownloadStatisticsExcelResponse();
    virtual ~DownloadStatisticsExcelResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DownloadStatisticsExcelResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_DownloadStatisticsExcelResponse_H_
