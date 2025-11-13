
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UploadImportExcelTemplateResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UploadImportExcelTemplateResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/SuccessTable.h>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/ErrorTable.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UploadImportExcelTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    UploadImportExcelTemplateResponse();
    virtual ~UploadImportExcelTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadImportExcelTemplateResponse members

    /// <summary>
    /// **参数解释**：  Excel导入返回状态。  **取值范围**：  - true: 导入成功。 - false： 导入失败。
    /// </summary>

    bool isSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(bool value);

    /// <summary>
    /// **参数解释**：  已处理的行数。   **取值范围**：  不涉及。
    /// </summary>

    int32_t getProcessedRows() const;
    bool processedRowsIsSet() const;
    void unsetprocessedRows();
    void setProcessedRows(int32_t value);

    /// <summary>
    /// **参数解释**：  导入失败返回的错误列表。 
    /// </summary>

    std::vector<ErrorTable>& getErrorTables();
    bool errorTablesIsSet() const;
    void unseterrorTables();
    void setErrorTables(const std::vector<ErrorTable>& value);

    /// <summary>
    /// **参数解释**：  Excel导入验证成功的列表。 
    /// </summary>

    std::vector<SuccessTable>& getSuccessTables();
    bool successTablesIsSet() const;
    void unsetsuccessTables();
    void setSuccessTables(const std::vector<SuccessTable>& value);

    /// <summary>
    /// **参数解释**：  Excel导入验证失败的行数。   **取值范围**：  不涉及。
    /// </summary>

    int32_t getErrorCount() const;
    bool errorCountIsSet() const;
    void unseterrorCount();
    void setErrorCount(int32_t value);

    /// <summary>
    /// **参数解释**：  Excel导入验证成功的行数。   **取值范围**：  不涉及。
    /// </summary>

    int32_t getSuccessCount() const;
    bool successCountIsSet() const;
    void unsetsuccessCount();
    void setSuccessCount(int32_t value);


protected:
    bool success_;
    bool successIsSet_;
    int32_t processedRows_;
    bool processedRowsIsSet_;
    std::vector<ErrorTable> errorTables_;
    bool errorTablesIsSet_;
    std::vector<SuccessTable> successTables_;
    bool successTablesIsSet_;
    int32_t errorCount_;
    bool errorCountIsSet_;
    int32_t successCount_;
    bool successCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UploadImportExcelTemplateResponse_H_
