
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogDetailResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogDetailResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ShowStarRocksSlowLogDetail.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowSlowLogDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSlowLogDetailResponse();
    virtual ~ShowSlowLogDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSlowLogDetailResponse members

    /// <summary>
    /// **参数解释**：            慢日志列表。 
    /// </summary>

    std::vector<ShowStarRocksSlowLogDetail>& getSlowLogList();
    bool slowLogListIsSet() const;
    void unsetslowLogList();
    void setSlowLogList(const std::vector<ShowStarRocksSlowLogDetail>& value);


protected:
    std::vector<ShowStarRocksSlowLogDetail> slowLogList_;
    bool slowLogListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogDetailResponse_H_
