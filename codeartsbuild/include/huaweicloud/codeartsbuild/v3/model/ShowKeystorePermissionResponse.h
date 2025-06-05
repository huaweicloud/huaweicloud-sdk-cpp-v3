
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowKeystorePermissionResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowKeystorePermissionResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ShowKeystorePermissionResponseBody_result.h>
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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowKeystorePermissionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKeystorePermissionResponse();
    virtual ~ShowKeystorePermissionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKeystorePermissionResponse members

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 错误
    /// </summary>

    std::string getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ShowKeystorePermissionResponseBody_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ShowKeystorePermissionResponseBody_result& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string error_;
    bool errorIsSet_;
    ShowKeystorePermissionResponseBody_result result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowKeystorePermissionResponse_H_
