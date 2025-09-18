
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListArtifactoryComponentRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListArtifactoryComponentRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ListArtifactoryComponentRequest
    : public ModelBase
{
public:
    ListArtifactoryComponentRequest();
    virtual ~ListArtifactoryComponentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListArtifactoryComponentRequest members

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 仓库名称
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// 仓库中路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 仓库格式
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListArtifactoryComponentRequest& dereference_from_shared_ptr(std::shared_ptr<ListArtifactoryComponentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListArtifactoryComponentRequest_H_
