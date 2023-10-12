
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_AppQualityInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_AppQualityInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v1/model/QualityInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  AppQualityInfo
    : public ModelBase
{
public:
    AppQualityInfo();
    virtual ~AppQualityInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AppQualityInfo members

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 视频质量信息
    /// </summary>

    std::vector<QualityInfo>& getQualityInfo();
    bool qualityInfoIsSet() const;
    void unsetqualityInfo();
    void setQualityInfo(const std::vector<QualityInfo>& value);


protected:
    std::string appName_;
    bool appNameIsSet_;
    std::vector<QualityInfo> qualityInfo_;
    bool qualityInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_AppQualityInfo_H_
