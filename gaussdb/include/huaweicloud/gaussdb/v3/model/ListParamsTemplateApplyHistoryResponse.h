
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListParamsTemplateApplyHistoryResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListParamsTemplateApplyHistoryResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TemplateApplyHistory.h>
#include <string>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListParamsTemplateApplyHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListParamsTemplateApplyHistoryResponse();
    virtual ~ListParamsTemplateApplyHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListParamsTemplateApplyHistoryResponse members

    /// <summary>
    /// 应用记录数量。
    /// </summary>

    std::string getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(const std::string& value);

    /// <summary>
    /// 应用记录信息
    /// </summary>

    std::vector<TemplateApplyHistory>& getHistories();
    bool historiesIsSet() const;
    void unsethistories();
    void setHistories(const std::vector<TemplateApplyHistory>& value);


protected:
    std::string totalCount_;
    bool totalCountIsSet_;
    std::vector<TemplateApplyHistory> histories_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListParamsTemplateApplyHistoryResponse_H_
