
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataFilteringResultResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataFilteringResultResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DbObjectFilteringResult.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowDataFilteringResultResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDataFilteringResultResponse();
    virtual ~ShowDataFilteringResultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDataFilteringResultResponse members

    /// <summary>
    /// 数据过滤规则校验成功的数量
    /// </summary>

    int64_t getSuccessCount() const;
    bool successCountIsSet() const;
    void unsetsuccessCount();
    void setSuccessCount(int64_t value);

    /// <summary>
    /// 数据过滤规则校验失败的数量
    /// </summary>

    int64_t getFailedCount() const;
    bool failedCountIsSet() const;
    void unsetfailedCount();
    void setFailedCount(int64_t value);

    /// <summary>
    /// 库表过滤规则校验结果
    /// </summary>

    std::vector<DbObjectFilteringResult>& getDbObjectFilteringResult();
    bool dbObjectFilteringResultIsSet() const;
    void unsetdbObjectFilteringResult();
    void setDbObjectFilteringResult(const std::vector<DbObjectFilteringResult>& value);


protected:
    int64_t successCount_;
    bool successCountIsSet_;
    int64_t failedCount_;
    bool failedCountIsSet_;
    std::vector<DbObjectFilteringResult> dbObjectFilteringResult_;
    bool dbObjectFilteringResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataFilteringResultResponse_H_
