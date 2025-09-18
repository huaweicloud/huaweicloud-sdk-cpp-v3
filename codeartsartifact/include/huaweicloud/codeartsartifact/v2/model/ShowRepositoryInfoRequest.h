
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowRepositoryInfoRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowRepositoryInfoRequest_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowRepositoryInfoRequest
    : public ModelBase
{
public:
    ShowRepositoryInfoRequest();
    virtual ~ShowRepositoryInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryInfoRequest members

    /// <summary>
    /// 仓库id
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);


protected:
    std::string repoId_;
    bool repoIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRepositoryInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRepositoryInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowRepositoryInfoRequest_H_
