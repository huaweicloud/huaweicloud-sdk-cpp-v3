
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TargetConfig_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TargetConfig_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  TargetConfig
    : public ModelBase
{
public:
    TargetConfig();
    virtual ~TargetConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TargetConfig members

    /// <summary>
    /// 当name&#x3D;RESIZE_FLAVOR时，表示规格变更任务的目标规格。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 当name&#x3D;RESIZE_FLAVOR时，表示规格变更任务的的目标cpu。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// 当name&#x3D;RESIZE_FLAVOR时，表示规格变更任务的目标内存。
    /// </summary>

    std::string getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(const std::string& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string mem_;
    bool memIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TargetConfig_H_
