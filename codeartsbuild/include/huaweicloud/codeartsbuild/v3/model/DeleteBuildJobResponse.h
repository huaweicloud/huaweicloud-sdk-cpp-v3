
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteBuildJobResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteBuildJobResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/DeleteBuildJobResponseBody_result.h>
#include <string>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DeleteBuildJobResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteBuildJobResponse();
    virtual ~DeleteBuildJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteBuildJobResponse members

    /// <summary>
    /// 
    /// </summary>

    DeleteBuildJobResponseBody_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const DeleteBuildJobResponseBody_result& value);

    /// <summary>
    /// 状态信息
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    DeleteBuildJobResponseBody_result result_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteBuildJobResponse_H_
