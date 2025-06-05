
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystore_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystore_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListKeystore_result
    : public ModelBase
{
public:
    ListKeystore_result();
    virtual ~ListKeystore_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListKeystore_result members

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getKeystoreName() const;
    bool keystoreNameIsSet() const;
    void unsetkeystoreName();
    void setKeystoreName(const std::string& value);

    /// <summary>
    /// 文件ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string keystoreName_;
    bool keystoreNameIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystore_result_H_
