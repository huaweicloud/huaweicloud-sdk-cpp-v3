
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ActionProgress_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ActionProgress_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群操作进度，任务信息，由key、value组成。key值为正在进行的任务，value值为正在进行任务的进度。示例如 \&quot;action_progress\&quot;:{\&quot;SNAPSHOTTING\&quot;:\&quot;16%\&quot;}
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  ActionProgress
    : public ModelBase
{
public:
    ActionProgress();
    virtual ~ActionProgress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionProgress members

    /// <summary>
    /// 创建集群进度，例如：29%
    /// </summary>

    std::string getCreating() const;
    bool creatingIsSet() const;
    void unsetcreating();
    void setCreating(const std::string& value);

    /// <summary>
    /// 扩容集群进度，例如：29%
    /// </summary>

    std::string getGrowing() const;
    bool growingIsSet() const;
    void unsetgrowing();
    void setGrowing(const std::string& value);

    /// <summary>
    /// 恢复集群进度，例如：29%
    /// </summary>

    std::string getRestoring() const;
    bool restoringIsSet() const;
    void unsetrestoring();
    void setRestoring(const std::string& value);

    /// <summary>
    /// 集群快照进度，例如：29%
    /// </summary>

    std::string getSnapshotting() const;
    bool snapshottingIsSet() const;
    void unsetsnapshotting();
    void setSnapshotting(const std::string& value);

    /// <summary>
    /// 修复集群进度，例如：29%
    /// </summary>

    std::string getRepairing() const;
    bool repairingIsSet() const;
    void unsetrepairing();
    void setRepairing(const std::string& value);


protected:
    std::string creating_;
    bool creatingIsSet_;
    std::string growing_;
    bool growingIsSet_;
    std::string restoring_;
    bool restoringIsSet_;
    std::string snapshotting_;
    bool snapshottingIsSet_;
    std::string repairing_;
    bool repairingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ActionProgress_H_
