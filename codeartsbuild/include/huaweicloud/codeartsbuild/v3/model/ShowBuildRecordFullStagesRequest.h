
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowBuildRecordFullStagesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowBuildRecordFullStagesRequest_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowBuildRecordFullStagesRequest
    : public ModelBase
{
public:
    ShowBuildRecordFullStagesRequest();
    virtual ~ShowBuildRecordFullStagesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBuildRecordFullStagesRequest members

    /// <summary>
    /// 记录ID,36位数字、小写字母、&#39;-&#39;组组合。
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// 是否联级获取steps
    /// </summary>

    bool isCascade() const;
    bool cascadeIsSet() const;
    void unsetcascade();
    void setCascade(bool value);


protected:
    std::string recordId_;
    bool recordIdIsSet_;
    bool cascade_;
    bool cascadeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBuildRecordFullStagesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBuildRecordFullStagesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowBuildRecordFullStagesRequest_H_
