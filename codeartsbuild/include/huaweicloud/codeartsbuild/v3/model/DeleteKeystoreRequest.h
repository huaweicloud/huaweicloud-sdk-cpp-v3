
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteKeystoreRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteKeystoreRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DeleteKeystoreRequest
    : public ModelBase
{
public:
    DeleteKeystoreRequest();
    virtual ~DeleteKeystoreRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteKeystoreRequest members

    /// <summary>
    /// 文件秘钥Id
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);


protected:
    std::string keystoreId_;
    bool keystoreIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteKeystoreRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteKeystoreRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteKeystoreRequest_H_
