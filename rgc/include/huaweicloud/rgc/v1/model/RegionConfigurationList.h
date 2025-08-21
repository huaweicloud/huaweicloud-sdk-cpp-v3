
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_RegionConfigurationList_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_RegionConfigurationList_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 区域纳管情况。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  RegionConfigurationList
    : public ModelBase
{
public:
    RegionConfigurationList();
    virtual ~RegionConfigurationList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegionConfigurationList members

    /// <summary>
    /// 区域名字。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 区域状态。
    /// </summary>

    std::string getRegionConfigurationStatus() const;
    bool regionConfigurationStatusIsSet() const;
    void unsetregionConfigurationStatus();
    void setRegionConfigurationStatus(const std::string& value);


protected:
    std::string region_;
    bool regionIsSet_;
    std::string regionConfigurationStatus_;
    bool regionConfigurationStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_RegionConfigurationList_H_
