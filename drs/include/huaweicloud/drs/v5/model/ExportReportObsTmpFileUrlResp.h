
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportReportObsTmpFileUrlResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportReportObsTmpFileUrlResp_H_


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
/// 导出文件OBS临时URI对象
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ExportReportObsTmpFileUrlResp
    : public ModelBase
{
public:
    ExportReportObsTmpFileUrlResp();
    virtual ~ExportReportObsTmpFileUrlResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportReportObsTmpFileUrlResp members

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// OBS文件临时URI
    /// </summary>

    std::string getObsTempUri() const;
    bool obsTempUriIsSet() const;
    void unsetobsTempUri();
    void setObsTempUri(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string obsTempUri_;
    bool obsTempUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportReportObsTmpFileUrlResp_H_
