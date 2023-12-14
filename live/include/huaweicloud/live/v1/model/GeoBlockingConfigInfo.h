
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_GeoBlockingConfigInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_GeoBlockingConfigInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  GeoBlockingConfigInfo
    : public ModelBase
{
public:
    GeoBlockingConfigInfo();
    virtual ~GeoBlockingConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeoBlockingConfigInfo members

    /// <summary>
    /// 应用名
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 限制区域列表, 空列表表示不限制。 除中国以外，其他地区代码，2位字母大写。代码格式参阅[ISO 3166-1 alpha-2](https://www.iso.org/obp/ui/#search/code/) 包含如下部分取值： - CN-IN：中国大陆 - CN-HK：中国香港 - CN-MO：中国澳门 - CN-TW：中国台湾 - BR：巴西
    /// </summary>

    std::vector<std::string>& getAreaWhitelist();
    bool areaWhitelistIsSet() const;
    void unsetareaWhitelist();
    void setAreaWhitelist(const std::vector<std::string>& value);


protected:
    std::string app_;
    bool appIsSet_;
    std::vector<std::string> areaWhitelist_;
    bool areaWhitelistIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_GeoBlockingConfigInfo_H_
