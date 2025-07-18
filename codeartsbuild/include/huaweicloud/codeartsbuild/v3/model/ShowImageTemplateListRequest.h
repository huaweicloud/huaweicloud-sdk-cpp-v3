
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowImageTemplateListRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowImageTemplateListRequest_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowImageTemplateListRequest
    : public ModelBase
{
public:
    ShowImageTemplateListRequest();
    virtual ~ShowImageTemplateListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowImageTemplateListRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowImageTemplateListRequest& dereference_from_shared_ptr(std::shared_ptr<ShowImageTemplateListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowImageTemplateListRequest_H_
