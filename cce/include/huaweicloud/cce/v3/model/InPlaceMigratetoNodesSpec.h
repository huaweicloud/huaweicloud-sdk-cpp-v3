
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceMigratetoNodesSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceMigratetoNodesSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/DataDiskCleanUpOption.h>
#include <huaweicloud/cce/v3/model/InplaceMigrateNodeItem.h>
#include <huaweicloud/cce/v3/model/InPlaceMigrateNodeExtendParam.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  InPlaceMigratetoNodesSpec
    : public ModelBase
{
public:
    InPlaceMigratetoNodesSpec();
    virtual ~InPlaceMigratetoNodesSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InPlaceMigratetoNodesSpec members

    /// <summary>
    /// **参数解释**： 腾挪节点列表 **约束限制**： 不涉及 
    /// </summary>

    std::vector<InplaceMigrateNodeItem>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<InplaceMigrateNodeItem>& value);

    /// <summary>
    /// 
    /// </summary>

    DataDiskCleanUpOption getDataDiskCleanUpOption() const;
    bool dataDiskCleanUpOptionIsSet() const;
    void unsetdataDiskCleanUpOption();
    void setDataDiskCleanUpOption(const DataDiskCleanUpOption& value);

    /// <summary>
    /// 
    /// </summary>

    InPlaceMigrateNodeExtendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const InPlaceMigrateNodeExtendParam& value);


protected:
    std::vector<InplaceMigrateNodeItem> nodes_;
    bool nodesIsSet_;
    DataDiskCleanUpOption dataDiskCleanUpOption_;
    bool dataDiskCleanUpOptionIsSet_;
    InPlaceMigrateNodeExtendParam extendParam_;
    bool extendParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceMigratetoNodesSpec_H_
