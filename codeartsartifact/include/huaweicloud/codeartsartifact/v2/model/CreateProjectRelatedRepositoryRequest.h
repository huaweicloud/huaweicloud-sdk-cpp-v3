
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CreateProjectRelatedRepositoryRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CreateProjectRelatedRepositoryRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/IDEPrivilageProjectInfo.h>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  CreateProjectRelatedRepositoryRequest
    : public ModelBase
{
public:
    CreateProjectRelatedRepositoryRequest();
    virtual ~CreateProjectRelatedRepositoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectRelatedRepositoryRequest members

    /// <summary>
    /// 
    /// </summary>

    IDEPrivilageProjectInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IDEPrivilageProjectInfo& value);


protected:
    IDEPrivilageProjectInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateProjectRelatedRepositoryRequest& dereference_from_shared_ptr(std::shared_ptr<CreateProjectRelatedRepositoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CreateProjectRelatedRepositoryRequest_H_
