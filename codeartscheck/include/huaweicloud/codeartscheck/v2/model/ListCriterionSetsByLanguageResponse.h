
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListCriterionSetsByLanguageResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListCriterionSetsByLanguageResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartscheck/v2/model/CriterionSetsInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ListCriterionSetsByLanguageResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCriterionSetsByLanguageResponse();
    virtual ~ListCriterionSetsByLanguageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCriterionSetsByLanguageResponse members

    /// <summary>
    /// **参数解释：** HTTP响应状态。 **取值范围：** - OK：请求已成功处理，服务器返回了请求的资源或操作结果。 - ACCEPTED：请求已被服务器接受，但处理尚未完成（通常用于异步操作）。 - INTERNAL_SERVER_ERROR：接口内部异常。 - BAD_REQUEST：参数校验异常。
    /// </summary>

    std::string getHttpStatus() const;
    bool httpStatusIsSet() const;
    void unsethttpStatus();
    void setHttpStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CriterionSetsInfo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const CriterionSetsInfo& value);

    /// <summary>
    /// **参数解释：** 接口响应状态。 **取值范围：** - success：接口响应成功。 - error：接口响应失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string httpStatus_;
    bool httpStatusIsSet_;
    CriterionSetsInfo result_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListCriterionSetsByLanguageResponse_H_
