
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoScalingHistoryResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoScalingHistoryResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/AutoScalingRecordInfo.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowAutoScalingHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoScalingHistoryResponse();
    virtual ~ShowAutoScalingHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoScalingHistoryResponse members

    /// <summary>
    /// 记录总数。
    /// </summary>

    std::string getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(const std::string& value);

    /// <summary>
    /// 自动变配历史记录列表。
    /// </summary>

    std::vector<AutoScalingRecordInfo>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<AutoScalingRecordInfo>& value);


protected:
    std::string totalCount_;
    bool totalCountIsSet_;
    std::vector<AutoScalingRecordInfo> records_;
    bool recordsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoScalingHistoryResponse_H_
