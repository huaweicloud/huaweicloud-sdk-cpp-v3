
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCategoryStatusResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCategoryStatusResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/StatusResponse_result.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowCategoryStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCategoryStatusResponse();
    virtual ~ShowCategoryStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCategoryStatusResponse members

    /// <summary>
    /// **参数解释**： 查询结果总数。  **取值范围**： 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    StatusResponse_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const StatusResponse_result& value);

    /// <summary>
    /// **参数解释**： 状态码。  **取值范围**： 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 响应信息。  **取值范围**： 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    StatusResponse_result result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCategoryStatusResponse_H_
