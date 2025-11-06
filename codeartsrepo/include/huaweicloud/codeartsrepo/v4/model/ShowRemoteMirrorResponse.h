
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRemoteMirrorResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRemoteMirrorResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRemoteMirrorResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRemoteMirrorResponse();
    virtual ~ShowRemoteMirrorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRemoteMirrorResponse members

    /// <summary>
    /// **参数解释：** 仓库镜像配置ID。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库ID。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 同步状态。
    /// </summary>

    std::string getUpdateStatus() const;
    bool updateStatusIsSet() const;
    void unsetupdateStatus();
    void setUpdateStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近修改时间。
    /// </summary>

    std::string getLastUpdateAt() const;
    bool lastUpdateAtIsSet() const;
    void unsetlastUpdateAt();
    void setLastUpdateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 镜像地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近同步成功时间。
    /// </summary>

    std::string getLastSuccessfulUpdateAt() const;
    bool lastSuccessfulUpdateAtIsSet() const;
    void unsetlastSuccessfulUpdateAt();
    void setLastSuccessfulUpdateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 同步失败次数。
    /// </summary>

    int32_t getNumberOfFailures() const;
    bool numberOfFailuresIsSet() const;
    void unsetnumberOfFailures();
    void setNumberOfFailures(int32_t value);

    /// <summary>
    /// **参数解释：** 开启定时同步。
    /// </summary>

    bool isMirroringEnabled() const;
    bool mirroringEnabledIsSet() const;
    void unsetmirroringEnabled();
    void setMirroringEnabled(bool value);

    /// <summary>
    /// **参数解释：** 私有镜像。
    /// </summary>

    bool isIsPrivate() const;
    bool isPrivateIsSet() const;
    void unsetisPrivate();
    void setIsPrivate(bool value);

    /// <summary>
    /// **参数解释：** 拓展点uuid。
    /// </summary>

    std::string getEndpointUuid() const;
    bool endpointUuidIsSet() const;
    void unsetendpointUuid();
    void setEndpointUuid(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近失败信息。
    /// </summary>

    std::string getLastError() const;
    bool lastErrorIsSet() const;
    void unsetlastError();
    void setLastError(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string updateStatus_;
    bool updateStatusIsSet_;
    std::string lastUpdateAt_;
    bool lastUpdateAtIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string lastSuccessfulUpdateAt_;
    bool lastSuccessfulUpdateAtIsSet_;
    int32_t numberOfFailures_;
    bool numberOfFailuresIsSet_;
    bool mirroringEnabled_;
    bool mirroringEnabledIsSet_;
    bool isPrivate_;
    bool isPrivateIsSet_;
    std::string endpointUuid_;
    bool endpointUuidIsSet_;
    std::string lastError_;
    bool lastErrorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRemoteMirrorResponse_H_
