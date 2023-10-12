
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateUserResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateUserResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QueryUserResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchUpdateUserResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchUpdateUserResponse();
    virtual ~BatchUpdateUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateUserResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getAllCounts() const;
    bool allCountsIsSet() const;
    void unsetallCounts();
    void setAllCounts(int32_t value);

    /// <summary>
    /// 迁移用户信息
    /// </summary>

    std::vector<QueryUserResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<QueryUserResp>& value);


protected:
    int32_t allCounts_;
    bool allCountsIsSet_;
    std::vector<QueryUserResp> results_;
    bool resultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateUserResponse_H_
