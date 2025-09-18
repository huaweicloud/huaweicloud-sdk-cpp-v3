
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_BatchRestoreRepoRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_BatchRestoreRepoRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/IDETrashArtifactModel.h>
#include <vector>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  BatchRestoreRepoRequest
    : public ModelBase
{
public:
    BatchRestoreRepoRequest();
    virtual ~BatchRestoreRepoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchRestoreRepoRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<IDETrashArtifactModel>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<IDETrashArtifactModel>& value);


protected:
    std::vector<IDETrashArtifactModel> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchRestoreRepoRequest& dereference_from_shared_ptr(std::shared_ptr<BatchRestoreRepoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_BatchRestoreRepoRequest_H_
