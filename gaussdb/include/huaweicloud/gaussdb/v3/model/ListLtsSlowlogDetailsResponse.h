
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListLtsSlowlogDetailsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListLtsSlowlogDetailsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/LtsLogSlowDetail.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListLtsSlowlogDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLtsSlowlogDetailsResponse();
    virtual ~ListLtsSlowlogDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLtsSlowlogDetailsResponse members

    /// <summary>
    /// 慢日志列表。
    /// </summary>

    std::vector<LtsLogSlowDetail>& getSlowLogList();
    bool slowLogListIsSet() const;
    void unsetslowLogList();
    void setSlowLogList(const std::vector<LtsLogSlowDetail>& value);


protected:
    std::vector<LtsLogSlowDetail> slowLogList_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListLtsSlowlogDetailsResponse_H_
