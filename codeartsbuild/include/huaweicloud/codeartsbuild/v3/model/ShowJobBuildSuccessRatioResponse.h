
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildSuccessRatioResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildSuccessRatioResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobBuildSuccessRatio_result.h>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowJobBuildSuccessRatioResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowJobBuildSuccessRatioResponse();
    virtual ~ShowJobBuildSuccessRatioResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobBuildSuccessRatioResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowJobBuildSuccessRatio_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ShowJobBuildSuccessRatio_result& value);

    /// <summary>
    /// 返回状态信息
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    ShowJobBuildSuccessRatio_result result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildSuccessRatioResponse_H_
