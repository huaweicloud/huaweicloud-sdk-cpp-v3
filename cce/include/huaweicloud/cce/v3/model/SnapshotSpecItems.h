
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotSpecItems_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotSpecItems_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CCE_V3_EXPORT  SnapshotSpecItems
    : public ModelBase
{
public:
    SnapshotSpecItems();
    virtual ~SnapshotSpecItems();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotSpecItems members

    /// <summary>
    /// 子任务ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 子任务类型 **取值范围**： - master-backup：集群EVS备份 - master-backup-rollback：集群EVS回滚 **默认取值**： 不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 状态 **取值范围**： - Init：初始化 - Queuing：等待 - Running：运行中 - Pause：暂停 - Success：成功 - Failed：失败 **默认取值**： 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务创建时间
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// 任务更新时间
    /// </summary>

    std::string getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const std::string& value);

    /// <summary>
    /// 信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    std::string updateTimestamp_;
    bool updateTimestampIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotSpecItems_H_
