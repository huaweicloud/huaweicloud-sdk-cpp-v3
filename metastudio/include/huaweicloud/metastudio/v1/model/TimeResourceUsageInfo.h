
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TimeResourceUsageInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TimeResourceUsageInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ResourceUsageInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TimeResourceUsageInfo
    : public ModelBase
{
public:
    TimeResourceUsageInfo();
    virtual ~TimeResourceUsageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TimeResourceUsageInfo members

    /// <summary>
    /// 查询时间段开始时间,格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 资源用量列表
    /// </summary>

    std::vector<ResourceUsageInfo>& getResourcesUsage();
    bool resourcesUsageIsSet() const;
    void unsetresourcesUsage();
    void setResourcesUsage(const std::vector<ResourceUsageInfo>& value);


protected:
    std::string time_;
    bool timeIsSet_;
    std::vector<ResourceUsageInfo> resourcesUsage_;
    bool resourcesUsageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TimeResourceUsageInfo_H_
