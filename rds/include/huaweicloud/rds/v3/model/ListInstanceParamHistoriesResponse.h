
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceParamHistoriesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceParamHistoriesResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ParamGroupHistoryResult.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstanceParamHistoriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceParamHistoriesResponse();
    virtual ~ListInstanceParamHistoriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListInstanceParamHistoriesResponse members

    /// <summary>
    /// 历史记录总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// host列表
    /// </summary>

    std::vector<ParamGroupHistoryResult>& getHistories();
    bool historiesIsSet() const;
    void unsethistories();
    void setHistories(const std::vector<ParamGroupHistoryResult>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ParamGroupHistoryResult> histories_;
    bool historiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceParamHistoriesResponse_H_
