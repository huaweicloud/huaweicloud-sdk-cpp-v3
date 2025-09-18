
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_BatchDeleteTrashesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_BatchDeleteTrashesRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/TrashArtifactModelForDelete.h>
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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  BatchDeleteTrashesRequest
    : public ModelBase
{
public:
    BatchDeleteTrashesRequest();
    virtual ~BatchDeleteTrashesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteTrashesRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TrashArtifactModelForDelete>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<TrashArtifactModelForDelete>& value);


protected:
    std::vector<TrashArtifactModelForDelete> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteTrashesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteTrashesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_BatchDeleteTrashesRequest_H_
