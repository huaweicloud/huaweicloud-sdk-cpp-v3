
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTtsAuditionFileResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTtsAuditionFileResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/AuditionFile.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTtsAuditionFileResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTtsAuditionFileResponse();
    virtual ~ShowTtsAuditionFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTtsAuditionFileResponse members

    /// <summary>
    /// 试听文件是否已生成完成。该标记为false时，应该每隔5秒再次调用本接口获取试听文件。
    /// </summary>

    bool isIsFileComplete() const;
    bool isFileCompleteIsSet() const;
    void unsetisFileComplete();
    void setIsFileComplete(bool value);

    /// <summary>
    /// 异常信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 试听文件列表。
    /// </summary>

    std::vector<AuditionFile>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<AuditionFile>& value);


protected:
    bool isFileComplete_;
    bool isFileCompleteIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<AuditionFile> files_;
    bool filesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTtsAuditionFileResponse_H_
