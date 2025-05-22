
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowBuildRecordFullStagesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowBuildRecordFullStagesResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/FullStages_result.h>
#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowBuildRecordFullStagesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBuildRecordFullStagesResponse();
    virtual ~ShowBuildRecordFullStagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBuildRecordFullStagesResponse members

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

    Object getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    FullStages_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const FullStages_result& value);


protected:
    std::string status_;
    bool statusIsSet_;
    Object error_;
    bool errorIsSet_;
    FullStages_result result_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowBuildRecordFullStagesResponse_H_
