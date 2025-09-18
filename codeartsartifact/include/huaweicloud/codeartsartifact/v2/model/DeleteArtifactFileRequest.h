
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_DeleteArtifactFileRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_DeleteArtifactFileRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/PathMap.h>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  DeleteArtifactFileRequest
    : public ModelBase
{
public:
    DeleteArtifactFileRequest();
    virtual ~DeleteArtifactFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteArtifactFileRequest members

    /// <summary>
    /// 
    /// </summary>

    PathMap getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PathMap& value);


protected:
    PathMap body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteArtifactFileRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteArtifactFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_DeleteArtifactFileRequest_H_
