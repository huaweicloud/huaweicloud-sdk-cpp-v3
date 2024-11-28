
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ComputeFlavorGroup_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ComputeFlavorGroup_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/ComputeFlavor.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询数据库可变更规格接口中，规格组类型
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ComputeFlavorGroup
    : public ModelBase
{
public:
    ComputeFlavorGroup();
    virtual ~ComputeFlavorGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ComputeFlavorGroup members

    /// <summary>
    /// 性能规格，包含以下状态：  normal：通用增强型。 normal2：通用增强Ⅱ型。 armFlavors：鲲鹏通用增强型。 dedicicateNormal（dedicatedNormalLocalssd）：x86独享型。 armLocalssd：鲲鹏通用型。 normalLocalssd：x86通用型。 general：通用型。 dedicated 对于PostgreSQL引擎：独享型
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// 计算规格列表
    /// </summary>

    std::vector<ComputeFlavor>& getComputeFlavors();
    bool computeFlavorsIsSet() const;
    void unsetcomputeFlavors();
    void setComputeFlavors(const std::vector<ComputeFlavor>& value);


protected:
    std::string groupType_;
    bool groupTypeIsSet_;
    std::vector<ComputeFlavor> computeFlavors_;
    bool computeFlavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ComputeFlavorGroup_H_
