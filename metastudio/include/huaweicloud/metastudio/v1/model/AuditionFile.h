
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditionFile_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditionFile_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AuditionFile
    : public ModelBase
{
public:
    AuditionFile();
    virtual ~AuditionFile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditionFile members

    /// <summary>
    /// 试听文件下载链接，有效期为1个小时。
    /// </summary>

    std::string getDownloadUrl() const;
    bool downloadUrlIsSet() const;
    void unsetdownloadUrl();
    void setDownloadUrl(const std::string& value);


protected:
    std::string downloadUrl_;
    bool downloadUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditionFile_H_
