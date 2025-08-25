
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInstanceStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInstanceStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/Versions.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件状态信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddonInstanceStatus
    : public ModelBase
{
public:
    AddonInstanceStatus();
    virtual ~AddonInstanceStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddonInstanceStatus members

    /// <summary>
    /// 插件实例状态, 取值如下 - running：运行中，表示插件全部实例状态都在运行中，插件正常使用。 - abnormal：不可用，表示插件状态异常，插件不可使用。可单击插件名称查看实例异常事件。 - installing：安装中，表示插件正在安装中。 - installFailed：安装失败，表示插件安装失败，需要卸载后重新安装。 - upgrading：升级中，表示插件正在更新中。 - upgradeFailed：升级失败，表示插件升级失败，可重试升级或卸载后重新安装。 - deleting：删除中，表示插件正在删除中。 - deleteFailed：删除失败，表示插件删除失败，可重试卸载。 - deleteSuccess：删除成功，表示插件删除成功。 - available：部分就绪，表示插件下只有部分实例状态为运行中，插件部分功能可用。 - rollbacking：回滚中，表示插件正在回滚中。 - rollbackFailed：回滚失败，表示插件回滚失败，可重试回滚或卸载后重新安装。 - unknown：未知状态，表示插件模板实例不存在。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 插件安装失败原因
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 安装错误详情
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 此插件版本，支持升级的集群版本
    /// </summary>

    std::vector<std::string>& getTargetVersions();
    bool targetVersionsIsSet() const;
    void unsettargetVersions();
    void setTargetVersions(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Versions getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetcurrentVersion();
    void setCurrentVersion(const Versions& value);

    /// <summary>
    /// 是否支持回滚到插件升级前的插件版本
    /// </summary>

    bool isIsRollbackable() const;
    bool isRollbackableIsSet() const;
    void unsetisRollbackable();
    void setIsRollbackable(bool value);

    /// <summary>
    /// 插件升级或回滚前的版本
    /// </summary>

    std::string getPreviousVersion() const;
    bool previousVersionIsSet() const;
    void unsetpreviousVersion();
    void setPreviousVersion(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<std::string> targetVersions_;
    bool targetVersionsIsSet_;
    Versions currentVersion_;
    bool currentVersionIsSet_;
    bool isRollbackable_;
    bool isRollbackableIsSet_;
    std::string previousVersion_;
    bool previousVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInstanceStatus_H_
