
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadJunitCoverageZipResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadJunitCoverageZipResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DownloadJunitCoverageZipResponse
    : public ModelBase, public HttpResponse
{
public:
    DownloadJunitCoverageZipResponse();
    virtual ~DownloadJunitCoverageZipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadJunitCoverageZipResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadJunitCoverageZipResponse_H_
