
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpResourceExtraInfoResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpResourceExtraInfoResp_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/ResourceExtraInfoIncludeVolumesResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  OpResourceExtraInfoResp
    : public ModelBase
{
public:
    OpResourceExtraInfoResp();
    virtual ~OpResourceExtraInfoResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpResourceExtraInfoResp members

    /// <summary>
    /// **参数解释：** 需要排除备份的卷ID列表，列表元素为String类型的UUID。 **取值范围：** 不涉及
    /// </summary>

    std::vector<std::string>& getExcludeVolumes();
    bool excludeVolumesIsSet() const;
    void unsetexcludeVolumes();
    void setExcludeVolumes(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 指定需要备份的卷，如果有指定值，则每次备份都只备份指定的卷，如虚拟机绑定存储库之后新绑定的卷不会备份；如果为空默认为资源全部卷；仅虚拟机磁盘级备份特性中有效
    /// </summary>

    std::vector<ResourceExtraInfoIncludeVolumesResp>& getIncludeVolumes();
    bool includeVolumesIsSet() const;
    void unsetincludeVolumes();
    void setIncludeVolumes(const std::vector<ResourceExtraInfoIncludeVolumesResp>& value);


protected:
    std::vector<std::string> excludeVolumes_;
    bool excludeVolumesIsSet_;
    std::vector<ResourceExtraInfoIncludeVolumesResp> includeVolumes_;
    bool includeVolumesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpResourceExtraInfoResp_H_
