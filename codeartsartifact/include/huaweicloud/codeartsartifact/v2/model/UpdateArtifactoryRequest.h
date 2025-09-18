
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateArtifactoryRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateArtifactoryRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/UpdateNotMavenRepoDO.h>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  UpdateArtifactoryRequest
    : public ModelBase
{
public:
    UpdateArtifactoryRequest();
    virtual ~UpdateArtifactoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateArtifactoryRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateNotMavenRepoDO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateNotMavenRepoDO& value);


protected:
    UpdateNotMavenRepoDO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateArtifactoryRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateArtifactoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateArtifactoryRequest_H_
