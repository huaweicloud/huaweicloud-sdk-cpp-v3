
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportImportFileResult_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportImportFileResult_H_


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
/// 对象导入信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SupportImportFileResult
    : public ModelBase
{
public:
    SupportImportFileResult();
    virtual ~SupportImportFileResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupportImportFileResult members

    /// <summary>
    /// 文件导入阈值。
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);

    /// <summary>
    /// 上一次选择对象的方式。
    /// </summary>

    std::string getPreviousSelect() const;
    bool previousSelectIsSet() const;
    void unsetpreviousSelect();
    void setPreviousSelect(const std::string& value);


protected:
    std::string fileSize_;
    bool fileSizeIsSet_;
    std::string previousSelect_;
    bool previousSelectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportImportFileResult_H_
