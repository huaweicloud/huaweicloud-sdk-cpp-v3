
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateSnapshotResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateSnapshotResult_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建快照的结果
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateSnapshotResult
    : public ModelBase
{
public:
    CreateSnapshotResult();
    virtual ~CreateSnapshotResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSnapshotResult members

    /// <summary>
    /// 快照ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 快照名称。创建时自动生成，工作项快照名称生成规则为：“工作项类型”+“ v” + “年”+“.”+“月”+“.”+“日”+“.”+“当日生成版本次数”。例如工作项类型为IR的工作项在2026年3月25日第一次打快照系统生成的快照名称为：IR v26.03.25.1。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 快照类型。工作项快照固定为：issue_snap_item。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 快照的工作项ID。
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 快照的创建人ID。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 快照是否可被删除。
    /// </summary>

    bool isDeletable() const;
    bool deletableIsSet() const;
    void unsetdeletable();
    void setDeletable(bool value);

    /// <summary>
    /// 创建快照失败的原因。
    /// </summary>

    std::string getErrormsg() const;
    bool errormsgIsSet() const;
    void unseterrormsg();
    void setErrormsg(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    bool deletable_;
    bool deletableIsSet_;
    std::string errormsg_;
    bool errormsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateSnapshotResult_H_
