
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CheckJobCountIsTopLimitRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CheckJobCountIsTopLimitRequest_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CheckJobCountIsTopLimitRequest
    : public ModelBase
{
public:
    CheckJobCountIsTopLimitRequest();
    virtual ~CheckJobCountIsTopLimitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckJobCountIsTopLimitRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckJobCountIsTopLimitRequest& dereference_from_shared_ptr(std::shared_ptr<CheckJobCountIsTopLimitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CheckJobCountIsTopLimitRequest_H_
