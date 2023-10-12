
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ImportErrorMessageResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ImportErrorMessageResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 导入失败详情响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ImportErrorMessageResp
    : public ModelBase
{
public:
    ImportErrorMessageResp();
    virtual ~ImportErrorMessageResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportErrorMessageResp members

    /// <summary>
    /// sheet名称。
    /// </summary>

    std::string getSheetName() const;
    bool sheetNameIsSet() const;
    void unsetsheetName();
    void setSheetName(const std::string& value);

    /// <summary>
    /// 行号。
    /// </summary>

    std::string getRowRum() const;
    bool rowRumIsSet() const;
    void unsetrowRum();
    void setRowRum(const std::string& value);

    /// <summary>
    /// 字段值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 错误信息。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string sheetName_;
    bool sheetNameIsSet_;
    std::string rowRum_;
    bool rowRumIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ImportErrorMessageResp_H_
