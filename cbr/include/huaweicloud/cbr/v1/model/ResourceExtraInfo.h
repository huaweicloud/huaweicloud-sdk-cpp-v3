
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceExtraInfo_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceExtraInfo_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/ResourceExtraInfoIncludeVolumes.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  ResourceExtraInfo
    : public ModelBase
{
public:
    ResourceExtraInfo();
    virtual ~ResourceExtraInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceExtraInfo members

    /// <summary>
    /// 需要排除备份的卷id。仅在多系统盘备份特性中有效，排除不需要备份的磁盘。当虚拟机新绑定磁盘时，也能继续排除之前设置不用备份的卷。
    /// </summary>

    std::vector<std::string>& getExcludeVolumes();
    bool excludeVolumesIsSet() const;
    void unsetexcludeVolumes();
    void setExcludeVolumes(const std::vector<std::string>& value);

    /// <summary>
    /// 指定需要备份的卷,若有指定值，则每次备份都只备份指定的卷，如虚拟机绑定存储库之后新绑定的卷不会备份；若为空默认为资源全部卷；仅虚拟机磁盘级备份特性中有效。
    /// </summary>

    std::vector<ResourceExtraInfoIncludeVolumes>& getIncludeVolumes();
    bool includeVolumesIsSet() const;
    void unsetincludeVolumes();
    void setIncludeVolumes(const std::vector<ResourceExtraInfoIncludeVolumes>& value);


protected:
    std::vector<std::string> excludeVolumes_;
    bool excludeVolumesIsSet_;
    std::vector<ResourceExtraInfoIncludeVolumes> includeVolumes_;
    bool includeVolumesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceExtraInfo_H_
