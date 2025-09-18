
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowFileTreeRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowFileTreeRequest_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowFileTreeRequest
    : public ModelBase
{
public:
    ShowFileTreeRequest();
    virtual ~ShowFileTreeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFileTreeRequest members

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
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 是否是回收站文件
    /// </summary>

    bool isIsRecycleBin() const;
    bool isRecycleBinIsSet() const;
    void unsetisRecycleBin();
    void setIsRecycleBin(bool value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    bool isRecycleBin_;
    bool isRecycleBinIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowFileTreeRequest& dereference_from_shared_ptr(std::shared_ptr<ShowFileTreeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowFileTreeRequest_H_
