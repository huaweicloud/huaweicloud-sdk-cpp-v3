
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CompressRules_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CompressRules_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CompressRules
    : public ModelBase
{
public:
    CompressRules();
    virtual ~CompressRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompressRules members

    /// <summary>
    /// GZIP压缩类型（目前只支持 gzip）
    /// </summary>

    std::string getCompressType() const;
    bool compressTypeIsSet() const;
    void unsetcompressType();
    void setCompressType(const std::string& value);

    /// <summary>
    /// GZIP压缩文件类型（文件后缀竖线分割，如：.js|.html|.css|.xml）
    /// </summary>

    std::string getCompressFileType() const;
    bool compressFileTypeIsSet() const;
    void unsetcompressFileType();
    void setCompressFileType(const std::string& value);


protected:
    std::string compressType_;
    bool compressTypeIsSet_;
    std::string compressFileType_;
    bool compressFileTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CompressRules_H_
