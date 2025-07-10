
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TransferBackupResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TransferBackupResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TransferBackupResponseBody_results.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  TransferBackupResponse
    : public ModelBase, public HttpResponse
{
public:
    TransferBackupResponse();
    virtual ~TransferBackupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransferBackupResponse members

    /// <summary>
    /// 转储任务结果
    /// </summary>

    std::vector<TransferBackupResponseBody_results>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<TransferBackupResponseBody_results>& value);


protected:
    std::vector<TransferBackupResponseBody_results> results_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TransferBackupResponse_H_
