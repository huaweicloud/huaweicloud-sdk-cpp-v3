
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SlowlogDownloadRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SlowlogDownloadRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  SlowlogDownloadRequest
    : public ModelBase
{
public:
    SlowlogDownloadRequest();
    virtual ~SlowlogDownloadRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SlowlogDownloadRequest members

    /// <summary>
    /// - 需要下载的文件的文件名, 当引擎为SQL Server时为必选。
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SlowlogDownloadRequest_H_
