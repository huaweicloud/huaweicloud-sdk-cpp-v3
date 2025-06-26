
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_StatusSuccessResultWithUUID_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_StatusSuccessResultWithUUID_result_H_


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
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  StatusSuccessResultWithUUID_result
    : public ModelBase
{
public:
    StatusSuccessResultWithUUID_result();
    virtual ~StatusSuccessResultWithUUID_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatusSuccessResultWithUUID_result members

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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_StatusSuccessResultWithUUID_result_H_
