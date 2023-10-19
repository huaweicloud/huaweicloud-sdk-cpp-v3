
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListModifyHistoryResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListModifyHistoryResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ParamGroupHistoryResponse.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListModifyHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListModifyHistoryResponse();
    virtual ~ListModifyHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListModifyHistoryResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 参数模板的修改历史列表。
    /// </summary>

    std::vector<ParamGroupHistoryResponse>& getHistories();
    bool historiesIsSet() const;
    void unsethistories();
    void setHistories(const std::vector<ParamGroupHistoryResponse>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ParamGroupHistoryResponse> histories_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListModifyHistoryResponse_H_
