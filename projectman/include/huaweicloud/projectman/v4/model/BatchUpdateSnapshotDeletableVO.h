
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateSnapshotDeletableVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateSnapshotDeletableVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量更新快照可删除标识请求对象。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchUpdateSnapshotDeletableVO
    : public ModelBase
{
public:
    BatchUpdateSnapshotDeletableVO();
    virtual ~BatchUpdateSnapshotDeletableVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateSnapshotDeletableVO members

    /// <summary>
    /// 快照ID列表。通过接口查询工作项计划管理快照列表获取响应参数中的id字段。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);

    /// <summary>
    /// 是否为可删除标识。
    /// </summary>

    bool isDeletable() const;
    bool deletableIsSet() const;
    void unsetdeletable();
    void setDeletable(bool value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;
    bool deletable_;
    bool deletableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateSnapshotDeletableVO_H_
