
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/SnapshotSpecItems.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  SnapshotSpec
    : public ModelBase
{
public:
    SnapshotSpec();
    virtual ~SnapshotSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotSpec members

    /// <summary>
    /// 备份任务详情
    /// </summary>

    std::vector<SnapshotSpecItems>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<SnapshotSpecItems>& value);


protected:
    std::vector<SnapshotSpecItems> items_;
    bool itemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotSpec_H_
