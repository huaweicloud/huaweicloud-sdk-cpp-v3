
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchDeleteBackupResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchDeleteBackupResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DeleteBackupResult.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchDeleteBackupResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteBackupResponse();
    virtual ~BatchDeleteBackupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteBackupResponse members

    /// <summary>
    /// **参数解释**：  备份删除异常信息。  **取值范围**：  当所有备份删除成功，该值是空。
    /// </summary>

    std::vector<DeleteBackupResult>& getFailedResults();
    bool failedResultsIsSet() const;
    void unsetfailedResults();
    void setFailedResults(const std::vector<DeleteBackupResult>& value);

    /// <summary>
    /// **参数解释**：  删除成功的数量。  **取值范围**：  0-50。
    /// </summary>

    int32_t getSuccessCount() const;
    bool successCountIsSet() const;
    void unsetsuccessCount();
    void setSuccessCount(int32_t value);

    /// <summary>
    /// **参数解释**：  删除失败的数量。  **取值范围**：  0-50。
    /// </summary>

    int32_t getFailedCount() const;
    bool failedCountIsSet() const;
    void unsetfailedCount();
    void setFailedCount(int32_t value);


protected:
    std::vector<DeleteBackupResult> failedResults_;
    bool failedResultsIsSet_;
    int32_t successCount_;
    bool successCountIsSet_;
    int32_t failedCount_;
    bool failedCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchDeleteBackupResponse_H_
