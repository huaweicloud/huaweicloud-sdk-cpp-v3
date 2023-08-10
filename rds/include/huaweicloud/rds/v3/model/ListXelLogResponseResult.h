
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListXelLogResponseResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListXelLogResponseResult_H_

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
/// 扩展日志信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListXelLogResponseResult
    : public ModelBase
{
public:
    ListXelLogResponseResult();
    virtual ~ListXelLogResponseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListXelLogResponseResult members

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 日志大小，单位：KB
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string fileSize_;
    bool fileSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListXelLogResponseResult_H_
