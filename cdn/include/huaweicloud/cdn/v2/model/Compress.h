
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Compress_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Compress_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 智能压缩。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Compress
    : public ModelBase
{
public:
    Compress();
    virtual ~Compress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Compress members

    /// <summary>
    /// 智能压缩开关（on：开启，off：关闭）。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 智能压缩类型（gzip：gzip压缩，br：brotli压缩）。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 压缩格式，内容总长度不可超过200个字符，  多种格式用“,”分割，每组内容不可超过50个字符， 开启状态下，首次传空时默认值为.js,.html,.css,.xml,.json,.shtml,.htm，否则为上次设置的结果。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Compress_H_
