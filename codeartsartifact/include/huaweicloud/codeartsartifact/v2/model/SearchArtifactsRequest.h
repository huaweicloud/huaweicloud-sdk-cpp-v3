
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SearchArtifactsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SearchArtifactsRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/IDERepoSearchDO.h>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  SearchArtifactsRequest
    : public ModelBase
{
public:
    SearchArtifactsRequest();
    virtual ~SearchArtifactsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchArtifactsRequest members

    /// <summary>
    /// 
    /// </summary>

    IDERepoSearchDO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IDERepoSearchDO& value);


protected:
    IDERepoSearchDO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchArtifactsRequest& dereference_from_shared_ptr(std::shared_ptr<SearchArtifactsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SearchArtifactsRequest_H_
