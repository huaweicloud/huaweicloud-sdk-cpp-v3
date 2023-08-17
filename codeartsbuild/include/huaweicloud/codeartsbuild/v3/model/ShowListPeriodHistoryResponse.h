
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowListPeriodHistoryResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowListPeriodHistoryResponse_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/HistoryRecord_1.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowListPeriodHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowListPeriodHistoryResponse();
    virtual ~ShowListPeriodHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowListPeriodHistoryResponse members

    /// <summary>
    /// 记录总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 构建历史列表
    /// </summary>

    std::vector<HistoryRecord_1>& getHistoryRecords();
    bool historyRecordsIsSet() const;
    void unsethistoryRecords();
    void setHistoryRecords(const std::vector<HistoryRecord_1>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<HistoryRecord_1> historyRecords_;
    bool historyRecordsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowListPeriodHistoryResponse_H_
