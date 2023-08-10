
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateXelLogDownloadRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateXelLogDownloadRequestBody_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateXelLogDownloadRequestBody
    : public ModelBase
{
public:
    CreateXelLogDownloadRequestBody();
    virtual ~CreateXelLogDownloadRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateXelLogDownloadRequestBody members

    /// <summary>
    /// 文件名。取值范围：不为null和空字符串，只为大小写字母，数字和下划线，以“.xel”结尾
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateXelLogDownloadRequestBody_H_
