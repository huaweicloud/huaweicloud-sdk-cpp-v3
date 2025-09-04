
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHtapErrorLogDetailResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHtapErrorLogDetailResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapErrorLogDetailResponse_error_log_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowHtapErrorLogDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHtapErrorLogDetailResponse();
    virtual ~ShowHtapErrorLogDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHtapErrorLogDetailResponse members

    /// <summary>
    /// **参数解释**： 错误日志列表。  **约束限制**： 不涉及。
    /// </summary>

    std::vector<HtapErrorLogDetailResponse_error_log_list>& getErrorLogList();
    bool errorLogListIsSet() const;
    void unseterrorLogList();
    void setErrorLogList(const std::vector<HtapErrorLogDetailResponse_error_log_list>& value);


protected:
    std::vector<HtapErrorLogDetailResponse_error_log_list> errorLogList_;
    bool errorLogListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHtapErrorLogDetailResponse_H_
