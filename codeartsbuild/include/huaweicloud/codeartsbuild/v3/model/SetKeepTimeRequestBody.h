
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SetKeepTimeRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SetKeepTimeRequestBody_H_


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
/// 设置回收站中的任务保留时间接口请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  SetKeepTimeRequestBody
    : public ModelBase
{
public:
    SetKeepTimeRequestBody();
    virtual ~SetKeepTimeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetKeepTimeRequestBody members

    /// <summary>
    /// 回收站中的任务保留时间
    /// </summary>

    int32_t getKeepTime() const;
    bool keepTimeIsSet() const;
    void unsetkeepTime();
    void setKeepTime(int32_t value);


protected:
    int32_t keepTime_;
    bool keepTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SetKeepTimeRequestBody_H_
