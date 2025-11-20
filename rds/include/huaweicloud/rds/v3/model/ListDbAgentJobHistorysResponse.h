
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDbAgentJobHistorysResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDbAgentJobHistorysResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ListDbAgentJobHistorysResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListDbAgentJobHistorysResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDbAgentJobHistorysResponse();
    virtual ~ListDbAgentJobHistorysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDbAgentJobHistorysResponse members

    /// <summary>
    /// 执行历史列表。
    /// </summary>

    std::vector<ListDbAgentJobHistorysResult>& getHistorys();
    bool historysIsSet() const;
    void unsethistorys();
    void setHistorys(const std::vector<ListDbAgentJobHistorysResult>& value);

    /// <summary>
    /// 执行历史总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListDbAgentJobHistorysResult> historys_;
    bool historysIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDbAgentJobHistorysResponse_H_
