
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UploadImportExcelTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UploadImportExcelTemplateRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UploadImportExcelTemplateRequestBody
    : public ModelBase
{
public:
    UploadImportExcelTemplateRequestBody();
    virtual ~UploadImportExcelTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadImportExcelTemplateRequestBody members

    /// <summary>
    /// **参数解释**：  具体选择哪一种模板进行下载。  **约束限制**：  不涉及。  **取值范围**：  import_async: Excel导入文件类型。  **默认取值**：  不涉及。
    /// </summary>

    std::string getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsettemplateType();
    void setTemplateType(const std::string& value);

    /// <summary>
    /// **参数解释**：  Excel文件上传。  **约束限制**：  Excel文件。  **取值范围**：  .xlsx文件。  **默认取值**：  不涉及。
    /// </summary>

    HttpContent getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const HttpContent& value);

    /// <summary>
    /// **参数解释**：  判断是否是实例级同步。  **约束限制**：  不涉及。  **取值范围**：  - true：实例级同步。 - false: 非实例级同步。  **默认取值**：  false。
    /// </summary>

    std::string getIsInstanceLevel() const;
    bool isInstanceLevelIsSet() const;
    void unsetisInstanceLevel();
    void setIsInstanceLevel(const std::string& value);

    /// <summary>
    /// **参数解释**：  用户选中的数据库名，用英文\&quot;,\&quot;隔开。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSelectedDbs() const;
    bool selectedDbsIsSet() const;
    void unsetselectedDbs();
    void setSelectedDbs(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否支持标配符。  **约束限制**：  不涉及。  **取值范围**：  - true: 支持标配符。 - false: 不支持标配符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getIsSupportRegexp() const;
    bool isSupportRegexpIsSet() const;
    void unsetisSupportRegexp();
    void setIsSupportRegexp(const std::string& value);


protected:
    std::string templateType_;
    bool templateTypeIsSet_;
    HttpContent file_;
    bool fileIsSet_;
    std::string isInstanceLevel_;
    bool isInstanceLevelIsSet_;
    std::string selectedDbs_;
    bool selectedDbsIsSet_;
    std::string isSupportRegexp_;
    bool isSupportRegexpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UploadImportExcelTemplateRequestBody_H_
