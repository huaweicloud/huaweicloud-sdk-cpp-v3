
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UploadKeystoreRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UploadKeystoreRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  UploadKeystoreRequestBody
    : public ModelBase
{
public:
    UploadKeystoreRequestBody();
    virtual ~UploadKeystoreRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadKeystoreRequestBody members

    /// <summary>
    /// 文件
    /// </summary>

    HttpContent getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const HttpContent& value);

    /// <summary>
    /// 同意隐私声明，允许使用用户敏感信息进行相关业务操作。
    /// </summary>

    std::string getPrivacy() const;
    bool privacyIsSet() const;
    void unsetprivacy();
    void setPrivacy(const std::string& value);

    /// <summary>
    /// 文件描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    HttpContent file_;
    bool fileIsSet_;
    std::string privacy_;
    bool privacyIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UploadKeystoreRequestBody_H_
