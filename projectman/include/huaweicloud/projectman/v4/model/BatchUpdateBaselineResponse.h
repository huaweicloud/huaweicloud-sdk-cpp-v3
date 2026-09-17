
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateBaselineResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateBaselineResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/BatchResultVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchUpdateBaselineResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchUpdateBaselineResponse();
    virtual ~BatchUpdateBaselineResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateBaselineResponse members

    /// <summary>
    /// **参数解释**： 返回状态。 **取值范围**： - success：批量操作成功 - error：批量操作失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 返回消息。 **取值范围**： 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchResultVO getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const BatchResultVO& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    BatchResultVO result_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateBaselineResponse_H_
