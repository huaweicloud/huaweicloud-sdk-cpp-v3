
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowRelatedProjectRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowRelatedProjectRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowRelatedProjectRequest
    : public ModelBase
{
public:
    ShowRelatedProjectRequest();
    virtual ~ShowRelatedProjectRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRelatedProjectRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRelatedProjectRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRelatedProjectRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowRelatedProjectRequest_H_
