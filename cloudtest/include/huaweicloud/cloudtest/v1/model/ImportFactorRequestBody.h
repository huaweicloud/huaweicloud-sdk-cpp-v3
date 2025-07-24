
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ImportFactorRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ImportFactorRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ImportFactorRequestBody
    : public ModelBase
{
public:
    ImportFactorRequestBody();
    virtual ~ImportFactorRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportFactorRequestBody members

    /// <summary>
    /// 待导入文件
    /// </summary>

    HttpContent getExcelFile() const;
    bool excelFileIsSet() const;
    void unsetexcelFile();
    void setExcelFile(const HttpContent& value);


protected:
    HttpContent excelFile_;
    bool excelFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ImportFactorRequestBody_H_
