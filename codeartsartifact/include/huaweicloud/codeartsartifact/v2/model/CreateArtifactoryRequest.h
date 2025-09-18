
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CreateArtifactoryRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CreateArtifactoryRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/CreateNotMavenRepoDO.h>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  CreateArtifactoryRequest
    : public ModelBase
{
public:
    CreateArtifactoryRequest();
    virtual ~CreateArtifactoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateArtifactoryRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateNotMavenRepoDO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateNotMavenRepoDO& value);


protected:
    CreateNotMavenRepoDO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateArtifactoryRequest& dereference_from_shared_ptr(std::shared_ptr<CreateArtifactoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CreateArtifactoryRequest_H_
