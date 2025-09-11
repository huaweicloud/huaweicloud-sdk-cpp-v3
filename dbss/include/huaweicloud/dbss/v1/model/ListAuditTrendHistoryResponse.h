
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditTrendHistoryResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditTrendHistoryResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/TrendStatusResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditTrendHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditTrendHistoryResponse();
    virtual ~ListAuditTrendHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditTrendHistoryResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TrendStatusResponse>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<TrendStatusResponse>& value);


protected:
    std::vector<TrendStatusResponse> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditTrendHistoryResponse_H_
