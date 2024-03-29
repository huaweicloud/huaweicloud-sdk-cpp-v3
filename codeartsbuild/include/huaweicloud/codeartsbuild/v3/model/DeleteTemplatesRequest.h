
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteTemplatesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteTemplatesRequest_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DeleteTemplatesRequest
    : public ModelBase
{
public:
    DeleteTemplatesRequest();
    virtual ~DeleteTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTemplatesRequest members

    /// <summary>
    /// uuid
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);


protected:
    std::string uuid_;
    bool uuidIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteTemplatesRequest_H_
