
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowColumnInfoResultResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowColumnInfoResultResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DbObjectColumnInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowColumnInfoResultResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowColumnInfoResultResponse();
    virtual ~ShowColumnInfoResultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowColumnInfoResultResponse members

    /// <summary>
    /// 指定数据库表列信息
    /// </summary>

    std::vector<DbObjectColumnInfo>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<DbObjectColumnInfo>& value);

    /// <summary>
    /// 列表中的项目总数，与分页无关
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<DbObjectColumnInfo> results_;
    bool resultsIsSet_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowColumnInfoResultResponse_H_
